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
 * Japanese (Kana)
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#ifndef LANGUAGE_KANA_UTF_H
#define LANGUAGE_KANA_UTF_H

#define MAPPER_E382E383
#define DISPLAY_CHARSET_ISO10646_KANA

// This just to show the potential benefit of unicode.
// This translation can be improved by using the full charset of unicode codeblock U+30A0 to U+30FF.

// 閻楀洣鍒掗崥宥堛�冪粈鍝勭暰缂囷拷
#define WELCOME_MSG                         MACHINE_NAME _UxGT(" ready.")
#define MSG_SD_INSERTED                     _UxGT("閵堫偁鍏楅妷澶堝亾閵堝鍋婇妷瀣ㄥ劚閵堬负鍋熼妷顑惧劒閵堟灚鍋�")        // "Card inserted"
#define MSG_SD_REMOVED                      _UxGT("閵堫偁鍏楅妷澶堝亾閵堚偓鍎堕妷鐐仸閵夛拷")               // "Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("閵堛劊鍏傞妷澶堝仯閵夊牄鍎嶉妷锟�")                  // "Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("閵壜板亞閵夛拷")                       // "Main"
#define MSG_AUTOSTART                       _UxGT("閵堟悶鍎旈妶锔哄亽閵堛們鍋�")                   // "Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("閵夆偓鍏楅妶瑁ゅ厳閵夊洢鍏傞妶灞傚厒 閵堫亗鍎�")            // "Disable steppers"
#define MSG_DEBUG_MENU                      _UxGT("閵夊洢鍎涢妷鍐﹀仒閵壜板剸閵夈儯鍏�")                // "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               _UxGT("閵夋ぜ鍎归妶鑸劯閵堝箍鍎涢妷锟� 閵夊棎鍋ｉ妷锟�")            // "Progress Bar Test"
#define MSG_AUTO_HOME                       _UxGT("閵堝眰鍏傞妷鍡愬厒閵夋洏鍎嶉妶锟�")                  // "Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("X閵堟悶鍋� 閵堝眰鍏傞妷鍡愬厒閵夋洏鍎嶉妶锟�")             // "Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("Y閵堟悶鍋� 閵堝眰鍏傞妷鍡愬厒閵夋洏鍎嶉妶锟�")             // "Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("Z閵堟悶鍋� 閵堝眰鍏傞妷鍡愬厒閵夋洏鍎嶉妶锟�")             // "Home Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("閵堝眰鍏傞妷鍡愬厒閵夋洏鍎嶉妶顓滃剨閵夈儯鍋�")              // "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("閵夘兙鍎ラ妷顏傚厒閵堣埇鍋掗妶銈冨仭")                // "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("閵夊嫨鍋栭妷搴涘仺閵堫垬鍎愰妶銈冨剱閵夌偨鍎�")             // "Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("閵夘兙鍎ラ妷顏傚厒閵堣埇鍋掗妷鐐藉劧閵壯佸亰")              // "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                _UxGT("閵堫厹鍋㈤妷銉ｅ厒閵堫亗鍎犻妶姹囧剭閵夊牄鍋﹂妷鍐﹀剱閵堬拷")         // "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("閵堫亗鍎犻妶姹囧剭閵夊牄鍋撻妷鍡愬仈閵夈劊鍋婇妶鐐瑰劯閵夌偑鍋￠妶锟�")       // "Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("閵堫厹鍋㈤妷銉ｅ厒閵堟眹鍎嶉妷锟�")                 // "Set origin"
#define MSG_PREHEAT_1                       _UxGT("PLA 閵夈劊鍎橀妷锟�")                   // "Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   _UxGT("PLA 閵堝箍鍎ラ妷鍡愬劥閵夊秲鍎�")              // " All"
#define MSG_PREHEAT_1_BEDONLY               _UxGT("PLA 閵夋瑣鍎嶉妷澶堝劥閵夊秲鍎�")              // " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT("閵堟眹鍎嶉妷鍡愬亞")       // " conf"
#define MSG_PREHEAT_2                       _UxGT("ABS 閵夈劊鍎橀妷锟�")                  // "Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   _UxGT("ABS 閵堝箍鍎ラ妷鍡愬劥閵夊秲鍎�")              // " All"
#define MSG_PREHEAT_2_BEDONLY               _UxGT("ABS 閵夋瑣鍎嶉妷澶堝劥閵夊秲鍎�")              // " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT("閵堟眹鍎嶉妷鍡愬亞")       // " conf"
#define MSG_COOLDOWN                        _UxGT("閵堫偁鍎橀妷鍕╁剱閵堛們鍋�")                  // "Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("閵夊洢鍏傞妶灞傚厒 閵堫亗鍏�")                 // "Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("閵夊洢鍏傞妶灞傚厒 閵堫亗鍎�")                 // "Switch power off"
#define MSG_EXTRUDE                         _UxGT("閵堫亗鍋￠妷锟介妶锟�")                     // "Extrude"
#define MSG_RETRACT                         _UxGT("閵夋帇鍋旈妶鐐藉劔閵堟眹鍎嶉妷鍡愬亞")                // "Retract"
#define MSG_MOVE_AXIS                       _UxGT("閵堟悶鍋楅妶銈冨剶閵堬拷")                    // "Move axis"
#define MSG_BED_LEVELING                    _UxGT("閵夋瑣鍎嶉妷澶堝劯閵夋瑣鍎堕妷鐐藉仒")                // "Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("閵夋瑣鍎嶉妷澶堝劯閵夋瑣鍎堕妷鐐藉仒")                // "Level bed"
#define MSG_MOVING                          _UxGT("閵堛們鍎旈妶锔哄剨閵夈儯鍋�")                   // "Moving..."
#define MSG_FREE_XY                         _UxGT("XY閵堟悶鍋� 閵堫偁鍋嗛妷娑栧亰")                // "Free XY"
#define MSG_MOVE_X                          _UxGT("X閵堟悶鍋� 閵堛們鍎旈妶锟�")                  // "Move X"
#define MSG_MOVE_Y                          _UxGT("Y閵堟悶鍋� 閵堛們鍎旈妶锟�")                  // "Move Y"
#define MSG_MOVE_Z                          _UxGT("Z閵堟悶鍋� 閵堛們鍎旈妶锟�")                  // "Move Z"
#define MSG_MOVE_E                          _UxGT("閵堛劊鍋楅妶骞垮創閵夘偁鍏楅妷锟介妷锟�")                // "Extruder"
#define MSG_MOVE_01MM                       _UxGT("0.1mm 閵堛們鍎旈妶锟�")                 // "Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("  1mm 閵堛們鍎旈妶锟�")                 // "Move 1mm"
#define MSG_MOVE_10MM                       _UxGT(" 10mm 閵堛們鍎旈妶锟�")                 // "Move 10mm"
#define MSG_SPEED                           _UxGT("閵堝鍋楅妷锟�")                       // "Speed"
#define MSG_BED_Z                           _UxGT("Z閵堫亗鍎犻妶姹囧剭閵夛拷")                   // "Bed Z"
#define MSG_NOZZLE                          _UxGT("閵夊簺鍋ら妷锟�")                       // "Nozzle"
#define MSG_BED                             _UxGT("閵夋瑣鍎嶉妷锟�")                       // "Bed"
#define MSG_FAN_SPEED                       _UxGT("閵夋洏鍋傞妷鐐藉仺閵堫垬鍎�")                    // "Fan speed"
#define MSG_FLOW                            _UxGT("閵夊牄鍋￠妷銉ｅ剮閵夘亗鍎抽妶锟�")                   // "Flow"
#define MSG_CONTROL                         _UxGT("閵堟眹鍋嗛妶顔哄劤")                      // "Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 閵堢偣鍋嗛妷鍡愬亞") // " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 閵堢偣鍋嗛妶鐐藉亰") // " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 閵夋洏鍋傞妶顖樺仾閵夛拷") // " Fact"
#define MSG_AUTOTEMP                        _UxGT("閵堟悶鍎旈妶锔哄亼閵夌偨鍎旈妶姹囧亞閵堫喓鍎�")               // "Autotemp"
#define MSG_ON                              _UxGT("閵堫亗鍏� ")                         // "On "
#define MSG_OFF                             _UxGT("閵堫亗鍎� ")                         // "Off"
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("閵堟眹鍏傞妶瑁ゅ仐")                     // "Select"
#define MSG_ACC                             _UxGT("閵堫偁鍋ㄩ妶顖樺剶 mm/s2")               // "Accel"
#define MSG_JERK                            _UxGT("閵夈們鍋楅妷锟� mm/s")                  // "Jerk"
#define MSG_VX_JERK                         _UxGT("X閵堟悶鍋� 閵夈們鍋楅妷锟� mm/s")             // "Vx-jerk"
#define MSG_VY_JERK                         _UxGT("Y閵堟悶鍋� 閵夈們鍋楅妷锟� mm/s")             // "Vy-jerk"
#define MSG_VZ_JERK                         _UxGT("Z閵堟悶鍋� 閵夈們鍋楅妷锟� mm/s")             // "Vz-jerk"
#define MSG_VE_JERK                         _UxGT("閵堛劊鍋楅妶骞垮創閵夘偁鍏楅妷锟介妷锟� 閵夈們鍋楅妷锟�")          // "Ve-jerk"
#define MSG_VMAX                            _UxGT("閵堢偣鍋嗛妷锟介妶銈冨亼閵堫垬鍎堕妶濮愬仐閵夛拷 ")            // "Vmax "
#define MSG_VMIN                            _UxGT("閵堢偣鍋嗛妶鏋劤閵堬负鍋戦妶顖樺劧閵堝鍋楅妷锟�")           // "Vmin"
#define MSG_VTRAV_MIN                       _UxGT("閵堢偣鍋嗛妶鏋劤閵堬负鍋嗛妷澶堝亰閵堝鍋楅妷锟�")           // "VTrav min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("閵堢偣鍋嗛妷锟介妶銈冨亽閵堝鍋楅妷锟� ")              // "Amax "
#define MSG_A_RETRACT                       _UxGT("閵夋帇鍋旈妶鐐藉劔閵堫偁鍋ㄩ妶顖樺剶")               // "A-retract"
#define MSG_A_TRAVEL                        _UxGT("閵堛們鍎旈妶锔哄亽閵堝鍋楅妷锟�")                // "A-travel"
#define MSG_TEMPERATURE                     _UxGT("閵堫亗鍏傞妷锟�")                      // "Temperature"
#define MSG_MOTION                          _UxGT("閵堬负鍋為妶顓滃仸閵夊啨鍎愰妶锟�")                // "Motion"
#define MSG_FILAMENT                        _UxGT("閵夋洏鍋呴妷鈹垮劖閵夌偨鍎�")                   // "Filament"
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("閵夋洏鍋呴妷鈹垮劖閵夌偨鍎撻妷浣靛劤閵夊啨鍋欓妶锟�")            // "Fil. Dia."
#define MSG_CONTRAST                        _UxGT("LCD閵堢偨鍏傞妷鍫涘劦閵堝箍鍎�")               // "LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("閵壜板劗閵夘亗鍎ら妶顐犲仐閵夊簺鍋�")               // "Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("閵壜板劗閵夘亗鍋掗妷鈹垮劥閵夌喆鍋濋妷锟�")               // "Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("閵堟眹鍎嶉妷鍡愬亞閵夘亗鍋﹂妷鍐﹀創")               // "Restore failsafe"
#define MSG_REFRESH                         _UxGT("閵夘亗鍎犻妷顑惧剭閵堟灚鍎�")                  // "Refresh"
#define MSG_WATCH                           _UxGT("閵堟悶鍎抽妶锔哄劎閵堬负鍋撻妷掳鍏�")               // "Info screen"
#define MSG_PREPARE                         _UxGT("閵堟悶鍎遍妷鐐藉劄閵堟眹鍎嶉妷鍡愬亞")               // "Prepare"
#define MSG_TUNE                            _UxGT("閵変降鍎抽妶锔哄仸閵堬拷")                    // "Tune"
#define MSG_PAUSE_PRINT                     _UxGT("閵堛們鍎婇妶鎼炲剱閵堛們鍋�")                  // "Pause print"
#define MSG_RESUME_PRINT                    _UxGT("閵夋ぜ鍎堕妷鐐藉創閵堢偣鍋嗛妶顐犲亞")                // "Resume print"
#define MSG_STOP_PRINT                      _UxGT("閵夋ぜ鍎堕妷鐐藉創閵夊棎鍋嗛妶锟�")                 // "Stop print"
#define MSG_CARD_MENU                       _UxGT("SD閵堫偁鍏楅妷澶堝亽閵夆斂鍎ｉ妷顏傚厒閵夛拷")            // "Print from SD"
#define MSG_NO_CARD                         _UxGT("SD閵堫偁鍏楅妷澶堝亾閵堚偓鍎堕妷鐐仸閵夛拷")            // "No SD card"
#define MSG_DWELL                           _UxGT("閵堫厹鍎遍妶锔哄仭")                     // "Sleep..."
#define MSG_USERWAIT                        _UxGT("閵堟灚鍎涢妷鈹垮仐閵堫亗鍎妷浣靛仐閵夛拷閵堢偣鍋�")           // "Wait for user..."
#define MSG_RESUMING                        _UxGT("閵夋ぜ鍎堕妷鐐藉創閵堢偣鍋嗛妶顐犲亞")                // "Resuming print"
#define MSG_PRINT_ABORTED                   _UxGT("閵夋ぜ鍎堕妷鐐藉創閵堫兙鍎婇妷銉ｅ亰閵堟灚鍋熼妷顑惧劒閵堟灚鍋�")       // "Print aborted"
#define MSG_NO_MOVE                         _UxGT("閵堬负鍋為妶顓滃劒閵堟眹鍏�")                  // "No move."
#define MSG_KILLED                          _UxGT("閵夋帇鍋㈤妷褋鍋婇妷鍡愬亞閵堬拷")                  // "KILLED. "
#define MSG_STOPPED                         _UxGT("閵夊棎鍋嗛妶鏋仭閵夌偑鍋￠妶锟�")                  // "STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("閵夋帇鍋旈妶鐐藉劔閵夘亗鍎抽妶锟� mm")                // "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("閵夋帇鍋旈妶鐐藉劔閵夘亗鍎抽妶顨� mm")               // "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                _UxGT("閵夋帇鍋旈妶鐐藉劔閵堝鍋楅妷锟� mm/s")             // "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("閵夊簺鍋ら妷顐犲仾閵堛們鍎� mm")                // "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("閵夋稏鍋￠妷褋鍋婇妷顏傚劤閵堬拷 mm")               // "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("閵夋稏鍋￠妷褋鍋婇妷顏傚劤閵堫毠 mm")              // "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("閵夋稏鍋￠妷褋鍋婇妶濮愬仐閵夛拷 mm/s")            // "UnRet  V"
#define MSG_AUTORETRACT                     _UxGT("閵堟悶鍎旈妶锔哄劃閵堫厹鍋濋妷锟�")                 // "AutoRetr."
#define MSG_FILAMENTCHANGE                  _UxGT("閵夋洏鍋呴妷鈹垮劖閵夌偨鍎撻妶鐐藉亰閵堫偁鍏�")              // "Change filament"
#define MSG_INIT_SDCARD                     _UxGT("SD閵堫偁鍏楅妷澶堝仧閵堛們鍎撮妷鐔村仢閵夛拷")             // "Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("SD閵堫偁鍏楅妷澶堝仢閵堬负鍋掗妷锟�")               // "Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Z閵夋ぜ鍎归妷绗哄劉 閵夋瑣鍎嶉妷澶堝亾閵堬拷")            // "Z probe out. bed"
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch 閵堟悶鍋濋妶鏋厒閵夛拷閵夛拷")          // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch 閵夘亗鍋﹂妷鍐﹀創")             // "Reset BLTouch"
#define MSG_HOME                            _UxGT("閵堢偣鍋旈妷锟�")                      // "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("閵夊眰鍎犻妷鍐﹀仈閵堢偣鍋﹂妷鍡愬仐閵夛拷閵堢偣鍋�")           // "first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z閵堫亗鍎犻妶姹囧剭閵夛拷")                   // "Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("X閵堟悶鍋� 閵夋挶鍎旈妶锟�")                  // "Babystep X"
#define MSG_BABYSTEP_Y                      _UxGT("Y閵堟悶鍋� 閵夋挶鍎旈妶锟�")                  // "Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("Z閵堟悶鍋� 閵夋挶鍎旈妶锟�")                  // "Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("閵堛們鍎旈妶锔哄仜閵夌偨鍋掗妶銈冨仚閵夌偨鍎婇妶顓滃剻閵堬拷")         // "Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("閵堫偁鍎橀妷鍕╁仭閵夊啨鍎滈妶锟�")                 // "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("閵堛劊鍎甸妷锟�:閵堟悶鍎抽妶锔哄剨閵壯佸亰閵堢偣鍏楅妷鐔村仯閵堣￥鍏楅妶顓滃剻閵堬拷")  // "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("閵夊秲鍎庨妷婧垮亰閵堝鍋�")                   // "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("閵堛劊鍎甸妷锟�:閵堢偣鍋嗛妶鐐藉亰閵堫亗鍏傞妷浣靛劤閵堬负鍋�")         // "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("閵堛劊鍎甸妷锟�:閵堢偣鍋嗛妷鍡愬亞閵堫亗鍏傞妷鐔村劒閵夛拷")          // "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("閵堛劊鍎甸妷锟�:閵夋瑣鍎嶉妷锟� 閵堢偣鍋嗛妶鐐藉亰閵堫亗鍏傞妷浣靛劤閵堬负鍋�")    // "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("閵堛劊鍎甸妷锟�:閵夋瑣鍎嶉妷锟� 閵堢偣鍋嗛妷鍡愬亞閵堫亗鍏傞妷鐔村劒閵夛拷")     // "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST // "G28 Z Forbidden"
#define MSG_HALTED                          _UxGT("閵夋ぜ鍎堕妷鐐藉仾閵夌鍎氶妷鍡愬亞閵堟灚鍋￠妷鐐仭閵堬拷")         // "PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("閵夘亗鍋﹂妷鍐﹀創閵堟灚鍎愰妶顖樺剦閵堢偣鍋�")              // "Please reset"
#define MSG_SHORT_DAY                       _UxGT("d")                          // One character only
#define MSG_SHORT_HOUR                      _UxGT("h")                          // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m")                          // One character only
#define MSG_HEATING                         _UxGT("閵堫偁鍎橀妷鍕╁剨閵夈儯鍋�")                   // "Heating..."
#define MSG_HEATING_COMPLETE                _UxGT("閵堫偁鍎橀妷鍕╁亽閵夌偨鍎堕妷褋鍋�")                 // "Heating done."
#define MSG_BED_HEATING                     _UxGT("閵夋瑣鍎嶉妷锟� 閵堫偁鍎橀妷鍕╁剨閵夈儯鍋�")              // "Bed Heating."
#define MSG_BED_DONE                        _UxGT("閵夋瑣鍎嶉妷锟� 閵堫偁鍎橀妷鍕╁亽閵夌偨鍎堕妷褋鍋�")            // "Bed done."
#define MSG_DELTA_CALIBRATE                 _UxGT("閵夊洢鍎烽妶锟� 閵堢偨鍋婇妶姹囧亞")                // "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("X閵堟悶鍋� 閵堢偨鍋婇妶姹囧亞")                 // "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Y閵堟悶鍋� 閵堢偨鍋婇妶姹囧亞")                 // "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Z閵堟悶鍋� 閵堢偨鍋婇妶姹囧亞")                 // "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("閵変降鍎遍妶锔哄仭閵夛拷 閵堢偨鍋婇妶姹囧亞")              // "Calibrate Center"
#define MSG_INFO_MENU                       _UxGT("閵堢偨鍎欓妷妞煎劧閵夌偨鍋妷绗哄剸閵夊嫨鍋嗛妷锟�")             // "About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("閵夋ぜ鍎堕妷鐐藉仾閵夌鍋㈤妷褋鍋婇妷娑栧亰")              // "Printer Info"
#define MSG_INFO_STATS_MENU                 _UxGT("閵夋ぜ鍎堕妷鐐藉創閵堟悶鍎抽妶锔哄仈閵壯佸亰")              // "Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("閵堟眹鍋嗛妶顔哄劤閵堜究鍋嗛妶鎼炲劤閵堬负鍎ч妶锟�")            // "Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("閵堢偣鍏楅妷鐔村仯閵堣￥鍏�")                   // "Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("閵堛劊鍋楅妶骞垮創閵夘偁鍏楅妷锟介妷绗哄仯閵堬拷")             // "Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("閵夋嚎鍏楅妷顑惧厳閵夛拷")                    // "Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("閵夋ぜ鍎归妷鍫涘仢閵夛拷")                    // "Protocol"
#define MSG_CASE_LIGHT                      _UxGT("閵堫厹鍎抽妶锔哄仾閵堛們鍎曢妶銈冨仭閵壯佸亰閵壜板亞")       // "Case light"
#define MSG_INFO_PRINT_COUNT                _UxGT("閵夋ぜ鍎堕妷鐐藉創閵堝箍鍋� ")                  // "Print Count"
#define MSG_INFO_COMPLETED_PRINTS           _UxGT("閵堫偁鍏傞妷顏傚劤閵堬负鍋ｉ妶锟�")                  // "Completed"
#define MSG_INFO_PRINT_TIME                 _UxGT("閵夋ぜ鍎堕妷鐐藉創閵堟悶鍋掗妷鐐藉劮閵堛們鍋欓妶锟�")            // "Total print time"
#define MSG_INFO_PRINT_LONGEST              _UxGT("閵堢偣鍋嗛妷浣靛劤閵堬负鍎ｉ妷顏傚厒閵夊牄鍋㈤妶顐犲厒")           // "Longest job time"
#define MSG_INFO_PRINT_FILAMENT             _UxGT("閵夋洏鍋呴妷鈹垮劖閵夌偨鍎撻妶鏋劥閵堬负鍎堕妷褋鍋婇妷顐犲亞閵堜究鍋�")       // "Extruded total"
#define MSG_INFO_MIN_TEMP                   _UxGT("閵堟眹鍎嶉妷鍡愬亞閵堢偣鍋嗛妷鍡愬亞閵堫亗鍏�")              // "Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("閵堟眹鍎嶉妷鍡愬亞閵堢偣鍋嗛妶鐐藉亰閵堫亗鍏�")              // "Max Temp"
#define MSG_INFO_PSU                        _UxGT("閵夊洢鍏傞妶灞傚厒閵堟灚鍎遍妷娆嶅剮")                // "Power Supply"
#define MSG_DRIVE_STRENGTH                  _UxGT("閵夆偓鍏楅妶瑁ゅ厳閵堫垬鍎旈妶锔哄劧閵壯佸仐")              // "Drive Strength"
#define MSG_DAC_PERCENT                     _UxGT("DAC閵堟灚鍎遍妷鍕╁劧閵壯佸仐 %")               // "Driver %"
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EPROM                     // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("閵堢偣鍎甸妷瀣ㄥ亼閵堟灚鍎夐妶锟�")                 // "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("閵夋ぜ鍎堕妷鐐藉創閵堢偣鍋嗛妶顐犲亞")                // "Resume print"
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("閵堢偨鍋婇妶顐犲厒閵夊眰鍋掗妶銈冨仭閵堟灚鍎妶锟�")            // "Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("閵堟灚鍎涢妷鈹垮仐閵堫亗鍎妷浣靛仐閵夛拷閵堢偣鍋�")            // "of the filament"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("閵夋洏鍋呴妷鈹垮劖閵夌偨鍎撻妷灞诲仈閵夛拷閵堟灚鍎婇妷銉ｅ亰")          // "Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("閵堟灚鍎涢妷鈹垮仐閵堫亗鍎妷浣靛仐閵夛拷閵堢偣鍋�")            // "filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("閵夋洏鍋呴妷鈹垮劖閵夌偨鍎撻妷灞傚仺閵堬负鍎栭妷銉ｅ亰閵堬拷,")         // "Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("閵堫垬鍎堕妷鍐﹀仐閵堝箍鍎烽妷鍫涘仼閵夊啨鍋濋妶锔哄仭閵夌偑鍋�")         // "and press button"
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("閵夋洏鍋呴妷鈹垮劖閵夌偨鍎撻妶濮愬亰閵夊棎鍏傞妷浣靛劚閵堬拷")          // "Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("閵堟灚鍎涢妷鈹垮仐閵堫亗鍎妷浣靛仐閵夛拷閵堢偣鍋�")            // "filament load"
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("閵夋洏鍋呴妷鈹垮劖閵夌偨鍎撻妶顏傚仭閵夛拷閵堟灚鍎婇妷銉ｅ亰")          // "Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("閵堟灚鍎涢妷鈹垮仐閵堫亗鍎妷浣靛仐閵夛拷閵堢偣鍋�")            // "filament extrude"
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("閵夋ぜ鍎堕妷鐐藉創閵夊眰鍋熼妶銈冨亽閵堛們鍋￠妷鐐仯")           // "Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("閵堟灚鍎涢妷鈹垮仐閵堫亗鍎妷浣靛仐閵夛拷閵堢偣鍋�")            // "to resume"

#endif // LANGUAGE_KANA_UTF_H


