/*
 * dbg_log_arduino.c
 *
 *  Created on: Nov 24, 2017
 *      Author: puch
 */


#include <stdio.h>
#include "dbg_log_ext.h"
#include "Arduino.h"

#define ARDUINO_DBG_BUFFER_SIZE (128U)

static int arduino_vdbprintf(char const * fmt, va_list va_args);

struct Dbg_Log_Stdout const Dbg_Stdout = {arduino_vdbprintf};

int arduino_vdbprintf(char const * fmt, va_list va_args)
{
   static char arduino_buff[ARDUINO_DBG_BUFFER_SIZE];
   memset(arduino_buff, 0, Num_Elems(arduino_buff));

   int rc = vsprintf(arduino_buff, fmt, va_args);

   if(arduino_buff[0])
   {
      Serial.println(arduino_buff);
   }

   return rc;
}

