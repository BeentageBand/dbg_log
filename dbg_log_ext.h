#ifndef DBG_LOG_EXT_H_
#define DBG_LOG_EXT_H_

#include <stdarg.h>
#include "std_reuse.h"

#ifdef __cplusplus
extern "C" {
#endif

extern struct Dbg_Log_Stdout
{
   int (*vsprintf)(char const *, uint8_t const, va_list);
} const Dbg_Stdout;

extern bool Dbg_Log_Available(void);
extern void Dbg_Log_Sync(void);

#ifdef __cplusplus
}
#endif
#endif /*DBG_LOG_EXT_H_*/
