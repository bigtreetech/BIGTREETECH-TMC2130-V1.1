#ifndef BIQU_H
#define BIQU_H

#include "Marlin.h"

#include "ultralcd.h"
#include "planner.h"
#include "stepper.h"
#include "endstops.h"
#include "temperature.h"
#include "configuration_store.h"
#include "configuration_adv.h"
#include "language.h"
#include "pins_arduino.h"
#include "math.h"
#include "nozzle.h"
#include "duration_t.h"
#include "types.h"
#include "gcode.h"
#include "Watchdog.h"
#include "SdFatConfig.h"
#include "SdFile.h"

//#define POWER_FAILED
//#define POWER_FAILED_SENSOR
#if ENABLED(POWER_FAILED)
  
  extern char hasPrintingSys;
  extern char printFile[LONG_FILENAME_LENGTH];

  #if ENABLED(POWER_FAILED_SENSOR)
  
    #define USE_YMIN_PLUG
    #define POWER_FAILED_PIN Y_MIN_PIN
	
    #define POWER_FAILED_INVERTING  false
  
    void killHeater(const char* lcd_msg) ;
  #endif
#endif








#endif // CONFIGURATION_H



