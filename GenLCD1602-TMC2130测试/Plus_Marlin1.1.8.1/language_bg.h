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
 * Bulgarian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_BG_H
#define LANGUAGE_BG_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" 琚氳姱瑜岃姱鑳�.")
#define MSG_SD_INSERTED                     _UxGT("琚ｉ偑瑜夎閭閭� 姊� 閿岃姱瑜嬭閭儊姊拌柂閭�")
#define MSG_SD_REMOVED                      _UxGT("琚ｉ偑瑜夎閭閭� 姊� 鎳堣煿鑳侀偑鍐欐钖偑")
#define MSG_MAIN                            _UxGT("琚︽钖")
#define MSG_AUTOSTART                       _UxGT("琚楄儊瑜岃姱瑜嬭閭瑜�")
#define MSG_DISABLE_STEPPERS                _UxGT("琚犺煿娉昏阿. 鍐欒儊鎳堣皭閭姊拌阿鎳�")
#define MSG_AUTO_HOME                       _UxGT("琚╅偑瑜夋郴鎳堣閭柂姊�")
#define MSG_SET_HOME_OFFSETS                _UxGT("琚熼偑鍐欓偑娉� 琚ч偑瑜旈偑璋㈣姱")
#define MSG_SET_ORIGIN                      _UxGT("琚犺煿瑜忚姱鍐欒柂閭� 瑜岃姱瑜旀郴閭�")
#define MSG_PREHEAT_1                       _UxGT("琚╄姱鍐欒皭瑜夎鑳侀偑钖 PLA")
#define MSG_PREHEAT_1_N                     _UxGT("琚╄姱鍐欒皭瑜夎鑳侀偑钖 PLA")
#define MSG_PREHEAT_1_ALL                   _UxGT("琚╄姱鍐欒皭瑜�. PLA 琚欒鎳堣娉绘噲")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("琚╄姱鍐欒皭瑜�. PLA 琚ユ璋愯阿鑺�")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("琚ч偑瑜嬭瑜夎姱娉勬郴鎳� PLA")
#define MSG_PREHEAT_2                       _UxGT("琚╄姱鍐欒皭瑜夎鑳侀偑钖 ABS")
#define MSG_PREHEAT_2_N                     _UxGT("琚╄姱鍐欒皭瑜夎鑳侀偑钖 ABS")
#define MSG_PREHEAT_2_ALL                   _UxGT("琚╄姱鍐欒皭瑜�. ABS 琚欒鎳堣娉绘噲")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("琚╄姱鍐欒皭瑜�. ABS 琚ユ璋愯阿鑺�")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("琚ч偑瑜嬭瑜夎姱娉勬郴鎳� ABS")
#define MSG_COOLDOWN                        _UxGT("琚ㄨ璋㈤偑鍗稿啓閭柂姊�")
#define MSG_SWITCH_PS_ON                    _UxGT("琚欐郴璋�. 锜归偑瑜忚閭柂鑳侀偑钖")
#define MSG_SWITCH_PS_OFF                   _UxGT("琚犺煿娉昏阿. 锜归偑瑜忚閭柂鑳侀偑钖")
#define MSG_EXTRUDE                         _UxGT("琚濇郴瑜嬭瑜夎锜规噲瑜�")
#define MSG_RETRACT                         _UxGT("琚ㄨ娉婚偑瑜�")
#define MSG_MOVE_AXIS                       _UxGT("琚涜儊鎳堝嵏姊拌柂鎳堟 閿岃姱 鑺")
#define MSG_BED_LEVELING                    _UxGT("琚ф噲鑳佹璋㈡噲瑜夐偑钖")
#define MSG_LEVEL_BED                       _UxGT("琚ф噲鑳佹璋㈡噲瑜夐偑钖")
#define MSG_MOVE_X                          _UxGT("琚涜儊鎳堝嵏姊拌柂鎳堟 閿岃姱 X")
#define MSG_MOVE_Y                          _UxGT("琚涜儊鎳堝嵏姊拌柂鎳堟 閿岃姱 Y")
#define MSG_MOVE_Z                          _UxGT("琚涜儊鎳堝嵏姊拌柂鎳堟 閿岃姱 Z")
#define MSG_MOVE_E                          _UxGT("琚濇郴瑜嬭瑜夎鍐欐瑜�")
#define MSG_MOVE_01MM                       _UxGT("琚╄姊板睉姊拌瑜屾噲 瑜� 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("琚╄姊板睉姊拌瑜屾噲 瑜� 1mm")
#define MSG_MOVE_10MM                       _UxGT("琚╄姊板睉姊拌瑜屾噲 瑜� 10mm")
#define MSG_SPEED                           _UxGT("灏忔郴鑺鑺瑜�")
#define MSG_BED_Z                           _UxGT("Bed Z")
#define MSG_NOZZLE                          LCD_STR_THERMOMETER _UxGT(" 琚涜锜归偑")
#define MSG_BED                             LCD_STR_THERMOMETER _UxGT(" 琚ユ璋愯阿鑺�")
#define MSG_FAN_SPEED                       _UxGT("琚欐钖鎳堣阿閭鑺")
#define MSG_FLOW                            _UxGT("琚╄姱瑜岃姱娉�")
#define MSG_CONTROL                         _UxGT("鏍￠攲瑜夐偑鑳佽阿姊拌柂鎳堟")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" 琚︽噲钖噲灞戣灞�")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" 琚﹂偑娉昏鎳堝睉瑜嶅睉")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" 鑲栭偑娉昏鑺")
#define MSG_AUTOTEMP                        _UxGT("琚楄儊瑜岃姱-瑜屾灞戦攲.")
#define MSG_ON                              _UxGT("琚欐郴璋�. ")
#define MSG_OFF                             _UxGT("琚犺煿娉昏阿. ")
#define MSG_A_RETRACT                       _UxGT("A-鑺娉婚偑瑜�")
#define MSG_A_TRAVEL                        _UxGT("A-travel")
#define MSG_STEPS_PER_MM                    _UxGT("灏忚瑜楅攲娉绘噲/mm")
#define MSG_XSTEPS                          _UxGT("X 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_YSTEPS                          _UxGT("Y 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_ZSTEPS                          _UxGT("Z 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_ESTEPS                          _UxGT("E 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_E1STEPS                         _UxGT("E1 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_E2STEPS                         _UxGT("E2 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_E3STEPS                         _UxGT("E3 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_E4STEPS                         _UxGT("E4 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_E5STEPS                         _UxGT("E5 瑜嬭瑜楅攲娉绘噲/mm")
#define MSG_TEMPERATURE                     _UxGT("瀛濇灞戦攲姊拌閭瑜嶈閭�")
#define MSG_MOTION                          _UxGT("琚涜儊鎳堝嵏姊拌柂鎳堟")
#define MSG_FILAMENT                        _UxGT("琚ф噲瑜曟郴閭�")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("琚涙噲閭睉. 钖噲瑜曟郴閭�")
#define MSG_CONTRAST                        _UxGT("LCD 娉昏姱钖瑜夐偑瑜嬭")
#define MSG_STORE_EEPROM                    _UxGT("琚熼偑閿岄偑锜规噲 鑳� EPROM")
#define MSG_LOAD_EEPROM                     _UxGT("琚熼偑瑜夋鍐欐噲 鑺 EPROM")
#define MSG_RESTORE_FAILSAFE                _UxGT("鑲栭偑鏂滆鎳堣钖噲 钖偑瑜嬭瑜夎姱娉勬郴鎳�")
#define MSG_REFRESH                         LCD_STR_REFRESH _UxGT("琚ㄦ枩钖姱鑳佹噲")
#define MSG_WATCH                           _UxGT("琚╄姊拌皭璋㈡鍐�")
#define MSG_PREPARE                         _UxGT("琚涙娉勮瑜岃儊鎳堣")
#define MSG_TUNE                            _UxGT("琚ч偑瑜嬭瑜夎姱娉勬郴閭�")
#define MSG_PAUSE_PRINT                     _UxGT("琚╅偑瑜嶈煿閭�")
#define MSG_RESUME_PRINT                    _UxGT("琚欒锜硅姱鏂滆柂鑺儊鎳� 閿屾瑜旈偑瑜岄偑")
#define MSG_STOP_PRINT                      _UxGT("灏忛攲瑜夋噲 閿屾瑜旈偑瑜岄偑")
#define MSG_CARD_MENU                       _UxGT("琚︽钖 娉婚偑瑜夎閭�")
#define MSG_NO_CARD                         _UxGT("琚ц灞戦偑 娉婚偑瑜夎閭�")
#define MSG_DWELL                           _UxGT("琚╄姱瑜旀噲鑳佹郴閭�...")
#define MSG_USERWAIT                        _UxGT("琚犺煿瑜旈偑娉昏儊閭柂姊�")
#define MSG_RESUMING                        _UxGT("琚╄鑺啓瑜楄阿鍗�. 閿屾瑜旈偑瑜岄偑")
#define MSG_PRINT_ABORTED                   _UxGT("琚╂瑜旈偑瑜岃瑜� 姊� 閿岃姊版郴瑜楄钖偑瑜�")
#define MSG_NO_MOVE                         _UxGT("琚ц灞戦偑 鍐欒儊鎳堝嵏姊拌柂鎳堟")
#define MSG_KILLED                          _UxGT("鏍¤琚犲瓭琚�.")
#define MSG_STOPPED                         _UxGT("灏忚ⅸ琚惡琚цⅷ.")
#define MSG_CONTROL_RETRACT                 _UxGT("琚ㄨ娉婚偑瑜� mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("灏忓睉瑜熻柂閭� 琚ㄨ娉婚偑瑜� mm")
#define MSG_CONTROL_RETRACTF                _UxGT("琚ㄨ娉婚偑瑜�  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("灏忔郴鑺郴 mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("琚欒锜硅儊瑜夐偑瑜� mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("灏忓睉瑜熻柂閭� 琚欒锜硅儊瑜夐偑瑜� mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("琚欒锜硅儊瑜夐偑瑜�  V")
#define MSG_AUTORETRACT                     _UxGT("琚楄儊瑜岃姱o瑜屾郴閭")
#define MSG_FILAMENTCHANGE                  _UxGT("灏忓睉瑜熻柂閭� 钖噲瑜曟郴閭�")
#define MSG_INIT_SDCARD                     _UxGT("琚犺柂鎳堣. SD-琚ｉ偑瑜夎閭�")
#define MSG_CNG_SDCARD                      _UxGT("灏忓睉瑜熻柂閭� SD-琚ｉ偑瑜夎閭�")
#define MSG_ZPROBE_OUT                      _UxGT("Z-瑜嬭姱钖啓閭閭� 姊� 鎳堣煿鑳侀偑鍐欐钖偑")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z 琚ㄨ瑜嬭鑺钖噲姊�")
#define MSG_BABYSTEP_X                      _UxGT("琚︽噲钖噲瑜嬭瑜楅攲娉婚偑 X")
#define MSG_BABYSTEP_Y                      _UxGT("琚︽噲钖噲瑜嬭瑜楅攲娉婚偑 Y")
#define MSG_BABYSTEP_Z                      _UxGT("琚︽噲钖噲瑜嬭瑜楅攲娉婚偑 Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("灏忚鑺攲 琚ｈ.琚犺煿娉昏阿瑜炶鑳侀偑瑜屾璋㈡噲")
#define MSG_DELTA_CALIBRATE                 _UxGT("琚涙璋㈣閭� 琚ｉ偑璋㈡噲鏂滆鑺儊娉婚偑")
#define MSG_DELTA_CALIBRATE_X               _UxGT("琚ｉ偑璋㈡噲鏂滆鑺儊娉婚偑 X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("琚ｉ偑璋㈡噲鏂滆鑺儊娉婚偑 Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("琚ｉ偑璋㈡噲鏂滆鑺儊娉婚偑 Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("琚ｉ偑璋㈡噲鏂滆鑺儊娉婚偑 绗戞钖瑜楄")

#endif // LANGUAGE_BG_H


