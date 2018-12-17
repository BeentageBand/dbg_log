define $(_flavor_)_$(_feat_)_MAKE

$(_flavor_)_$(_feat_)_inc=dbg_log.h dbg_log_ext.h dbg_log_types.h 

$(_flavor_)_$(_feat_)_lib_objs=dbg_log

$(_flavor_)_$(_feat_)_lib=dbg_log

endef

macos_$(_feat_)_lib_objs+=dbg_log_linux.c
linux_$(_feat_)_lib_objs+=dbg_log_linux.c

include $(PROJ_MAK_DIR)/epilog.mk
