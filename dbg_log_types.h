#ifndef DBG_LOG_TYPES_H_
#define DBG_LOG_TYPES_H_
 
#include "std_reuse.h"
#include "dbg_log_uset.h"
 
#define DBG_FID_X(fid, severity, desc) fid,

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
   DBG_FID_LIST(DBG_FID_X)
   DBG_TOTAL_FID_ITEMS
}Dbg_FID_T;

typedef enum
{
   DBG_VERB_LVL,
   DBG_INFO_LVL,
   DBG_WARN_LVL,
   DBG_FAULT_LVL
}Dbg_Lvl_T;

#ifdef __cplusplus
}
#endif
 
#endif /*DBG_LOG_TYPES_H_*/
