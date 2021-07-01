
#if !defined(CCSP_SUPPORT_ENABLED)

#include "webconfig_logging.h"


// TODO : Currently it is printf, need to write log to file for non CCSP/RDKB platform
void wbTraceLogAPI(const char *format, ...)
{
        va_list args;
        char tempChar[MAX_LOG_SIZE] = {0};
        memset(tempChar,0,sizeof(tempChar));
        va_start(args, format);
        vsnprintf(tempChar,MAX_LOG_SIZE,format,args);
        printf("%s",tempChar);
        va_end(args);
}

#endif