#ifndef DBG_LOG_H_
#define DBG_LOG_H_

#include "dbg_log_types.h"
#include "xmac.h"

#define DBG_IS_NULL(p) (p ? "not NULL" : "NULL")

#ifdef __cplusplus
extern "C" {
#endif
 
extern void Dbg_Log(Dbg_Lvl_T const lvl, char const * fmt, Dbg_FID_T const fid, ...);

#define DBG_FID_DEF(fid, instance) fid, instance

#define Dbg_Verbose(...) \
		Dbg_Log_Print(Dbg_FID, DBG_VERB_LVL, __LINE__, ".%d " __FILE__ "-%d:DBG_VERB_LVL:" __VA_ARGS__)

#define Dbg_Info(...) \
		Dbg_Log_Print(Dbg_FID, DBG_INFO_LVL, __LINE__, ".%d " __FILE__ "-%d:DBG_INFO_LVL:" __VA_ARGS__)

#define Dbg_Warn(...) \
		Dbg_Log_Print(Dbg_FID, DBG_WARN_LVL, __LINE__, ".%d " __FILE__ "-%d:DBG_WARN_LVL-" __VA_ARGS__)

#define Dbg_Fault(...) \
		Dbg_Log_Print(Dbg_FID, DBG_FAULT_LVL, __LINE__, ".%d " __FILE__ "-%d:DBG_FAULT_LVL-" __VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /*DBG_LOG_H_*/
