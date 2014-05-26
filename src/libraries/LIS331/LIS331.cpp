/* Copyright 2011 David Irvine
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * $Rev: 158 $   
 * $Author: irvined $ 
 * $Date: 2012-10-31 22:42:17 +0000 (Wed, 31 Oct 2012) $  
 *
*/

#include "LIS331.h"
#include "Arduino.h"
#include "Wire.h"

LIS331::LIS331(){
	i2cAddress=25;
	}


bool LIS331::readReg(byte addr, byte *val){
  Wire.beginTransmission(i2cAddress);
  Wire.write(addr);
  Wire.endTransmission();

  Wire.requestFrom(i2cAddress,1);
  int timeouts=0;
  while(!Wire.available() && timeouts++<=LR_MAX_TRIES){
    delay(10);
  }
  if (Wire.available()){
		*val=Wire.read();
		return true;
  }else{
    return false;
  }
}
bool LIS331::writeReg(byte addr, byte val){
  Wire.beginTransmission(i2cAddress);
  Wire.write(addr);
  Wire.write(val);
  Wire.endTransmission();
  return true;
}

  bool LIS331::getBit(byte b,byte bit){
	b<<=(bit);
	if (b>=127){
		return true;
	}
	return false;
  }


  bool LIS331::statusHasOverrun(){
	byte status;
	if (readReg(LR_STATUS_REG, &status)){
		return getBit(status,0);
	}
	return false;
  }

  
  bool LIS331::statusHasZOverrun(){
	byte status;
	if (readReg(LR_STATUS_REG, &status)){
		return getBit(status,1);
	}
	return false;
  }
  bool LIS331::statusHasYOverrun(){
	byte status;
	if (readReg(LR_STATUS_REG, &status)){
		return getBit(status,2);
	}
	return false;
  }
  bool LIS331::statusHasXOverrun(){
	byte status;
	if (readReg(LR_STATUS_REG, &status)){
		return getBit(status,3);
	}
	return false;
  }


  bool LIS331::statusHasDataAvailable(){
	byte status;
	if (readReg(LR_STATUS_REG, &status)){
		return getBit(status,4);
	}
	return false;
  }

  bool LIS331::statusHasZDataAvailable(){
	byte status;
	if (readReg(LR_STATUS_REG, &status)){
		return getBit(status,5);
	}
	return false;
  }
  bool LIS331::statusHasYDataAvailable(){
	byte status;
	if (readReg(LR_STATUS_REG, &status)){
		return getBit(status,6);
	}
	return false;
  }
  bool LIS331::statusHasXDataAvailable(){
	byte status;
	if (readReg(LR_STATUS_REG, &status)){
		return getBit(status,7);
	}
	return false;
  }

	byte LIS331::getPowerStatus(){
		byte state;
		if (readReg(LR_CTRL_REG1, &state)){
			// shift 5 bits to the right
			state=state>>5;
			// shift 5 bits to the left
			state=state<<5;
			// the result is that the right 5 bits are now zero
			// this means that you can compare the output with the constants defined above.
			return state;
	    }
		return 0;
	}

	bool LIS331::setPowerStatus(byte power){
		byte setting;
		if (readReg(LR_CTRL_REG1, &setting)){
			// drop the power bits by leftshifting by 3
			setting=setting<<3;
			// move the rest of the settings back to normal
			setting=setting>>3;
			setting=setting|power;
			return writeReg(LR_CTRL_REG1,setting);
		}
		return false;
	}
	byte LIS331::getDataRate(){
		byte rate;
		if (readReg(LR_CTRL_REG1, &rate)){
			rate=rate<<3;
			rate=rate>>6;
			rate=rate<<3;
			return rate;
	    }
		return 0;
	}
	bool LIS331::setDataRate(byte rate){
		byte setting;
		if (readReg(LR_CTRL_REG1, &setting)){
			// drop the power bits by leftshifting by 3
			setting=setting<<6;
			// move the rest of the settings back to normal
			setting=setting>>6;
			setting=setting|rate;

			byte power;
			power=getPowerStatus();
			setting=setting|power;

			return writeReg(LR_CTRL_REG1,setting);
		}
		return false;
		}


	byte LIS331::getZEnable(){
		byte reg;
		if (readReg(LR_CTRL_REG1, &reg)){
			if (getBit(reg,5)){
				return LR_Z_ENABLE;
			}else{
				return LR_Z_DISABLE;
			}
		}
		return 0;
	}

	byte LIS331::getYEnable(){
		byte reg;
		if (readReg(LR_CTRL_REG1, &reg)){
			if (getBit(reg,6)){
				return LR_Z_ENABLE;
			}else{
				return LR_Z_DISABLE;
			}
		}
		return 0;
	}

	byte LIS331::getXEnable(){
		byte reg;
		if (readReg(LR_CTRL_REG1, &reg)){
			if (getBit(reg,7)){
				return LR_Z_ENABLE;
			}else{
				return LR_Z_DISABLE;
			}
		}
		return 0;
	}


bool LIS331::setZEnable(bool state){
	byte setting;
	if (readReg(LR_CTRL_REG1, &setting)){
		setting &= ~(1<<2);
		if (state){
			setting |= 1<<2;
		}
		return writeReg(LR_CTRL_REG1,setting);
	}
	return false;
}
	


bool LIS331::setYEnable(bool state){
	byte setting;
	if (readReg(LR_CTRL_REG1, &setting)){
		setting &= ~(1<<1);
		if (state){
			setting |= 1<<1;
		}
		return writeReg(LR_CTRL_REG1,setting);
	}
	return false;
}
	


bool LIS331::setXEnable(bool state){
	byte setting;
	if (readReg(LR_CTRL_REG1, &setting)){
		setting &= ~(1<<0);
		if (state){
			setting |= 1<<0;
		}
		return writeReg(LR_CTRL_REG1,setting);
	}
	return false;
}

bool LIS331::getZValue(int16_t *val){
	byte high;
	byte low;
	if (!readReg(LR_OUT_Z_L, &low)){
		return false;
	}
	if (!readReg(LR_OUT_Z_H, &high)){
		return false;
	}
	*val=(low|(high << 8));
	return true;
}


	
	


bool LIS331::getYValue(int16_t *val){
	byte high;
	byte low;
	if (!readReg(LR_OUT_Y_L, &low)){
		return false;
	}
	if (!readReg(LR_OUT_Y_H, &high)){
		return false;
	}
	*val=(low|(high << 8));
	return true;
}


	
	


bool LIS331::getXValue(int16_t *val){
	byte high;
	byte low;
	if (!readReg(LR_OUT_X_L, &low)){
		return false;
	}
	if (!readReg(LR_OUT_X_H, &high)){
		return false;
	}
	*val=(low|(high << 8));
	return true;
}


	
	


