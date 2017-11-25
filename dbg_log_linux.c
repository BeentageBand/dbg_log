/*
 * dbg_log_linux.c
 *
 *  Created on: Nov 24, 2017
 *      Author: puch
 */


#include <stdio.h>
#include "dbg_log_ext.h"

struct Dbg_Log_Stdout Dbg_Stdout = {vprintf};


