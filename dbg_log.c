#include "dbg_log.h"
#include "dbg_log_ext.h"
#include <stdio.h>
#include <stdarg.h>

#define DBG_FID_NAME(fid, severity, desc) severity,
 
static uint8_t FID_Dbg_Lvl[] =
{
	DBG_FID_LIST(DBG_FID_NAME)
};
	
void Dbg_Log(Dbg_Lvl_T const lvl, char const * fmt, ...)
{
	if(lvl <=DBG_FAULT_LVL && lvl >= FID_Dbg_Lvl[lvl])
	{
		va_list args;
		va_start(args, fmt);
		Dbg_Stdout.vsprintf(fmt,args);
		va_end(args);
	}
}