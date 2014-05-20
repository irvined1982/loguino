
extern unsigned int __heap_start;
extern void *__brkval;

/*
 *  * The free list structure as maintained by the
 *   * avr-libc memory allocation routines.
 *    */
struct __freelist {
	size_t sz;
	struct __freelist *nx;
};

/* The head of the free list structure */
extern struct __freelist *__flp;

int freeListSize() {
	struct __freelist* current;
	int total = 0;

	for (current = __flp; current; current = current->nx) {
		total += 2; /* Add two bytes for the memory block's header  */
		total += (int) current->sz;
	}

	return total;
}

int freeMemory() {
	int free_memory;

	if ((int)__brkval == 0) {
		free_memory = ((int)&free_memory) - ((int)&__heap_start);
	} else {
		free_memory = ((int)&free_memory) - ((int)__brkval);
		free_memory += freeListSize();
	}
	return free_memory;
}



void debug(const char * fname, const char * func, const char * lnum, const  char * message){
	char txt[20];
	sprintf(txt, "%9d,%9d,", millis(), freeMemory() );
	DEBUG_SERIAL_DEV.print(txt);
	DEBUG_SERIAL_DEV.print(", ");
	DEBUG_SERIAL_DEV.print(fname);
	DEBUG_SERIAL_DEV.print(", ");
	DEBUG_SERIAL_DEV.print(func);
	DEBUG_SERIAL_DEV.print(", ");
	DEBUG_SERIAL_DEV.print(lnum);
	DEBUG_SERIAL_DEV.print(", ");
	DEBUG_SERIAL_DEV.println(message);
}

void setup(){
	DEBUG_1("Begin");
	#ifdef ENABLE_DEBUG
		#ifdef DEBUG_SERIAL_DEV
			#ifdef DEBUG_SERIAL_BAUD
		        DEBUG_SERIAL_DEV.begin(DEBUG_SERIAL_BAUD);
			#endif
		#endif
	#endif
	DEBUG_5("Setting up Pollers");
	setupPollers();
	DEBUG_2("Succesfully setup Pollers");
	DEBUG_5("Setting up Outputs");
	setupOutputs();
	DEBUG_2("Succesfully setup Outputs");
	DEBUG_1("Finished");
}

void loop(){
	DEBUG_1("Begin");
	DEBUG_5("Reading Sensors");
	readSensors();
	DEBUG_2("Successfully read sensors");
	DEBUG_1("Finished");
}


