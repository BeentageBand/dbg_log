define $(_flavor_)_$(_feat_)_MAKE

$(_flavor_)_$(_feat_)_inc=dbg_log.h dbg_log_types.h

$(_flavor_)_$(_feat_)_lib_objs=dbg_log $($(_flavor_)_build:%=dbg_log_%)

$(_flavor_)_$(_feat_)_lib=dbg_log

endef

include $(PROJ_MAK_DIR)/epilog.mk
