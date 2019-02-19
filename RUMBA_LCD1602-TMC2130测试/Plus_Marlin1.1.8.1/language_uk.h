/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Ukrainian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_UK_H
#define LANGUAGE_UK_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" 璋愯姱瑜岃姱鑳佹噲娉�.")
#define MSG_SD_INSERTED                     _UxGT("琚ｉ偑瑜夎娉婚偑 鑳佽瑜岄偑鑳佽阿姊拌柂閭�")
#define MSG_SD_REMOVED                      _UxGT("琚ｉ偑瑜夎娉婚偑 鑳佹噲鍐欓偑璋㈡钖偑")
#define MSG_LCD_ENDSTOPS                    _UxGT("琚ｈえ钖姊拌儊鎳堟郴") // Max length 8 characters
#define MSG_MAIN                            _UxGT("琚︽钖")
#define MSG_AUTOSTART                       _UxGT("琚楄儊瑜岃姱瑜嬭閭瑜�")
#define MSG_DISABLE_STEPPERS                _UxGT("琚欐噲灞戞郴. 鍐欒儊鎳堣皭瑜嶈柂鎳�")
#define MSG_AUTO_HOME                       _UxGT("琚楄儊瑜岃姱 閿岄偑瑜夋郴瑜嶈儊閭柂钖")
#define MSG_AUTO_HOME_X                     _UxGT("琚╅偑瑜夋郴瑜嶈儊閭柂钖 X")
#define MSG_AUTO_HOME_Y                     _UxGT("琚╅偑瑜夋郴瑜嶈儊閭柂钖 Y")
#define MSG_AUTO_HOME_Z                     _UxGT("琚╅偑瑜夋郴瑜嶈儊閭柂钖 Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("琚╅偑瑜夋郴瑜嶈儊閭柂钖 XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("琚╄姱瑜旈偑瑜屾噲")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("灏忚阿瑜ㄥ啓瑜嶈瑜旈偑 瀛濊姱瑜旀郴閭�")
#define MSG_LEVEL_BED_DONE                  _UxGT("琚熼偑鑳佹瑜夎姊拌柂鑺�!")
#define MSG_SET_HOME_OFFSETS                _UxGT("琚熸枩姊拌姊拌皭瑜屾噲 閿岄偑瑜夋郴瑜嶈儊.")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("琚熷睉瑜ㄨ姊拌柂钖 锜归偑瑜嬭鑺.")
#define MSG_SET_ORIGIN                      _UxGT("琚欒瑜岄偑钖姱鑳�. 閿岃姱瑜旈偑瑜岃姱娉�")
#define MSG_PREHEAT_1                       _UxGT("琚ч偑璋愯瑜ㄨ儊 PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 琚欒姊�")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" 灏忚瑜ㄨ阿")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" 钖偑璋�.")
#define MSG_PREHEAT_2                       _UxGT("琚ч偑璋愯瑜ㄨ儊 ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 琚欒姊�")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" 灏忚瑜ㄨ阿")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" 钖偑璋�.")
#define MSG_COOLDOWN                        _UxGT("琚ㄨ鑺阿鑺啓鍗告钖柂瑜�")
#define MSG_SWITCH_PS_ON                    _UxGT("鏍¤儊瑜ㄥ睉娉昏柂瑜嶈鎳� 鍗告噲鑳佽阿姊拌柂钖")
#define MSG_SWITCH_PS_OFF                   _UxGT("琚欐噲灞戞郴钖瑜屾噲 鍗告噲鑳佽阿姊拌柂钖")
#define MSG_EXTRUDE                         _UxGT("琚濇郴瑜嬭瑜夎锜硅え瑜�")
#define MSG_RETRACT                         _UxGT("琚欒瑜熻皭瑜嶈儊閭柂钖")
#define MSG_MOVE_AXIS                       _UxGT("琚瑜� 閿岃姱 鑺瑜熷睉")
#define MSG_BED_LEVELING                    _UxGT("琚цえ鑳佹璋㈣鑳侀偑钖柂瑜� 瑜嬭鑺阿瑜�")
#define MSG_LEVEL_BED                       _UxGT("琚цえ鑳佹璋㈣鑳侀偑钖柂瑜� 瑜嬭鑺阿瑜�")
#define MSG_MOVE_X                          _UxGT("琚瑜� 閿岃姱 X")
#define MSG_MOVE_Y                          _UxGT("琚瑜� 閿岃姱 Y")
#define MSG_MOVE_Z                          _UxGT("琚瑜� 閿岃姱 Z")
#define MSG_MOVE_E                          _UxGT("琚濇郴瑜嬭瑜夎鍐欐瑜�")
#define MSG_MOVE_01MM                       _UxGT("琚瑜� 閿岃姱 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("琚瑜� 閿岃姱 1mm")
#define MSG_MOVE_10MM                       _UxGT("琚瑜� 閿岃姱 10mm")
#define MSG_SPEED                           _UxGT("妤旇儊鎳堝啓娉昏え瑜嬭瑜�")
#define MSG_BED_Z                           _UxGT("Z 灏忚鑺阿瑜�")
#define MSG_NOZZLE                          _UxGT("灏忚姱閿岃阿鑺�")
#define MSG_BED                             _UxGT("灏忚瑜ㄨ阿")
#define MSG_FAN_SPEED                       _UxGT("琚ㄨ鑺阿鑺啓鍗�.")
#define MSG_FLOW                            _UxGT("琚╄姱瑜岃え娉�")
#define MSG_CONTROL                         _UxGT("琚ч偑璋㈤偑瑜曡瑜嶈儊閭柂钖")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 琚﹁え钖�")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 琚﹂偑娉昏")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鑲栭偑娉昏")
#define MSG_AUTOTEMP                        _UxGT("琚楄儊瑜岃姱瑜屾灞戦攲姊拌.")
#define MSG_ON                              _UxGT("鏍¤儊瑜ㄥ睉娉�.")
#define MSG_OFF                             _UxGT("琚欐噲灞戞郴. ")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("琚欐噲鏂滆閭鎳�")
#define MSG_ACC                             _UxGT("琚╄鎳堣娉�.")
#define MSG_JERK                            _UxGT("琚噲鑳佽姱娉�")
#define MSG_VX_JERK                         _UxGT("Vx-瑜夋噲鑳佽姱娉�")
#define MSG_VY_JERK                         _UxGT("Vy-瑜夋噲鑳佽姱娉�")
#define MSG_VZ_JERK                         _UxGT("Vz-瑜夋噲鑳佽姱娉�")
#define MSG_VE_JERK                         _UxGT("Ve-瑜夋噲鑳佽姱娉�")
#define MSG_VMAX                            _UxGT("V灞戦偑娉昏")
#define MSG_VMIN                            _UxGT("V灞戣え钖�")
#define MSG_VTRAV_MIN                       _UxGT("V瑜夎瑜忚 灞戣え钖�")
#define MSG_AMAX                            _UxGT("A灞戦偑娉昏 ")
#define MSG_A_RETRACT                       _UxGT("A-鑳佽瑜熻皭瑜嶈儊.")
#define MSG_A_TRAVEL                        _UxGT("A-瑜夎瑜忚")
#define MSG_STEPS_PER_MM                    _UxGT("琚ｈ鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_XSTEPS                          _UxGT("X娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_YSTEPS                          _UxGT("Y娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_ZSTEPS                          _UxGT("Z娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_ESTEPS                          _UxGT("E娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_E1STEPS                         _UxGT("E1娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_E2STEPS                         _UxGT("E2娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_E3STEPS                         _UxGT("E3娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_E4STEPS                         _UxGT("E4娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_E5STEPS                         _UxGT("E5娉昏鑺郴瑜ㄨ儊/灞戝睉")
#define MSG_TEMPERATURE                     _UxGT("瀛濇灞戦攲姊拌閭瑜嶈閭�")
#define MSG_MOTION                          _UxGT("琚瑜�")
#define MSG_FILAMENT                        _UxGT("琚欒姱璋㈣姱娉昏柂鑺�")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E 鑳� 灞戝睉3")
#define MSG_FILAMENT_DIAM                   _UxGT("琚涜え閭睉. 鑳佽姱璋㈣姱娉�.")
#define MSG_CONTRAST                        _UxGT("娉昏姱钖瑜夐偑瑜嬭 LCD")
#define MSG_STORE_EEPROM                    _UxGT("琚熸枩姊拌姊拌皭瑜屾噲 鑳� 琚╄琚�")
#define MSG_LOAD_EEPROM                     _UxGT("琚熻鎳堣閭鎳� 锜� 琚╄琚�")
#define MSG_RESTORE_FAILSAFE                _UxGT("琚欒え鍐欒柂鑺儊鎳堣鎳� 鏂滈偑锜硅姱鑳佽え")
#define MSG_REFRESH                         _UxGT("琚╄姱钖姱鑳佹噲瑜屾噲")
#define MSG_WATCH                           _UxGT("琚夎柂瑜庤姱瑜夊睉閭瑜ㄨ")
#define MSG_PREPARE                         _UxGT("琚╄え鍐欒皭鑺瑜嶈儊閭鎳�")
#define MSG_TUNE                            _UxGT("琚╄え鍐欒阿閭瑜岃鑳侀偑钖柂瑜�")
#define MSG_PAUSE_PRINT                     _UxGT("琚╄鎳堣煿瑜嶉攲鎳堣柂鎳堣鎳� 鍐欒瑜嶆郴")
#define MSG_RESUME_PRINT                    _UxGT("琚欒え鍐欒柂鑺儊鎳堣鎳� 鍐欒瑜嶆郴")
#define MSG_STOP_PRINT                      _UxGT("灏忔郴閭瑜嶈儊閭鎳� 鍐欒瑜嶆郴")
#define MSG_CARD_MENU                       _UxGT("琚涜瑜嶆郴瑜嶈儊閭鎳� 锜� SD")
#define MSG_NO_CARD                         _UxGT("琚欒え鍐欒瑜嶈钖 SD 娉婚偑瑜夎.")
#define MSG_DWELL                           _UxGT("灏忛攲璋㈣瑜旀郴閭�...")
#define MSG_USERWAIT                        _UxGT("琚ㄨ瑜ㄦ郴瑜嶈儊閭柂钖 鍐欒え娉�...")
#define MSG_RESUMING                        _UxGT("琚欒え鍐欒柂鑺儊璋㈡钖柂瑜� 鍐欒瑜嶆郴瑜�")
#define MSG_PRINT_ABORTED                   _UxGT("琚涜瑜嶆郴 瑜嬫郴閭鑺儊閭柂鑺�")
#define MSG_NO_MOVE                         _UxGT("琚ф灞戦偑瑜� 瑜夎瑜忚.")
#define MSG_KILLED                          _UxGT("琚╄琚琚琚楄ⅶ琚�. ")
#define MSG_STOPPED                         _UxGT("琚熸牎琚╄琚ц琚цⅷ. ")
#define MSG_FILAMENTCHANGE                  _UxGT("琚熷睉瑜ㄨ柂閭� 鑳佽姱璋㈣姱娉昏柂閭�")
#define MSG_INIT_SDCARD                     _UxGT("灏忚閭瑜� SD 娉婚偑瑜夎娉绘噲")
#define MSG_CNG_SDCARD                      _UxGT("琚熼偑灞戣え钖偑 SD 娉婚偑瑜夎鎳�")
#define MSG_ZPROBE_OUT                      _UxGT("Z 鍐欐瑜�. 钖 鑳� 灞戞鍗搁偑瑜�")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch 灏忛偑灞戣姱-瀛濇瑜嬭")
#define MSG_BLTOUCH_RESET                   _UxGT("灏忔郴鎳堣柂瑜嶈鎳� BLTouch")
#define MSG_HOME                            _UxGT("琚涜え灞�")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("閿屾瑜夎鎳堟硠")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("琚熷睉瑜ㄨ姊拌柂钖 Z")
#define MSG_BABYSTEP_X                      _UxGT("琚﹁え娉昏鑺郴瑜夎姱娉� X")
#define MSG_BABYSTEP_Y                      _UxGT("琚﹁え娉昏鑺郴瑜夎姱娉� Y")
#define MSG_BABYSTEP_Z                      _UxGT("琚﹁え娉昏鑺郴瑜夎姱娉� Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("钖鑳佸啓閭閭� 娉昏え钖姊拌儊鎳堟郴閭�")
#define MSG_HEATING_FAILED_LCD              _UxGT("琚ф鑳佸啓閭阿鎳堟硠 钖偑璋愯瑜ㄨ儊")
#define MSG_THERMAL_RUNAWAY                 _UxGT("琚熻琚夎ⅰ 瀛濊琚﹁ⅸ琚濊ⅹ琚楀瓭鏍¤ⅹ琚�")
#define MSG_ERR_Z_HOMING                    _UxGT("G28 Z 琚欒え鍐欏睉鑺儊璋㈡钖姱")
#define MSG_HALTED                          _UxGT("琚╄ⅹ琚犺ⅶ瀛濊琚� 琚熸牎琚╄琚ц琚цⅷ")
#define MSG_PLEASE_RESET                    _UxGT("琚╂瑜夋锜归偑鑳侀偑钖閭嵏瑜屾")
#define MSG_SHORT_DAY                       _UxGT("鍐�") // One character only
#define MSG_SHORT_HOUR                      _UxGT("璋�") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("瑜�") // One character only
#define MSG_HEATING                         _UxGT("琚ч偑璋愯瑜ㄨ儊閭柂钖...")
#define MSG_HEATING_COMPLETE                _UxGT("琚ч偑璋愯瑜ㄨ鑺�.")
#define MSG_BED_HEATING                     _UxGT("琚ч偑璋愯瑜ㄨ儊閭柂钖 瑜嬭鑺阿瑜�.")
#define MSG_BED_DONE                        _UxGT("灏忚瑜ㄨ阿 钖偑璋愯瑜ㄨ鎳堟硠.")
#define MSG_DELTA_CALIBRATE                 _UxGT("琚ｉ偑璋㈣え鏂滆. Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("琚ｉ偑璋㈣え鏂滆瑜嶈儊閭柂钖 X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("琚ｉ偑璋㈣え鏂滆瑜嶈儊閭柂钖 Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("琚ｉ偑璋㈣え鏂滆瑜嶈儊閭柂钖 Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("琚ｉ偑璋㈣え鏂滆. 绗戞钖瑜夎")

#define MSG_INFO_MENU                       _UxGT("琚╄鑺� 閿岃鎳堣柂瑜屾瑜�")
#define MSG_INFO_PRINTER_MENU               _UxGT("琚夎柂瑜庤姱瑜夊睉閭瑜ㄨ")
#define MSG_INFO_STATS_MENU                 _UxGT("灏忚閭鎳堣瑜屾噲娉婚偑")
#define MSG_INFO_BOARD_MENU                 _UxGT("琚╄鑺� 閿岃阿閭瑜�")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("瀛濇瑜夊睉瑜ㄨ瑜岃姱瑜夋噲")
#define MSG_INFO_EXTRUDERS                  _UxGT("琚濇郴瑜嬭瑜夎鍐欐瑜夋噲")
#define MSG_INFO_BAUDRATE                   _UxGT("鏂滆え瑜�/瑜�")
#define MSG_INFO_PROTOCOL                   _UxGT("琚╄鑺鑺郴鑺阿")
#define MSG_CASE_LIGHT                      _UxGT("琚╄え鍐欒鑳佽え瑜屾郴閭�")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("琚�-瑜嬭瑜� 鍐欒瑜嶆郴瑜ㄨ儊")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("琚熼偑鑳佹瑜夎姊拌柂鑺�")
  #define MSG_INFO_PRINT_TIME               _UxGT("琚欐瑜嬭 瑜旈偑瑜� 鍐欒瑜嶆郴瑜�")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("琚ч偑娉勫啓鑺儊瑜曟噲娉� 瑜旈偑瑜�")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("琚濇郴瑜嬭瑜夎鍐欒姱鑳侀偑钖姱")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("琚涜瑜嶆郴瑜ㄨ儊")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("琚熼偑鑳佹瑜夎姊拌柂鑺�")
  #define MSG_INFO_PRINT_TIME               _UxGT("琚熼偑璋愰偑璋㈣姱灞�")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("琚ч偑娉勫啓鑺儊瑜曟噲娉�")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("琚濇郴瑜嬪啓瑜夎鍐�.")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("琚﹁え钖� 瀛濇灞戦攲.")
#define MSG_INFO_MAX_TEMP                   _UxGT("琚﹂偑娉昏 瀛濇灞戦攲.")
#define MSG_INFO_PSU                        _UxGT("琚涘嵏姊拌姊拌阿鑺� 鍗告噲鑳�.")

#define MSG_DRIVE_STRENGTH                  _UxGT("灏忔噲璋㈤偑 灞戣姱瑜岃姱瑜夎")
#define MSG_DAC_PERCENT                     _UxGT("% 灞戣姱瑜岃姱瑜夎")
#define MSG_DAC_EEPROM_WRITE                _UxGT("琚熼偑閿屾噲瑜� 绗戣琚� 钖偑 琚╄琚�")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("琚濇郴瑜嬭瑜夎鍐欒鑳侀偑瑜屾噲")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("琚欒え鍐欒柂鑺儊鎳堣鎳� 鍐欒瑜嶆郴")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("琚熼偑瑜旀娉婚偑娉勮姊� 钖偑")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("閿岃姱瑜旈偑瑜岃姱娉� 锜归偑灞戣え钖噲")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("鑳佽姱璋㈣姱娉昏柂閭�")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("琚熼偑瑜旀娉婚偑娉勮姊� 钖偑")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("鑳佹噲鑳佽え鍐� 鑳佽姱璋㈣姱娉昏柂閭�")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("琚欒瑜岄偑鑳佽姊� 鑳佽姱璋㈣姱娉昏柂鑺�")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("瑜岄偑 钖偑瑜屾噲瑜嬭柂瑜ㄨ瑜� 鍐欒阿瑜�")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("閿岃鑺啓鑺儊鍗告钖柂瑜�...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("琚熼偑瑜旀娉婚偑娉勮姊� 钖偑")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("鑳佽儊瑜ㄥ啓 鑳佽姱璋㈣姱娉昏柂閭�")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("琚熼偑瑜旀娉婚偑娉勮姊� 钖偑")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("姊版郴瑜嬭瑜夎锜硅え瑜�")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       _UxGT("鑳佽姱璋㈣姱娉昏柂閭�")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("琚熼偑瑜旀娉婚偑娉勮姊� 钖偑")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("鑳佽え鍐欒柂鑺儊璋㈡钖柂瑜�")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("鍐欒瑜嶆郴瑜�")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("琚熼偑瑜旀娉婚偑娉勮姊�...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("琚欐噲鑳佽え鍐�...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("琚欒瑜岄偑鑳佽姊� 瑜� 钖偑瑜�.")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("琚欒儊瑜ㄥ啓...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("琚濇郴瑜嬭瑜夎锜硅え瑜�...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("琚欒え鍐欒柂鑺儊璋㈡钖柂瑜�...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_UK_H


