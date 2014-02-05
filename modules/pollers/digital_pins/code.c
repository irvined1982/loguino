#ifdef ENABLE_DIGITAL_POLLER
void digital_pin_init(){
/* 
for pin in range(54):
	print """
	#ifdef DP_SAMPLE_PIN_%d
		DEBUG("Setting pin %d to input");
		pinMode(%d, INPUT);
		DEBUG("Sucessfully set pin %f to input");
		#ifdef DP_HOLD_PIN_%d_HIGH
			DEBUG("Setting pin %d pullup HIGH");
			digitalWrite(%d,HIGH);
			DEBUG("Sucessfully set pin %d pullup HIGH");
		#elif
			DEBUG("Setting pin %d pullup LOW");
			digitalWrite(%d,LOW);
			DEBUG("Sucessfully set pin %d pullup LOW");
		#endif
	#endif""" % (pin, pin, pin, pin, pin, pin, pin, pin, pin, pin, pin) 
*/
	DEBUG("Begin");
	#ifdef DP_SAMPLE_PIN_0
		DEBUG("Setting pin 0 to input");
		pinMode(0, INPUT);
		DEBUG("Sucessfully set pin 0.000000 to input");
		#ifdef DP_HOLD_PIN_0_HIGH
			DEBUG("Setting pin 0 pullup HIGH");
			digitalWrite(0,HIGH);
			DEBUG("Sucessfully set pin 0 pullup HIGH");
		#elif
			DEBUG("Setting pin 0 pullup LOW");
			digitalWrite(0,LOW);
			DEBUG("Sucessfully set pin 0 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_1
		DEBUG("Setting pin 1 to input");
		pinMode(1, INPUT);
		DEBUG("Sucessfully set pin 1.000000 to input");
		#ifdef DP_HOLD_PIN_1_HIGH
			DEBUG("Setting pin 1 pullup HIGH");
			digitalWrite(1,HIGH);
			DEBUG("Sucessfully set pin 1 pullup HIGH");
		#elif
			DEBUG("Setting pin 1 pullup LOW");
			digitalWrite(1,LOW);
			DEBUG("Sucessfully set pin 1 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_2
		DEBUG("Setting pin 2 to input");
		pinMode(2, INPUT);
		DEBUG("Sucessfully set pin 2.000000 to input");
		#ifdef DP_HOLD_PIN_2_HIGH
			DEBUG("Setting pin 2 pullup HIGH");
			digitalWrite(2,HIGH);
			DEBUG("Sucessfully set pin 2 pullup HIGH");
		#elif
			DEBUG("Setting pin 2 pullup LOW");
			digitalWrite(2,LOW);
			DEBUG("Sucessfully set pin 2 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_3
		DEBUG("Setting pin 3 to input");
		pinMode(3, INPUT);
		DEBUG("Sucessfully set pin 3.000000 to input");
		#ifdef DP_HOLD_PIN_3_HIGH
			DEBUG("Setting pin 3 pullup HIGH");
			digitalWrite(3,HIGH);
			DEBUG("Sucessfully set pin 3 pullup HIGH");
		#elif
			DEBUG("Setting pin 3 pullup LOW");
			digitalWrite(3,LOW);
			DEBUG("Sucessfully set pin 3 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_4
		DEBUG("Setting pin 4 to input");
		pinMode(4, INPUT);
		DEBUG("Sucessfully set pin 4.000000 to input");
		#ifdef DP_HOLD_PIN_4_HIGH
			DEBUG("Setting pin 4 pullup HIGH");
			digitalWrite(4,HIGH);
			DEBUG("Sucessfully set pin 4 pullup HIGH");
		#elif
			DEBUG("Setting pin 4 pullup LOW");
			digitalWrite(4,LOW);
			DEBUG("Sucessfully set pin 4 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_5
		DEBUG("Setting pin 5 to input");
		pinMode(5, INPUT);
		DEBUG("Sucessfully set pin 5.000000 to input");
		#ifdef DP_HOLD_PIN_5_HIGH
			DEBUG("Setting pin 5 pullup HIGH");
			digitalWrite(5,HIGH);
			DEBUG("Sucessfully set pin 5 pullup HIGH");
		#elif
			DEBUG("Setting pin 5 pullup LOW");
			digitalWrite(5,LOW);
			DEBUG("Sucessfully set pin 5 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_6
		DEBUG("Setting pin 6 to input");
		pinMode(6, INPUT);
		DEBUG("Sucessfully set pin 6.000000 to input");
		#ifdef DP_HOLD_PIN_6_HIGH
			DEBUG("Setting pin 6 pullup HIGH");
			digitalWrite(6,HIGH);
			DEBUG("Sucessfully set pin 6 pullup HIGH");
		#elif
			DEBUG("Setting pin 6 pullup LOW");
			digitalWrite(6,LOW);
			DEBUG("Sucessfully set pin 6 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_7
		DEBUG("Setting pin 7 to input");
		pinMode(7, INPUT);
		DEBUG("Sucessfully set pin 7.000000 to input");
		#ifdef DP_HOLD_PIN_7_HIGH
			DEBUG("Setting pin 7 pullup HIGH");
			digitalWrite(7,HIGH);
			DEBUG("Sucessfully set pin 7 pullup HIGH");
		#elif
			DEBUG("Setting pin 7 pullup LOW");
			digitalWrite(7,LOW);
			DEBUG("Sucessfully set pin 7 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_8
		DEBUG("Setting pin 8 to input");
		pinMode(8, INPUT);
		DEBUG("Sucessfully set pin 8.000000 to input");
		#ifdef DP_HOLD_PIN_8_HIGH
			DEBUG("Setting pin 8 pullup HIGH");
			digitalWrite(8,HIGH);
			DEBUG("Sucessfully set pin 8 pullup HIGH");
		#elif
			DEBUG("Setting pin 8 pullup LOW");
			digitalWrite(8,LOW);
			DEBUG("Sucessfully set pin 8 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_9
		DEBUG("Setting pin 9 to input");
		pinMode(9, INPUT);
		DEBUG("Sucessfully set pin 9.000000 to input");
		#ifdef DP_HOLD_PIN_9_HIGH
			DEBUG("Setting pin 9 pullup HIGH");
			digitalWrite(9,HIGH);
			DEBUG("Sucessfully set pin 9 pullup HIGH");
		#elif
			DEBUG("Setting pin 9 pullup LOW");
			digitalWrite(9,LOW);
			DEBUG("Sucessfully set pin 9 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_10
		DEBUG("Setting pin 10 to input");
		pinMode(10, INPUT);
		DEBUG("Sucessfully set pin 10.000000 to input");
		#ifdef DP_HOLD_PIN_10_HIGH
			DEBUG("Setting pin 10 pullup HIGH");
			digitalWrite(10,HIGH);
			DEBUG("Sucessfully set pin 10 pullup HIGH");
		#elif
			DEBUG("Setting pin 10 pullup LOW");
			digitalWrite(10,LOW);
			DEBUG("Sucessfully set pin 10 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_11
		DEBUG("Setting pin 11 to input");
		pinMode(11, INPUT);
		DEBUG("Sucessfully set pin 11.000000 to input");
		#ifdef DP_HOLD_PIN_11_HIGH
			DEBUG("Setting pin 11 pullup HIGH");
			digitalWrite(11,HIGH);
			DEBUG("Sucessfully set pin 11 pullup HIGH");
		#elif
			DEBUG("Setting pin 11 pullup LOW");
			digitalWrite(11,LOW);
			DEBUG("Sucessfully set pin 11 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_12
		DEBUG("Setting pin 12 to input");
		pinMode(12, INPUT);
		DEBUG("Sucessfully set pin 12.000000 to input");
		#ifdef DP_HOLD_PIN_12_HIGH
			DEBUG("Setting pin 12 pullup HIGH");
			digitalWrite(12,HIGH);
			DEBUG("Sucessfully set pin 12 pullup HIGH");
		#elif
			DEBUG("Setting pin 12 pullup LOW");
			digitalWrite(12,LOW);
			DEBUG("Sucessfully set pin 12 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_13
		DEBUG("Setting pin 13 to input");
		pinMode(13, INPUT);
		DEBUG("Sucessfully set pin 13.000000 to input");
		#ifdef DP_HOLD_PIN_13_HIGH
			DEBUG("Setting pin 13 pullup HIGH");
			digitalWrite(13,HIGH);
			DEBUG("Sucessfully set pin 13 pullup HIGH");
		#elif
			DEBUG("Setting pin 13 pullup LOW");
			digitalWrite(13,LOW);
			DEBUG("Sucessfully set pin 13 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_14
		DEBUG("Setting pin 14 to input");
		pinMode(14, INPUT);
		DEBUG("Sucessfully set pin 14.000000 to input");
		#ifdef DP_HOLD_PIN_14_HIGH
			DEBUG("Setting pin 14 pullup HIGH");
			digitalWrite(14,HIGH);
			DEBUG("Sucessfully set pin 14 pullup HIGH");
		#elif
			DEBUG("Setting pin 14 pullup LOW");
			digitalWrite(14,LOW);
			DEBUG("Sucessfully set pin 14 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_15
		DEBUG("Setting pin 15 to input");
		pinMode(15, INPUT);
		DEBUG("Sucessfully set pin 15.000000 to input");
		#ifdef DP_HOLD_PIN_15_HIGH
			DEBUG("Setting pin 15 pullup HIGH");
			digitalWrite(15,HIGH);
			DEBUG("Sucessfully set pin 15 pullup HIGH");
		#elif
			DEBUG("Setting pin 15 pullup LOW");
			digitalWrite(15,LOW);
			DEBUG("Sucessfully set pin 15 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_16
		DEBUG("Setting pin 16 to input");
		pinMode(16, INPUT);
		DEBUG("Sucessfully set pin 16.000000 to input");
		#ifdef DP_HOLD_PIN_16_HIGH
			DEBUG("Setting pin 16 pullup HIGH");
			digitalWrite(16,HIGH);
			DEBUG("Sucessfully set pin 16 pullup HIGH");
		#elif
			DEBUG("Setting pin 16 pullup LOW");
			digitalWrite(16,LOW);
			DEBUG("Sucessfully set pin 16 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_17
		DEBUG("Setting pin 17 to input");
		pinMode(17, INPUT);
		DEBUG("Sucessfully set pin 17.000000 to input");
		#ifdef DP_HOLD_PIN_17_HIGH
			DEBUG("Setting pin 17 pullup HIGH");
			digitalWrite(17,HIGH);
			DEBUG("Sucessfully set pin 17 pullup HIGH");
		#elif
			DEBUG("Setting pin 17 pullup LOW");
			digitalWrite(17,LOW);
			DEBUG("Sucessfully set pin 17 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_18
		DEBUG("Setting pin 18 to input");
		pinMode(18, INPUT);
		DEBUG("Sucessfully set pin 18.000000 to input");
		#ifdef DP_HOLD_PIN_18_HIGH
			DEBUG("Setting pin 18 pullup HIGH");
			digitalWrite(18,HIGH);
			DEBUG("Sucessfully set pin 18 pullup HIGH");
		#elif
			DEBUG("Setting pin 18 pullup LOW");
			digitalWrite(18,LOW);
			DEBUG("Sucessfully set pin 18 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_19
		DEBUG("Setting pin 19 to input");
		pinMode(19, INPUT);
		DEBUG("Sucessfully set pin 19.000000 to input");
		#ifdef DP_HOLD_PIN_19_HIGH
			DEBUG("Setting pin 19 pullup HIGH");
			digitalWrite(19,HIGH);
			DEBUG("Sucessfully set pin 19 pullup HIGH");
		#elif
			DEBUG("Setting pin 19 pullup LOW");
			digitalWrite(19,LOW);
			DEBUG("Sucessfully set pin 19 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_20
		DEBUG("Setting pin 20 to input");
		pinMode(20, INPUT);
		DEBUG("Sucessfully set pin 20.000000 to input");
		#ifdef DP_HOLD_PIN_20_HIGH
			DEBUG("Setting pin 20 pullup HIGH");
			digitalWrite(20,HIGH);
			DEBUG("Sucessfully set pin 20 pullup HIGH");
		#elif
			DEBUG("Setting pin 20 pullup LOW");
			digitalWrite(20,LOW);
			DEBUG("Sucessfully set pin 20 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_21
		DEBUG("Setting pin 21 to input");
		pinMode(21, INPUT);
		DEBUG("Sucessfully set pin 21.000000 to input");
		#ifdef DP_HOLD_PIN_21_HIGH
			DEBUG("Setting pin 21 pullup HIGH");
			digitalWrite(21,HIGH);
			DEBUG("Sucessfully set pin 21 pullup HIGH");
		#elif
			DEBUG("Setting pin 21 pullup LOW");
			digitalWrite(21,LOW);
			DEBUG("Sucessfully set pin 21 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_22
		DEBUG("Setting pin 22 to input");
		pinMode(22, INPUT);
		DEBUG("Sucessfully set pin 22.000000 to input");
		#ifdef DP_HOLD_PIN_22_HIGH
			DEBUG("Setting pin 22 pullup HIGH");
			digitalWrite(22,HIGH);
			DEBUG("Sucessfully set pin 22 pullup HIGH");
		#elif
			DEBUG("Setting pin 22 pullup LOW");
			digitalWrite(22,LOW);
			DEBUG("Sucessfully set pin 22 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_23
		DEBUG("Setting pin 23 to input");
		pinMode(23, INPUT);
		DEBUG("Sucessfully set pin 23.000000 to input");
		#ifdef DP_HOLD_PIN_23_HIGH
			DEBUG("Setting pin 23 pullup HIGH");
			digitalWrite(23,HIGH);
			DEBUG("Sucessfully set pin 23 pullup HIGH");
		#elif
			DEBUG("Setting pin 23 pullup LOW");
			digitalWrite(23,LOW);
			DEBUG("Sucessfully set pin 23 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_24
		DEBUG("Setting pin 24 to input");
		pinMode(24, INPUT);
		DEBUG("Sucessfully set pin 24.000000 to input");
		#ifdef DP_HOLD_PIN_24_HIGH
			DEBUG("Setting pin 24 pullup HIGH");
			digitalWrite(24,HIGH);
			DEBUG("Sucessfully set pin 24 pullup HIGH");
		#elif
			DEBUG("Setting pin 24 pullup LOW");
			digitalWrite(24,LOW);
			DEBUG("Sucessfully set pin 24 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_25
		DEBUG("Setting pin 25 to input");
		pinMode(25, INPUT);
		DEBUG("Sucessfully set pin 25.000000 to input");
		#ifdef DP_HOLD_PIN_25_HIGH
			DEBUG("Setting pin 25 pullup HIGH");
			digitalWrite(25,HIGH);
			DEBUG("Sucessfully set pin 25 pullup HIGH");
		#elif
			DEBUG("Setting pin 25 pullup LOW");
			digitalWrite(25,LOW);
			DEBUG("Sucessfully set pin 25 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_26
		DEBUG("Setting pin 26 to input");
		pinMode(26, INPUT);
		DEBUG("Sucessfully set pin 26.000000 to input");
		#ifdef DP_HOLD_PIN_26_HIGH
			DEBUG("Setting pin 26 pullup HIGH");
			digitalWrite(26,HIGH);
			DEBUG("Sucessfully set pin 26 pullup HIGH");
		#elif
			DEBUG("Setting pin 26 pullup LOW");
			digitalWrite(26,LOW);
			DEBUG("Sucessfully set pin 26 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_27
		DEBUG("Setting pin 27 to input");
		pinMode(27, INPUT);
		DEBUG("Sucessfully set pin 27.000000 to input");
		#ifdef DP_HOLD_PIN_27_HIGH
			DEBUG("Setting pin 27 pullup HIGH");
			digitalWrite(27,HIGH);
			DEBUG("Sucessfully set pin 27 pullup HIGH");
		#elif
			DEBUG("Setting pin 27 pullup LOW");
			digitalWrite(27,LOW);
			DEBUG("Sucessfully set pin 27 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_28
		DEBUG("Setting pin 28 to input");
		pinMode(28, INPUT);
		DEBUG("Sucessfully set pin 28.000000 to input");
		#ifdef DP_HOLD_PIN_28_HIGH
			DEBUG("Setting pin 28 pullup HIGH");
			digitalWrite(28,HIGH);
			DEBUG("Sucessfully set pin 28 pullup HIGH");
		#elif
			DEBUG("Setting pin 28 pullup LOW");
			digitalWrite(28,LOW);
			DEBUG("Sucessfully set pin 28 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_29
		DEBUG("Setting pin 29 to input");
		pinMode(29, INPUT);
		DEBUG("Sucessfully set pin 29.000000 to input");
		#ifdef DP_HOLD_PIN_29_HIGH
			DEBUG("Setting pin 29 pullup HIGH");
			digitalWrite(29,HIGH);
			DEBUG("Sucessfully set pin 29 pullup HIGH");
		#elif
			DEBUG("Setting pin 29 pullup LOW");
			digitalWrite(29,LOW);
			DEBUG("Sucessfully set pin 29 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_30
		DEBUG("Setting pin 30 to input");
		pinMode(30, INPUT);
		DEBUG("Sucessfully set pin 30.000000 to input");
		#ifdef DP_HOLD_PIN_30_HIGH
			DEBUG("Setting pin 30 pullup HIGH");
			digitalWrite(30,HIGH);
			DEBUG("Sucessfully set pin 30 pullup HIGH");
		#elif
			DEBUG("Setting pin 30 pullup LOW");
			digitalWrite(30,LOW);
			DEBUG("Sucessfully set pin 30 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_31
		DEBUG("Setting pin 31 to input");
		pinMode(31, INPUT);
		DEBUG("Sucessfully set pin 31.000000 to input");
		#ifdef DP_HOLD_PIN_31_HIGH
			DEBUG("Setting pin 31 pullup HIGH");
			digitalWrite(31,HIGH);
			DEBUG("Sucessfully set pin 31 pullup HIGH");
		#elif
			DEBUG("Setting pin 31 pullup LOW");
			digitalWrite(31,LOW);
			DEBUG("Sucessfully set pin 31 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_32
		DEBUG("Setting pin 32 to input");
		pinMode(32, INPUT);
		DEBUG("Sucessfully set pin 32.000000 to input");
		#ifdef DP_HOLD_PIN_32_HIGH
			DEBUG("Setting pin 32 pullup HIGH");
			digitalWrite(32,HIGH);
			DEBUG("Sucessfully set pin 32 pullup HIGH");
		#elif
			DEBUG("Setting pin 32 pullup LOW");
			digitalWrite(32,LOW);
			DEBUG("Sucessfully set pin 32 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_33
		DEBUG("Setting pin 33 to input");
		pinMode(33, INPUT);
		DEBUG("Sucessfully set pin 33.000000 to input");
		#ifdef DP_HOLD_PIN_33_HIGH
			DEBUG("Setting pin 33 pullup HIGH");
			digitalWrite(33,HIGH);
			DEBUG("Sucessfully set pin 33 pullup HIGH");
		#elif
			DEBUG("Setting pin 33 pullup LOW");
			digitalWrite(33,LOW);
			DEBUG("Sucessfully set pin 33 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_34
		DEBUG("Setting pin 34 to input");
		pinMode(34, INPUT);
		DEBUG("Sucessfully set pin 34.000000 to input");
		#ifdef DP_HOLD_PIN_34_HIGH
			DEBUG("Setting pin 34 pullup HIGH");
			digitalWrite(34,HIGH);
			DEBUG("Sucessfully set pin 34 pullup HIGH");
		#elif
			DEBUG("Setting pin 34 pullup LOW");
			digitalWrite(34,LOW);
			DEBUG("Sucessfully set pin 34 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_35
		DEBUG("Setting pin 35 to input");
		pinMode(35, INPUT);
		DEBUG("Sucessfully set pin 35.000000 to input");
		#ifdef DP_HOLD_PIN_35_HIGH
			DEBUG("Setting pin 35 pullup HIGH");
			digitalWrite(35,HIGH);
			DEBUG("Sucessfully set pin 35 pullup HIGH");
		#elif
			DEBUG("Setting pin 35 pullup LOW");
			digitalWrite(35,LOW);
			DEBUG("Sucessfully set pin 35 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_36
		DEBUG("Setting pin 36 to input");
		pinMode(36, INPUT);
		DEBUG("Sucessfully set pin 36.000000 to input");
		#ifdef DP_HOLD_PIN_36_HIGH
			DEBUG("Setting pin 36 pullup HIGH");
			digitalWrite(36,HIGH);
			DEBUG("Sucessfully set pin 36 pullup HIGH");
		#elif
			DEBUG("Setting pin 36 pullup LOW");
			digitalWrite(36,LOW);
			DEBUG("Sucessfully set pin 36 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_37
		DEBUG("Setting pin 37 to input");
		pinMode(37, INPUT);
		DEBUG("Sucessfully set pin 37.000000 to input");
		#ifdef DP_HOLD_PIN_37_HIGH
			DEBUG("Setting pin 37 pullup HIGH");
			digitalWrite(37,HIGH);
			DEBUG("Sucessfully set pin 37 pullup HIGH");
		#elif
			DEBUG("Setting pin 37 pullup LOW");
			digitalWrite(37,LOW);
			DEBUG("Sucessfully set pin 37 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_38
		DEBUG("Setting pin 38 to input");
		pinMode(38, INPUT);
		DEBUG("Sucessfully set pin 38.000000 to input");
		#ifdef DP_HOLD_PIN_38_HIGH
			DEBUG("Setting pin 38 pullup HIGH");
			digitalWrite(38,HIGH);
			DEBUG("Sucessfully set pin 38 pullup HIGH");
		#elif
			DEBUG("Setting pin 38 pullup LOW");
			digitalWrite(38,LOW);
			DEBUG("Sucessfully set pin 38 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_39
		DEBUG("Setting pin 39 to input");
		pinMode(39, INPUT);
		DEBUG("Sucessfully set pin 39.000000 to input");
		#ifdef DP_HOLD_PIN_39_HIGH
			DEBUG("Setting pin 39 pullup HIGH");
			digitalWrite(39,HIGH);
			DEBUG("Sucessfully set pin 39 pullup HIGH");
		#elif
			DEBUG("Setting pin 39 pullup LOW");
			digitalWrite(39,LOW);
			DEBUG("Sucessfully set pin 39 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_40
		DEBUG("Setting pin 40 to input");
		pinMode(40, INPUT);
		DEBUG("Sucessfully set pin 40.000000 to input");
		#ifdef DP_HOLD_PIN_40_HIGH
			DEBUG("Setting pin 40 pullup HIGH");
			digitalWrite(40,HIGH);
			DEBUG("Sucessfully set pin 40 pullup HIGH");
		#elif
			DEBUG("Setting pin 40 pullup LOW");
			digitalWrite(40,LOW);
			DEBUG("Sucessfully set pin 40 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_41
		DEBUG("Setting pin 41 to input");
		pinMode(41, INPUT);
		DEBUG("Sucessfully set pin 41.000000 to input");
		#ifdef DP_HOLD_PIN_41_HIGH
			DEBUG("Setting pin 41 pullup HIGH");
			digitalWrite(41,HIGH);
			DEBUG("Sucessfully set pin 41 pullup HIGH");
		#elif
			DEBUG("Setting pin 41 pullup LOW");
			digitalWrite(41,LOW);
			DEBUG("Sucessfully set pin 41 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_42
		DEBUG("Setting pin 42 to input");
		pinMode(42, INPUT);
		DEBUG("Sucessfully set pin 42.000000 to input");
		#ifdef DP_HOLD_PIN_42_HIGH
			DEBUG("Setting pin 42 pullup HIGH");
			digitalWrite(42,HIGH);
			DEBUG("Sucessfully set pin 42 pullup HIGH");
		#elif
			DEBUG("Setting pin 42 pullup LOW");
			digitalWrite(42,LOW);
			DEBUG("Sucessfully set pin 42 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_43
		DEBUG("Setting pin 43 to input");
		pinMode(43, INPUT);
		DEBUG("Sucessfully set pin 43.000000 to input");
		#ifdef DP_HOLD_PIN_43_HIGH
			DEBUG("Setting pin 43 pullup HIGH");
			digitalWrite(43,HIGH);
			DEBUG("Sucessfully set pin 43 pullup HIGH");
		#elif
			DEBUG("Setting pin 43 pullup LOW");
			digitalWrite(43,LOW);
			DEBUG("Sucessfully set pin 43 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_44
		DEBUG("Setting pin 44 to input");
		pinMode(44, INPUT);
		DEBUG("Sucessfully set pin 44.000000 to input");
		#ifdef DP_HOLD_PIN_44_HIGH
			DEBUG("Setting pin 44 pullup HIGH");
			digitalWrite(44,HIGH);
			DEBUG("Sucessfully set pin 44 pullup HIGH");
		#elif
			DEBUG("Setting pin 44 pullup LOW");
			digitalWrite(44,LOW);
			DEBUG("Sucessfully set pin 44 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_45
		DEBUG("Setting pin 45 to input");
		pinMode(45, INPUT);
		DEBUG("Sucessfully set pin 45.000000 to input");
		#ifdef DP_HOLD_PIN_45_HIGH
			DEBUG("Setting pin 45 pullup HIGH");
			digitalWrite(45,HIGH);
			DEBUG("Sucessfully set pin 45 pullup HIGH");
		#elif
			DEBUG("Setting pin 45 pullup LOW");
			digitalWrite(45,LOW);
			DEBUG("Sucessfully set pin 45 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_46
		DEBUG("Setting pin 46 to input");
		pinMode(46, INPUT);
		DEBUG("Sucessfully set pin 46.000000 to input");
		#ifdef DP_HOLD_PIN_46_HIGH
			DEBUG("Setting pin 46 pullup HIGH");
			digitalWrite(46,HIGH);
			DEBUG("Sucessfully set pin 46 pullup HIGH");
		#elif
			DEBUG("Setting pin 46 pullup LOW");
			digitalWrite(46,LOW);
			DEBUG("Sucessfully set pin 46 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_47
		DEBUG("Setting pin 47 to input");
		pinMode(47, INPUT);
		DEBUG("Sucessfully set pin 47.000000 to input");
		#ifdef DP_HOLD_PIN_47_HIGH
			DEBUG("Setting pin 47 pullup HIGH");
			digitalWrite(47,HIGH);
			DEBUG("Sucessfully set pin 47 pullup HIGH");
		#elif
			DEBUG("Setting pin 47 pullup LOW");
			digitalWrite(47,LOW);
			DEBUG("Sucessfully set pin 47 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_48
		DEBUG("Setting pin 48 to input");
		pinMode(48, INPUT);
		DEBUG("Sucessfully set pin 48.000000 to input");
		#ifdef DP_HOLD_PIN_48_HIGH
			DEBUG("Setting pin 48 pullup HIGH");
			digitalWrite(48,HIGH);
			DEBUG("Sucessfully set pin 48 pullup HIGH");
		#elif
			DEBUG("Setting pin 48 pullup LOW");
			digitalWrite(48,LOW);
			DEBUG("Sucessfully set pin 48 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_49
		DEBUG("Setting pin 49 to input");
		pinMode(49, INPUT);
		DEBUG("Sucessfully set pin 49.000000 to input");
		#ifdef DP_HOLD_PIN_49_HIGH
			DEBUG("Setting pin 49 pullup HIGH");
			digitalWrite(49,HIGH);
			DEBUG("Sucessfully set pin 49 pullup HIGH");
		#elif
			DEBUG("Setting pin 49 pullup LOW");
			digitalWrite(49,LOW);
			DEBUG("Sucessfully set pin 49 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_50
		DEBUG("Setting pin 50 to input");
		pinMode(50, INPUT);
		DEBUG("Sucessfully set pin 50.000000 to input");
		#ifdef DP_HOLD_PIN_50_HIGH
			DEBUG("Setting pin 50 pullup HIGH");
			digitalWrite(50,HIGH);
			DEBUG("Sucessfully set pin 50 pullup HIGH");
		#elif
			DEBUG("Setting pin 50 pullup LOW");
			digitalWrite(50,LOW);
			DEBUG("Sucessfully set pin 50 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_51
		DEBUG("Setting pin 51 to input");
		pinMode(51, INPUT);
		DEBUG("Sucessfully set pin 51.000000 to input");
		#ifdef DP_HOLD_PIN_51_HIGH
			DEBUG("Setting pin 51 pullup HIGH");
			digitalWrite(51,HIGH);
			DEBUG("Sucessfully set pin 51 pullup HIGH");
		#elif
			DEBUG("Setting pin 51 pullup LOW");
			digitalWrite(51,LOW);
			DEBUG("Sucessfully set pin 51 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_52
		DEBUG("Setting pin 52 to input");
		pinMode(52, INPUT);
		DEBUG("Sucessfully set pin 52.000000 to input");
		#ifdef DP_HOLD_PIN_52_HIGH
			DEBUG("Setting pin 52 pullup HIGH");
			digitalWrite(52,HIGH);
			DEBUG("Sucessfully set pin 52 pullup HIGH");
		#elif
			DEBUG("Setting pin 52 pullup LOW");
			digitalWrite(52,LOW);
			DEBUG("Sucessfully set pin 52 pullup LOW");
		#endif
	#endif

	#ifdef DP_SAMPLE_PIN_53
		DEBUG("Setting pin 53 to input");
		pinMode(53, INPUT);
		DEBUG("Sucessfully set pin 53.000000 to input");
		#ifdef DP_HOLD_PIN_53_HIGH
			DEBUG("Setting pin 53 pullup HIGH");
			digitalWrite(53,HIGH);
			DEBUG("Sucessfully set pin 53 pullup HIGH");
		#elif
			DEBUG("Setting pin 53 pullup LOW");
			digitalWrite(53,LOW);
			DEBUG("Sucessfully set pin 53 pullup LOW");
		#endif
	#endif
	DEBUG("Finished");
}

/*
for pin in range(54):
	print """
	#ifdef DP_SAMPLE_PIN_%d
		DEBUG("Reading value for pin %d");
		dstate = digitalRead(%d);
		DEBUG("Sucessfully read value for pin %d");
		#ifdef DP_INVERT_PIN_%d
			DEBUG("Inverting value for pin %d");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin %d");
		#endif
		DEBUG("Logging value for pin %d");
		logMessage(DP_PIN_%d_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin %d");
	#endif""" % (pin, pin, pin, pin, pin, pin, pin, pin, pin, pin) 
*/
void digital_pin_sample(){
	DEBUG("Begin");
	bool dstate;
	#ifdef DP_SAMPLE_PIN_0
		DEBUG("Reading value for pin 0");
		dstate = digitalRead(0);
		DEBUG("Sucessfully read value for pin 0");
		#ifdef DP_INVERT_PIN_0
			DEBUG("Inverting value for pin 0");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 0");
		#endif
		DEBUG("Logging value for pin 0");
		logMessage(DP_PIN_0_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 0");
	#endif

	#ifdef DP_SAMPLE_PIN_1
		DEBUG("Reading value for pin 1");
		dstate = digitalRead(1);
		DEBUG("Sucessfully read value for pin 1");
		#ifdef DP_INVERT_PIN_1
			DEBUG("Inverting value for pin 1");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 1");
		#endif
		DEBUG("Logging value for pin 1");
		logMessage(DP_PIN_1_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 1");
	#endif

	#ifdef DP_SAMPLE_PIN_2
		DEBUG("Reading value for pin 2");
		dstate = digitalRead(2);
		DEBUG("Sucessfully read value for pin 2");
		#ifdef DP_INVERT_PIN_2
			DEBUG("Inverting value for pin 2");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 2");
		#endif
		DEBUG("Logging value for pin 2");
		logMessage(DP_PIN_2_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 2");
	#endif

	#ifdef DP_SAMPLE_PIN_3
		DEBUG("Reading value for pin 3");
		dstate = digitalRead(3);
		DEBUG("Sucessfully read value for pin 3");
		#ifdef DP_INVERT_PIN_3
			DEBUG("Inverting value for pin 3");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 3");
		#endif
		DEBUG("Logging value for pin 3");
		logMessage(DP_PIN_3_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 3");
	#endif

	#ifdef DP_SAMPLE_PIN_4
		DEBUG("Reading value for pin 4");
		dstate = digitalRead(4);
		DEBUG("Sucessfully read value for pin 4");
		#ifdef DP_INVERT_PIN_4
			DEBUG("Inverting value for pin 4");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 4");
		#endif
		DEBUG("Logging value for pin 4");
		logMessage(DP_PIN_4_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 4");
	#endif

	#ifdef DP_SAMPLE_PIN_5
		DEBUG("Reading value for pin 5");
		dstate = digitalRead(5);
		DEBUG("Sucessfully read value for pin 5");
		#ifdef DP_INVERT_PIN_5
			DEBUG("Inverting value for pin 5");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 5");
		#endif
		DEBUG("Logging value for pin 5");
		logMessage(DP_PIN_5_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 5");
	#endif

	#ifdef DP_SAMPLE_PIN_6
		DEBUG("Reading value for pin 6");
		dstate = digitalRead(6);
		DEBUG("Sucessfully read value for pin 6");
		#ifdef DP_INVERT_PIN_6
			DEBUG("Inverting value for pin 6");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 6");
		#endif
		DEBUG("Logging value for pin 6");
		logMessage(DP_PIN_6_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 6");
	#endif

	#ifdef DP_SAMPLE_PIN_7
		DEBUG("Reading value for pin 7");
		dstate = digitalRead(7);
		DEBUG("Sucessfully read value for pin 7");
		#ifdef DP_INVERT_PIN_7
			DEBUG("Inverting value for pin 7");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 7");
		#endif
		DEBUG("Logging value for pin 7");
		logMessage(DP_PIN_7_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 7");
	#endif

	#ifdef DP_SAMPLE_PIN_8
		DEBUG("Reading value for pin 8");
		dstate = digitalRead(8);
		DEBUG("Sucessfully read value for pin 8");
		#ifdef DP_INVERT_PIN_8
			DEBUG("Inverting value for pin 8");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 8");
		#endif
		DEBUG("Logging value for pin 8");
		logMessage(DP_PIN_8_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 8");
	#endif

	#ifdef DP_SAMPLE_PIN_9
		DEBUG("Reading value for pin 9");
		dstate = digitalRead(9);
		DEBUG("Sucessfully read value for pin 9");
		#ifdef DP_INVERT_PIN_9
			DEBUG("Inverting value for pin 9");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 9");
		#endif
		DEBUG("Logging value for pin 9");
		logMessage(DP_PIN_9_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 9");
	#endif

	#ifdef DP_SAMPLE_PIN_10
		DEBUG("Reading value for pin 10");
		dstate = digitalRead(10);
		DEBUG("Sucessfully read value for pin 10");
		#ifdef DP_INVERT_PIN_10
			DEBUG("Inverting value for pin 10");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 10");
		#endif
		DEBUG("Logging value for pin 10");
		logMessage(DP_PIN_10_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 10");
	#endif

	#ifdef DP_SAMPLE_PIN_11
		DEBUG("Reading value for pin 11");
		dstate = digitalRead(11);
		DEBUG("Sucessfully read value for pin 11");
		#ifdef DP_INVERT_PIN_11
			DEBUG("Inverting value for pin 11");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 11");
		#endif
		DEBUG("Logging value for pin 11");
		logMessage(DP_PIN_11_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 11");
	#endif

	#ifdef DP_SAMPLE_PIN_12
		DEBUG("Reading value for pin 12");
		dstate = digitalRead(12);
		DEBUG("Sucessfully read value for pin 12");
		#ifdef DP_INVERT_PIN_12
			DEBUG("Inverting value for pin 12");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 12");
		#endif
		DEBUG("Logging value for pin 12");
		logMessage(DP_PIN_12_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 12");
	#endif

	#ifdef DP_SAMPLE_PIN_13
		DEBUG("Reading value for pin 13");
		dstate = digitalRead(13);
		DEBUG("Sucessfully read value for pin 13");
		#ifdef DP_INVERT_PIN_13
			DEBUG("Inverting value for pin 13");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 13");
		#endif
		DEBUG("Logging value for pin 13");
		logMessage(DP_PIN_13_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 13");
	#endif

	#ifdef DP_SAMPLE_PIN_14
		DEBUG("Reading value for pin 14");
		dstate = digitalRead(14);
		DEBUG("Sucessfully read value for pin 14");
		#ifdef DP_INVERT_PIN_14
			DEBUG("Inverting value for pin 14");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 14");
		#endif
		DEBUG("Logging value for pin 14");
		logMessage(DP_PIN_14_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 14");
	#endif

	#ifdef DP_SAMPLE_PIN_15
		DEBUG("Reading value for pin 15");
		dstate = digitalRead(15);
		DEBUG("Sucessfully read value for pin 15");
		#ifdef DP_INVERT_PIN_15
			DEBUG("Inverting value for pin 15");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 15");
		#endif
		DEBUG("Logging value for pin 15");
		logMessage(DP_PIN_15_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 15");
	#endif

	#ifdef DP_SAMPLE_PIN_16
		DEBUG("Reading value for pin 16");
		dstate = digitalRead(16);
		DEBUG("Sucessfully read value for pin 16");
		#ifdef DP_INVERT_PIN_16
			DEBUG("Inverting value for pin 16");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 16");
		#endif
		DEBUG("Logging value for pin 16");
		logMessage(DP_PIN_16_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 16");
	#endif

	#ifdef DP_SAMPLE_PIN_17
		DEBUG("Reading value for pin 17");
		dstate = digitalRead(17);
		DEBUG("Sucessfully read value for pin 17");
		#ifdef DP_INVERT_PIN_17
			DEBUG("Inverting value for pin 17");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 17");
		#endif
		DEBUG("Logging value for pin 17");
		logMessage(DP_PIN_17_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 17");
	#endif

	#ifdef DP_SAMPLE_PIN_18
		DEBUG("Reading value for pin 18");
		dstate = digitalRead(18);
		DEBUG("Sucessfully read value for pin 18");
		#ifdef DP_INVERT_PIN_18
			DEBUG("Inverting value for pin 18");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 18");
		#endif
		DEBUG("Logging value for pin 18");
		logMessage(DP_PIN_18_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 18");
	#endif

	#ifdef DP_SAMPLE_PIN_19
		DEBUG("Reading value for pin 19");
		dstate = digitalRead(19);
		DEBUG("Sucessfully read value for pin 19");
		#ifdef DP_INVERT_PIN_19
			DEBUG("Inverting value for pin 19");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 19");
		#endif
		DEBUG("Logging value for pin 19");
		logMessage(DP_PIN_19_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 19");
	#endif

	#ifdef DP_SAMPLE_PIN_20
		DEBUG("Reading value for pin 20");
		dstate = digitalRead(20);
		DEBUG("Sucessfully read value for pin 20");
		#ifdef DP_INVERT_PIN_20
			DEBUG("Inverting value for pin 20");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 20");
		#endif
		DEBUG("Logging value for pin 20");
		logMessage(DP_PIN_20_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 20");
	#endif

	#ifdef DP_SAMPLE_PIN_21
		DEBUG("Reading value for pin 21");
		dstate = digitalRead(21);
		DEBUG("Sucessfully read value for pin 21");
		#ifdef DP_INVERT_PIN_21
			DEBUG("Inverting value for pin 21");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 21");
		#endif
		DEBUG("Logging value for pin 21");
		logMessage(DP_PIN_21_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 21");
	#endif

	#ifdef DP_SAMPLE_PIN_22
		DEBUG("Reading value for pin 22");
		dstate = digitalRead(22);
		DEBUG("Sucessfully read value for pin 22");
		#ifdef DP_INVERT_PIN_22
			DEBUG("Inverting value for pin 22");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 22");
		#endif
		DEBUG("Logging value for pin 22");
		logMessage(DP_PIN_22_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 22");
	#endif

	#ifdef DP_SAMPLE_PIN_23
		DEBUG("Reading value for pin 23");
		dstate = digitalRead(23);
		DEBUG("Sucessfully read value for pin 23");
		#ifdef DP_INVERT_PIN_23
			DEBUG("Inverting value for pin 23");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 23");
		#endif
		DEBUG("Logging value for pin 23");
		logMessage(DP_PIN_23_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 23");
	#endif

	#ifdef DP_SAMPLE_PIN_24
		DEBUG("Reading value for pin 24");
		dstate = digitalRead(24);
		DEBUG("Sucessfully read value for pin 24");
		#ifdef DP_INVERT_PIN_24
			DEBUG("Inverting value for pin 24");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 24");
		#endif
		DEBUG("Logging value for pin 24");
		logMessage(DP_PIN_24_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 24");
	#endif

	#ifdef DP_SAMPLE_PIN_25
		DEBUG("Reading value for pin 25");
		dstate = digitalRead(25);
		DEBUG("Sucessfully read value for pin 25");
		#ifdef DP_INVERT_PIN_25
			DEBUG("Inverting value for pin 25");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 25");
		#endif
		DEBUG("Logging value for pin 25");
		logMessage(DP_PIN_25_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 25");
	#endif

	#ifdef DP_SAMPLE_PIN_26
		DEBUG("Reading value for pin 26");
		dstate = digitalRead(26);
		DEBUG("Sucessfully read value for pin 26");
		#ifdef DP_INVERT_PIN_26
			DEBUG("Inverting value for pin 26");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 26");
		#endif
		DEBUG("Logging value for pin 26");
		logMessage(DP_PIN_26_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 26");
	#endif

	#ifdef DP_SAMPLE_PIN_27
		DEBUG("Reading value for pin 27");
		dstate = digitalRead(27);
		DEBUG("Sucessfully read value for pin 27");
		#ifdef DP_INVERT_PIN_27
			DEBUG("Inverting value for pin 27");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 27");
		#endif
		DEBUG("Logging value for pin 27");
		logMessage(DP_PIN_27_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 27");
	#endif

	#ifdef DP_SAMPLE_PIN_28
		DEBUG("Reading value for pin 28");
		dstate = digitalRead(28);
		DEBUG("Sucessfully read value for pin 28");
		#ifdef DP_INVERT_PIN_28
			DEBUG("Inverting value for pin 28");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 28");
		#endif
		DEBUG("Logging value for pin 28");
		logMessage(DP_PIN_28_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 28");
	#endif

	#ifdef DP_SAMPLE_PIN_29
		DEBUG("Reading value for pin 29");
		dstate = digitalRead(29);
		DEBUG("Sucessfully read value for pin 29");
		#ifdef DP_INVERT_PIN_29
			DEBUG("Inverting value for pin 29");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 29");
		#endif
		DEBUG("Logging value for pin 29");
		logMessage(DP_PIN_29_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 29");
	#endif

	#ifdef DP_SAMPLE_PIN_30
		DEBUG("Reading value for pin 30");
		dstate = digitalRead(30);
		DEBUG("Sucessfully read value for pin 30");
		#ifdef DP_INVERT_PIN_30
			DEBUG("Inverting value for pin 30");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 30");
		#endif
		DEBUG("Logging value for pin 30");
		logMessage(DP_PIN_30_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 30");
	#endif

	#ifdef DP_SAMPLE_PIN_31
		DEBUG("Reading value for pin 31");
		dstate = digitalRead(31);
		DEBUG("Sucessfully read value for pin 31");
		#ifdef DP_INVERT_PIN_31
			DEBUG("Inverting value for pin 31");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 31");
		#endif
		DEBUG("Logging value for pin 31");
		logMessage(DP_PIN_31_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 31");
	#endif

	#ifdef DP_SAMPLE_PIN_32
		DEBUG("Reading value for pin 32");
		dstate = digitalRead(32);
		DEBUG("Sucessfully read value for pin 32");
		#ifdef DP_INVERT_PIN_32
			DEBUG("Inverting value for pin 32");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 32");
		#endif
		DEBUG("Logging value for pin 32");
		logMessage(DP_PIN_32_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 32");
	#endif

	#ifdef DP_SAMPLE_PIN_33
		DEBUG("Reading value for pin 33");
		dstate = digitalRead(33);
		DEBUG("Sucessfully read value for pin 33");
		#ifdef DP_INVERT_PIN_33
			DEBUG("Inverting value for pin 33");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 33");
		#endif
		DEBUG("Logging value for pin 33");
		logMessage(DP_PIN_33_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 33");
	#endif

	#ifdef DP_SAMPLE_PIN_34
		DEBUG("Reading value for pin 34");
		dstate = digitalRead(34);
		DEBUG("Sucessfully read value for pin 34");
		#ifdef DP_INVERT_PIN_34
			DEBUG("Inverting value for pin 34");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 34");
		#endif
		DEBUG("Logging value for pin 34");
		logMessage(DP_PIN_34_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 34");
	#endif

	#ifdef DP_SAMPLE_PIN_35
		DEBUG("Reading value for pin 35");
		dstate = digitalRead(35);
		DEBUG("Sucessfully read value for pin 35");
		#ifdef DP_INVERT_PIN_35
			DEBUG("Inverting value for pin 35");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 35");
		#endif
		DEBUG("Logging value for pin 35");
		logMessage(DP_PIN_35_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 35");
	#endif

	#ifdef DP_SAMPLE_PIN_36
		DEBUG("Reading value for pin 36");
		dstate = digitalRead(36);
		DEBUG("Sucessfully read value for pin 36");
		#ifdef DP_INVERT_PIN_36
			DEBUG("Inverting value for pin 36");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 36");
		#endif
		DEBUG("Logging value for pin 36");
		logMessage(DP_PIN_36_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 36");
	#endif

	#ifdef DP_SAMPLE_PIN_37
		DEBUG("Reading value for pin 37");
		dstate = digitalRead(37);
		DEBUG("Sucessfully read value for pin 37");
		#ifdef DP_INVERT_PIN_37
			DEBUG("Inverting value for pin 37");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 37");
		#endif
		DEBUG("Logging value for pin 37");
		logMessage(DP_PIN_37_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 37");
	#endif

	#ifdef DP_SAMPLE_PIN_38
		DEBUG("Reading value for pin 38");
		dstate = digitalRead(38);
		DEBUG("Sucessfully read value for pin 38");
		#ifdef DP_INVERT_PIN_38
			DEBUG("Inverting value for pin 38");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 38");
		#endif
		DEBUG("Logging value for pin 38");
		logMessage(DP_PIN_38_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 38");
	#endif

	#ifdef DP_SAMPLE_PIN_39
		DEBUG("Reading value for pin 39");
		dstate = digitalRead(39);
		DEBUG("Sucessfully read value for pin 39");
		#ifdef DP_INVERT_PIN_39
			DEBUG("Inverting value for pin 39");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 39");
		#endif
		DEBUG("Logging value for pin 39");
		logMessage(DP_PIN_39_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 39");
	#endif

	#ifdef DP_SAMPLE_PIN_40
		DEBUG("Reading value for pin 40");
		dstate = digitalRead(40);
		DEBUG("Sucessfully read value for pin 40");
		#ifdef DP_INVERT_PIN_40
			DEBUG("Inverting value for pin 40");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 40");
		#endif
		DEBUG("Logging value for pin 40");
		logMessage(DP_PIN_40_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 40");
	#endif

	#ifdef DP_SAMPLE_PIN_41
		DEBUG("Reading value for pin 41");
		dstate = digitalRead(41);
		DEBUG("Sucessfully read value for pin 41");
		#ifdef DP_INVERT_PIN_41
			DEBUG("Inverting value for pin 41");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 41");
		#endif
		DEBUG("Logging value for pin 41");
		logMessage(DP_PIN_41_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 41");
	#endif

	#ifdef DP_SAMPLE_PIN_42
		DEBUG("Reading value for pin 42");
		dstate = digitalRead(42);
		DEBUG("Sucessfully read value for pin 42");
		#ifdef DP_INVERT_PIN_42
			DEBUG("Inverting value for pin 42");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 42");
		#endif
		DEBUG("Logging value for pin 42");
		logMessage(DP_PIN_42_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 42");
	#endif

	#ifdef DP_SAMPLE_PIN_43
		DEBUG("Reading value for pin 43");
		dstate = digitalRead(43);
		DEBUG("Sucessfully read value for pin 43");
		#ifdef DP_INVERT_PIN_43
			DEBUG("Inverting value for pin 43");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 43");
		#endif
		DEBUG("Logging value for pin 43");
		logMessage(DP_PIN_43_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 43");
	#endif

	#ifdef DP_SAMPLE_PIN_44
		DEBUG("Reading value for pin 44");
		dstate = digitalRead(44);
		DEBUG("Sucessfully read value for pin 44");
		#ifdef DP_INVERT_PIN_44
			DEBUG("Inverting value for pin 44");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 44");
		#endif
		DEBUG("Logging value for pin 44");
		logMessage(DP_PIN_44_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 44");
	#endif

	#ifdef DP_SAMPLE_PIN_45
		DEBUG("Reading value for pin 45");
		dstate = digitalRead(45);
		DEBUG("Sucessfully read value for pin 45");
		#ifdef DP_INVERT_PIN_45
			DEBUG("Inverting value for pin 45");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 45");
		#endif
		DEBUG("Logging value for pin 45");
		logMessage(DP_PIN_45_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 45");
	#endif

	#ifdef DP_SAMPLE_PIN_46
		DEBUG("Reading value for pin 46");
		dstate = digitalRead(46);
		DEBUG("Sucessfully read value for pin 46");
		#ifdef DP_INVERT_PIN_46
			DEBUG("Inverting value for pin 46");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 46");
		#endif
		DEBUG("Logging value for pin 46");
		logMessage(DP_PIN_46_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 46");
	#endif

	#ifdef DP_SAMPLE_PIN_47
		DEBUG("Reading value for pin 47");
		dstate = digitalRead(47);
		DEBUG("Sucessfully read value for pin 47");
		#ifdef DP_INVERT_PIN_47
			DEBUG("Inverting value for pin 47");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 47");
		#endif
		DEBUG("Logging value for pin 47");
		logMessage(DP_PIN_47_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 47");
	#endif

	#ifdef DP_SAMPLE_PIN_48
		DEBUG("Reading value for pin 48");
		dstate = digitalRead(48);
		DEBUG("Sucessfully read value for pin 48");
		#ifdef DP_INVERT_PIN_48
			DEBUG("Inverting value for pin 48");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 48");
		#endif
		DEBUG("Logging value for pin 48");
		logMessage(DP_PIN_48_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 48");
	#endif

	#ifdef DP_SAMPLE_PIN_49
		DEBUG("Reading value for pin 49");
		dstate = digitalRead(49);
		DEBUG("Sucessfully read value for pin 49");
		#ifdef DP_INVERT_PIN_49
			DEBUG("Inverting value for pin 49");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 49");
		#endif
		DEBUG("Logging value for pin 49");
		logMessage(DP_PIN_49_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 49");
	#endif

	#ifdef DP_SAMPLE_PIN_50
		DEBUG("Reading value for pin 50");
		dstate = digitalRead(50);
		DEBUG("Sucessfully read value for pin 50");
		#ifdef DP_INVERT_PIN_50
			DEBUG("Inverting value for pin 50");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 50");
		#endif
		DEBUG("Logging value for pin 50");
		logMessage(DP_PIN_50_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 50");
	#endif

	#ifdef DP_SAMPLE_PIN_51
		DEBUG("Reading value for pin 51");
		dstate = digitalRead(51);
		DEBUG("Sucessfully read value for pin 51");
		#ifdef DP_INVERT_PIN_51
			DEBUG("Inverting value for pin 51");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 51");
		#endif
		DEBUG("Logging value for pin 51");
		logMessage(DP_PIN_51_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 51");
	#endif

	#ifdef DP_SAMPLE_PIN_52
		DEBUG("Reading value for pin 52");
		dstate = digitalRead(52);
		DEBUG("Sucessfully read value for pin 52");
		#ifdef DP_INVERT_PIN_52
			DEBUG("Inverting value for pin 52");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 52");
		#endif
		DEBUG("Logging value for pin 52");
		logMessage(DP_PIN_52_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 52");
	#endif

	#ifdef DP_SAMPLE_PIN_53
		DEBUG("Reading value for pin 53");
		dstate = digitalRead(53);
		DEBUG("Sucessfully read value for pin 53");
		#ifdef DP_INVERT_PIN_53
			DEBUG("Inverting value for pin 53");
			dstate = !dstate;
			DEBUG("Sucessfully inverted value for pin 53");
		#endif
		DEBUG("Logging value for pin 53");
		logMessage(DP_PIN_53_NAME, dstate ? "On" : "Off", "N/A");
		DEBUG("Sucessfully logged value for pin 53");
	#endif
	DEBUG("Finished");
}

#endif
