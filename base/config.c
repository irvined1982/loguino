#define ENABLE_DEBUG
#define DEBUG_LEVEL 2

#ifdef ENABLE_DEBUG
  #define DEBUG_SERIAL_DEV Serial
  #define DEBUG_SERIAL_BAUD 115200

  #ifndef DEBUG_LEVEL
    #define DEBUG_LEVEL 1
  #endif

  #if DEBUG_LEVEL > 0
    #define DEBUG_1(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_1(m)
  #endif

  #if DEBUG_LEVEL > 1
    #define DEBUG_2(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_2(m)
  #endif

  #if DEBUG_LEVEL > 2
    #define DEBUG_3(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_3(m)
  #endif

  #if DEBUG_LEVEL > 3
    #define DEBUG_4(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_4(m)
  #endif

  #if DEBUG_LEVEL > 4
    #define DEBUG_5(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_5(m)
  #endif

#else
  #define DEBUG_1(m)
  #define DEBUG_2(m)
  #define DEBUG_3(m)
  #define DEBUG_4(m)
  #define DEBUG_5(m)
#endif

