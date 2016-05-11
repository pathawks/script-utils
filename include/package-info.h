#ifndef PACKAGE_STRING
#define PACKAGE_STRING "script-util"
#endif

#ifdef __APPLE__
    #ifndef HAVE_FSYNC
    #define HAVE_FSYNC
    #endif

    #ifndef HAVE_NANOSLEEP
    #define HAVE_NANOSLEEP
    #endif
#endif
