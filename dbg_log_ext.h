#ifndef DBG_LOG_EXT_H_
#define DBG_LOG_EXT_H_

#include <stdarg.h>
#include "std_reuse.h"

extern struct Dbg_Log_Stdout
{
	int (*vsprintf)(char const *, uint8_t const, va_list);
} Dbg_Stdout;

#endif /*DBG_LOG_EXT_H_*/
