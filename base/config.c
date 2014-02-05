#define ENABLE_DEBUG
#ifdef ENABLE_DEBUG
  #define DEBUG_SERIAL_DEV Serial
  #define DEBUG_SERIAL_BAUD 115200
  #define DEBUG(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
#else
  #define DEBUG(m)
#endif

