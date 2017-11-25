/*
 * dbg_log_linux.c
 *
 *  Created on: Nov 24, 2017
 *      Author: puch
 */


#include <stdio.h>
#include "dbg_log_ext.h"

static int linux_dbprintf(char const * fmt, uint8_t const fid, va_list va_args);

struct Dbg_Log_Stdout Dbg_Stdout = {linux_dbprintf};

int linux_dbprintf(char const * fmt, uint8_t const fid, va_list va_args)
{
	return printf("%d", fid) + vprintf(fmt, va_args) + printf("\n");
}
