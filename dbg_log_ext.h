#ifndef DBG_LOG_EXT_H_
#define DBG_LOG_EXT_H_
#include <stdarg.h>

extern struct Dbg_Log_Stdout
{
	void (*vsprintf)(char const *, va_list);
} Dbg_Stdout;

#endif /*DBG_LOG_EXT_H_*/
