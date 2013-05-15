#ifndef Declude_SSY_ARC_OR_NO_ARC_h
#define Declude_SSY_ARC_OR_NO_ARC_h

#if MAC_OS_X_VERSION_MAX_ALLOWED < 1070
#define NO_ARC 1
#else
#if __has_feature(objc_arc)
#define NO_ARC 0
#else
#define NO_ARC 1
#endif
#endif

#endif
