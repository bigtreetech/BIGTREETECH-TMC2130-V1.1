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
 * Turkish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_TR_H
#define LANGUAGE_TR_H

#define MAPPER_C2C3_TR
#define DISPLAY_CHARSET_ISO10646_TR

#if DISABLED(DOGLCD)
  #error "Turkish needs a graphical display."
#endif

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" haz璋媟.")                               // haz璋媟.
#define MSG_SD_INSERTED                     _UxGT("SD Yerle鑹i.")                                       // SD Yerle鑹i.
#define MSG_SD_REMOVED                      _UxGT("SD 鑴熻皨kar璋媗d璋�.")                                      // SD 鑴熻皨kar璋媗d璋�.
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters                // Endstops
#define MSG_MAIN                            _UxGT("Ana")                                                // Ana
#define MSG_BACK                            _UxGT("Geri")                                               // Geri
#define MSG_AUTOSTART                       _UxGT("Otoba鑹at")                                          // Otoba鑹at
#define MSG_DISABLE_STEPPERS                _UxGT("Motorlar璋� Durdur")                                   // Motorlar璋� Durdur
#define MSG_DEBUG_MENU                      _UxGT("Hata Ay璋媖lama")                                      // Hata Ay璋媖lama
#define MSG_PROGRESS_BAR_TEST               _UxGT("Durum 鑴焨bu鑷抲 Testi")                                 // Durum 鑴焨bu鑷抲 Testi
#define MSG_AUTO_HOME                       _UxGT("Eksenleri S璋媐璋媟la")                                  // Eksenleri S璋媐璋媟la
#define MSG_AUTO_HOME_X                     _UxGT("X S璋媐璋媟la")                                          // X S璋媐璋媟la
#define MSG_AUTO_HOME_Y                     _UxGT("Y S璋媐璋媟la")                                          // Y S璋媐璋媟la
#define MSG_AUTO_HOME_Z                     _UxGT("Z S璋媐璋媟la")                                          // Z S璋媐璋媟la
#define MSG_LEVEL_BED_HOMING                _UxGT("XYZ S璋媐璋媟lan璋媦or")                                   // XYZ S璋媐璋媟lan璋媦or
#define MSG_LEVEL_BED_WAITING               _UxGT("Ba鑹atmak i鑾絠n t璋媖la")                               // Ba鑹atmak i鑾絠n t璋媖la
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("S璋媟adaki Nokta")                                     // S璋媟adaki Nokta
#define MSG_LEVEL_BED_DONE                  _UxGT("Seviyeleme Tamam!")                                  // Seviyeleme Tamam!
#define MSG_SET_HOME_OFFSETS                _UxGT("Offset Ayarla")                                      // Offset Ayarla
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offset Tamam")                                       // Offset Tamam
#define MSG_SET_ORIGIN                      _UxGT("S璋媐璋媟 Belirle")                                      // S璋媐璋媟 Belirle
#define MSG_PREHEAT_1                       _UxGT("鑴皀 Is璋媙ma PLA")                                      // 鑴皀 Is璋媙ma PLA
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")                                    //
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" T鐪塵")                                 //  T鐪塵
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" Noz鐪塴")                               //  Noz鐪塴
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" Tabla")                               //  Tabla
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" Ayar")                                //  Ayar
#define MSG_PREHEAT_2                       _UxGT("鑴皀 Is璋媙ma ABS")                                      // 鑴皀 Is璋媙ma ABS
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")                                    //
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" T鐪塵")                                 //  T鐪塵
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" Noz鐪塴")                               //  Noz鐪塴
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Tabla")                               //  Tabla
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" Ayar")                                //  Ayar
#define MSG_COOLDOWN                        _UxGT("So鑷抲t")                                              // So鑷抲t
#define MSG_SWITCH_PS_ON                    _UxGT("G鐪塩鐪� A鑾�")                                            // G鐪塩鐪� A鑾�
#define MSG_SWITCH_PS_OFF                   _UxGT("G鐪塩鐪� Kapat")                                         // G鐪塩鐪� Kapat
#define MSG_EXTRUDE                         _UxGT("Extrude")                                            // Extrude
#define MSG_RETRACT                         _UxGT("Geri 鑴焑k")                                           // Geri 鑴焑k
#define MSG_MOVE_AXIS                       _UxGT("Eksen Y鏋歯et")                                        // Eksenleri Y鏋歯et
#define MSG_BED_LEVELING                    _UxGT("Tabla Seviyele")                                     // Tabla Seviyele
#define MSG_LEVEL_BED                       _UxGT("Tabla Seviyele")                                     // Tabla Seviyele
#define MSG_MOVING                          _UxGT("Konumlan璋媦or...")                                    // Konumlan璋媦or...
#define MSG_FREE_XY                         _UxGT("Durdur XY")                                          // Durdur XY
#define MSG_MOVE_X                          _UxGT("X")                                                  // X
#define MSG_MOVE_Y                          _UxGT("Y")                                                  // Y
#define MSG_MOVE_Z                          _UxGT("Z")                                                  // Z
#define MSG_MOVE_E                          _UxGT("Ekstruder")                                          // Ekstruder
#define MSG_MOVE_01MM                       _UxGT("0.1mm")                                              // 0.1mm
#define MSG_MOVE_1MM                        _UxGT("1mm")                                                // 1mm
#define MSG_MOVE_10MM                       _UxGT("10mm")                                               // 10mm
#define MSG_SPEED                           _UxGT("H璋媧")                                                // H璋媧
#define MSG_BED_Z                           _UxGT("Z Mesafesi")                                         // Z Mesafesi
#define MSG_NOZZLE                          _UxGT("Noz鐪塴")                                              // Noz鐪塴
#define MSG_BED                             _UxGT("Tabla")                                              // Tabla
#define MSG_FAN_SPEED                       _UxGT("Fan H璋媧璋�")                                           // Fan H璋媧璋�
#define MSG_FLOW                            _UxGT("Ak璋嬭墽")                                               // Ak璋嬭墽
#define MSG_CONTROL                         _UxGT("Kontrol")                                            // Kontrol
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")                //  Min
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")                //  Max
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鑴焌rpan")             //  鑴焌rpan
#define MSG_AUTOTEMP                        _UxGT("Autotemp")                                           //  Autotemp
#define MSG_ON                              _UxGT("On ")                                                // On
#define MSG_OFF                             _UxGT("Off")                                                // Off
#define MSG_PID_P                           _UxGT("PID-P")                                              // PID-P
#define MSG_PID_I                           _UxGT("PID-I")                                              // PID-I
#define MSG_PID_D                           _UxGT("PID-D")                                              // PID-D
#define MSG_PID_C                           _UxGT("PID-C")                                              // PID-C
#define MSG_SELECT                          _UxGT("Se鑾�")                                                // Se鑾�
#define MSG_ACC                             _UxGT("闄寁me")                                               // 闄寁me
#define MSG_JERK                            _UxGT("Jerk")
#define MSG_VX_JERK                         _UxGT("Vx-Jerk")                                            // Vx-Jerk
#define MSG_VY_JERK                         _UxGT("Vy-Jerk")                                            // Vy-Jerk
#define MSG_VZ_JERK                         _UxGT("Vz-jerk")                                            // Vz-Jerk
#define MSG_VE_JERK                         _UxGT("Ve-jerk")                                            // Ve-Jerk
#define MSG_VMAX                            _UxGT("Vmax ")                                              // Vmax
#define MSG_VMIN                            _UxGT("Vmin")                                               // Vmin
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")                                          // Vtrav min
#define MSG_AMAX                            _UxGT("Amax ")                                              // Amax
#define MSG_A_RETRACT                       _UxGT("A-retract")                                          // A-retract
#define MSG_A_TRAVEL                        _UxGT("A-travel")                                           // A-travel
#define MSG_STEPS_PER_MM                    _UxGT("Steps/mm")                                           // Xsteps/mm
#define MSG_XSTEPS                          _UxGT("Xsteps/mm")                                          // Xsteps/mm
#define MSG_YSTEPS                          _UxGT("Ysteps/mm")                                          // Ysteps/mm
#define MSG_ZSTEPS                          _UxGT("Zsteps/mm")                                          // Zsteps/mm
#define MSG_ESTEPS                          _UxGT("Esteps/mm")                                          // Esteps/mm
#define MSG_E1STEPS                         _UxGT("E1steps/mm")                                         // E1steps/mm
#define MSG_E2STEPS                         _UxGT("E2steps/mm")                                         // E2steps/mm
#define MSG_E3STEPS                         _UxGT("E3steps/mm")                                         // E3steps/mm
#define MSG_E4STEPS                         _UxGT("E4steps/mm")                                         // E4steps/mm
#define MSG_E5STEPS                         _UxGT("E5steps/mm")                                         // E4steps/mm
#define MSG_TEMPERATURE                     _UxGT("S璋媍akl璋媖")                                           // S璋媍akl璋媖
#define MSG_MOTION                          _UxGT("Hareket")                                            // Hareket
#define MSG_FILAMENT                        _UxGT("Filaman")                                            // Filaman
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")                                           // E in mm3
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. 鑴焌p")                                           // Fil. 鑴焌p
#define MSG_ADVANCE_K                       _UxGT("K 闄宭erlet")                                          // K 闄宭erlet
#define MSG_CONTRAST                        _UxGT("LCD Kontrast")                                       // LCD Kontrast
#define MSG_STORE_EEPROM                    _UxGT("Haf璋媧aya Al")                                        // Haf璋媧aya Al
#define MSG_LOAD_EEPROM                     _UxGT("Haf璋媧adan Y鐪塳le")                                    // Haf璋媧adan Y鐪塳le
#define MSG_RESTORE_FAILSAFE                _UxGT("Fabrika Ayarlar璋�")                                   // Fabrika Ayarlar璋�
#define MSG_REFRESH                         _UxGT("Yenile")                                             // Yenile
#define MSG_WATCH                           _UxGT("Bilgi Ekran璋�")                                       // Bilgi Ekran璋�
#define MSG_PREPARE                         _UxGT("Haz璋媟l璋媖")                                           // Haz璋媟l璋媖
#define MSG_TUNE                            _UxGT("Ayar")                                               // Ayar
#define MSG_PAUSE_PRINT                     _UxGT("Duraklat")                                           // Duraklat
#define MSG_RESUME_PRINT                    _UxGT("S鐪塺d鐪塺")                                             // S鐪塺d鐪塺
#define MSG_STOP_PRINT                      _UxGT("Durdur")                                             // Durdur
#define MSG_CARD_MENU                       _UxGT("SD den Yazd璋媟")                                      // SD den Yazd璋媟
#define MSG_NO_CARD                         _UxGT("SD Kart Yok")                                        // SD Kart Yok
#define MSG_DWELL                           _UxGT("Uyku...")                                            // Uyku...
#define MSG_USERWAIT                        _UxGT("Operat鏋歳 bekleniyor...")                             // Operat鏋歳 bekleniyor...
#define MSG_RESUMING                        _UxGT("Bask璋� S鐪塺d鐪塺鐪塴鐪墆or")                                 // Bask璋� S鐪塺d鐪塺鐪塴鐪墆or
#define MSG_PRINT_ABORTED                   _UxGT("Bask璋� Durduruldu")                                   // Bask璋� Durduruldu
#define MSG_NO_MOVE                         _UxGT("闄岃墽lem yok.")                                         // 闄岃墽lem yok.
#define MSG_KILLED                          _UxGT("Kilitlendi. ")                                       // Kilitlendi.
#define MSG_STOPPED                         _UxGT("Durdu. ")                                            // Durdu.
#define MSG_CONTROL_RETRACT                 _UxGT("Geri 鑴焑k mm")                                        // Geri 鑴焑k mm
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Swap Re.mm")                                         // Swap Re.mm
#define MSG_CONTROL_RETRACTF                _UxGT("Geri 鑴焑kme  V")                                      // Geri 鑴焑kme V
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")                                             // Hop mm
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")                                           // UnRet mm
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")                                         // S UnRetmm
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")                                           // UnRet V
#define MSG_AUTORETRACT                     _UxGT("AutoRetr.")                                          // AutoRetr.
#define MSG_FILAMENTCHANGE                  _UxGT("Filaman De鑷抜鑹ir")                                   // Filaman De鑷抜鑹ir
#define MSG_INIT_SDCARD                     _UxGT("Init. SD")                                           // Init. SD
#define MSG_CNG_SDCARD                      _UxGT("SD De鑷抜鑹ir")                                        // SD De鑷抜鑹ir
#define MSG_ZPROBE_OUT                      _UxGT("Z Prob A鑾借皨k. Tabla")                                 // Z Prob A鑾借皨k. Tabla
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")                                  // BLTouch Self-Test
#define MSG_BLTOUCH_RESET                   _UxGT("S璋媐璋媟la BLTouch")                                    // S璋媐璋媟la BLTouch
#define MSG_HOME                            _UxGT("S璋媐璋媟la")                                            // S璋媐璋媟la
#define MSG_FIRST                           _UxGT("鏋歯ce")                                               // 鑴皀ce
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z Offset")                                           // Z Offset
#define MSG_BABYSTEP_X                      _UxGT("Miniad璋媘 X")                                         // Miniad璋媘 X
#define MSG_BABYSTEP_Y                      _UxGT("Miniad璋媘 Y")                                         // Miniad璋媘 Y
#define MSG_BABYSTEP_Z                      _UxGT("Miniad璋媘 Z")                                         // Miniad璋媘 Z
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop iptal")                                      // Endstop iptal
#define MSG_HEATING_FAILED_LCD              _UxGT("Is璋媙ma ba鑹r璋媠璋媧")                                   // Is璋媙ma ba鑹r璋媠璋媧
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Hata: Ge鑾絜rsiz S璋媍akl璋媖")                            // Hata: Ge鑾絜rsiz S璋媍akl璋媖
#define MSG_THERMAL_RUNAWAY                 _UxGT("TERMAL PROBLEM")                                     // TERMAL PROBLEM
#define MSG_ERR_MAXTEMP                     _UxGT("Hata: MAXSICAKLIK")                                  // Hata: MAXSICAKLIK
#define MSG_ERR_MINTEMP                     _UxGT("Hata: MINSICAKLIK")                                  // Hata: MINSICAKLIK
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Hata: MAXSIC. TABLA")                                // Hata: MAXSIC. TABLA
#define MSG_ERR_MINTEMP_BED                 _UxGT("Hata: MINSIC. TABLA")                                // Hata: MINSIC. TABLA
#define MSG_ERR_Z_HOMING                    _UxGT("G28 Z Yap璋媗amaz")                                    // G28 Z Yap璋媗amaz
#define MSG_HALTED                          _UxGT("YAZICI DURDURULDU")                                  // YAZICI DURDURULDU
#define MSG_PLEASE_RESET                    _UxGT("L鐪塼fen resetleyin")                                  // L鐪塼fen resetleyin
#define MSG_SHORT_DAY                       _UxGT("G") // One character only                            // G
#define MSG_SHORT_HOUR                      _UxGT("S") // One character only                            // S
#define MSG_SHORT_MINUTE                    _UxGT("D") // One character only                            // D
#define MSG_HEATING                         _UxGT("Is璋媙璋媦or...")                                        // Is璋媙璋媦or...
#define MSG_HEATING_COMPLETE                _UxGT("Is璋媙ma tamam.")                                      // Is璋媙ma tamam.
#define MSG_BED_HEATING                     _UxGT("Tabla Is璋媙璋媦or.")                                    // Tabla Is璋媙璋媦or.
#define MSG_BED_DONE                        _UxGT("Tabla haz璋媟.")                                       // Tabla haz璋媟.
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta Kalibrasyonu")                                 // Delta Kalibrasyonu
#define MSG_DELTA_CALIBRATE_X               _UxGT("Ayarla X")                                           // Ayarla X
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Ayarla Y")                                           // Ayarla Y
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Ayarla Z")                                           // Ayarla Z
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Ayarla Merkez")                                      // Ayarla Merkez
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Oto Kalibrasyon")                                    // Oto Kalibrasyon
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Delta Y鐪塳. Ayarla")                                  // Delta Y鐪塳. Ayarla
#define MSG_INFO_MENU                       _UxGT("Yaz璋媍璋� Hakk璋媙da")                                    // Yaz璋媍璋� Hakk璋媙da
#define MSG_INFO_PRINTER_MENU               _UxGT("Yaz璋媍璋� Bilgisi")                                     // Yaz璋媍璋� Bilgisi
#define MSG_INFO_STATS_MENU                 _UxGT("闄宻tatistikler")                                      // 闄宻tatistikler
#define MSG_INFO_BOARD_MENU                 _UxGT("Kontrol鏋歳 Bilgisi")                                  // Kontrol Bilgisi
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termist鏋歳ler")                                       // Termist鏋歳ler
#define MSG_INFO_EXTRUDERS                  _UxGT("Ekstruderler")                                       // Ekstruderler
#define MSG_INFO_BAUDRATE                   _UxGT("闄宭eti鑹m H璋媧璋�")                                      // 闄宭eti鑹m H璋媧璋�
#define MSG_INFO_PROTOCOL                   _UxGT("Protokol")                                           // Protokol
#define MSG_CASE_LIGHT                      _UxGT("Ayd璋媙latmay璋�")                                       // Ayd璋媙latmay璋� A鑾�

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Bask璋� Say璋媠璋�")                                       // Bask璋� Say璋媠璋�
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Tamamlanan")                                         // Tamamlanan
  #define MSG_INFO_PRINT_TIME               _UxGT("Toplam Bask璋� S鐪塺esi")                                // Toplam Bask璋� S鐪塺esi
  #define MSG_INFO_PRINT_LONGEST            _UxGT("En Uzun Bask璋� S鐪塺esi")                               // En Uzun Bask璋� S鐪塺esi
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Toplam Filaman")                                     // Toplam Filaman
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Bask璋�")                                              // Bask璋�
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Tamamlanan")                                         // Tamamlanan
  #define MSG_INFO_PRINT_TIME               _UxGT("S鐪塺e")                                               // S鐪塺e
  #define MSG_INFO_PRINT_LONGEST            _UxGT("En Uzun")                                            // En Uzun
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Filaman")                                            // Filaman
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Min S璋媍.")                                           // Min S璋媍ak.
#define MSG_INFO_MAX_TEMP                   _UxGT("Max S璋媍.")                                           // Max S璋媍ak.
#define MSG_INFO_PSU                        _UxGT("G鐪夎幗 Kayna鑷掕皨")                                        // G鐪夎幗 Kayna鑷掕皨

#define MSG_DRIVE_STRENGTH                  _UxGT("S鐪塺鐪塩鐪� G鐪塩鐪�")                                        // S鐪塺鐪塩鐪� G鐪塩鐪�
#define MSG_DAC_PERCENT                     _UxGT("S鐪塺鐪塩鐪� %")                                           // S鐪塺鐪塩鐪� %
#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("Se鑾絜nekler:")                                        // Se鑾絜nekler:
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Daha Ak璋媡")                                          // Daha Ak璋媡
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Bask璋媦璋� s鐪塺d鐪塺")                                     // Bask璋媦璋� s鐪塺d鐪塺
#define MSG_FILAMENT_CHANGE_MINTEMP         _UxGT("Min. S璋媍akl璋媖")                                      // Min. S璋媍akl璋媖:
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Noz鐪塴: ")                                          //   Noz鐪塴:

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Ba鑹ama bekleniyor")                               // Ba鑹ama bekleniyor
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("filaman璋媙")                                        // filaman璋媙
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("de鑷抜鑹mi")                                         // de鑷抜鑹mi
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Bekleniyor")                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("filaman璋媙 鑾借皨kmas璋�")                                // filaman璋媙 鑾借皨kmas璋�
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Filaman璋� y鐪塳le")                                   // Filaman璋� y鐪塳le
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("ve devam i鑾絠n")                                    // ve devam i鑾絠n
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("tu鑹 bas...")                                      // tu鑹 bas...
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Noz鐪塴鐪� Is璋媡mak i鑾絠n")                              // Noz鐪塴鐪� Is璋媡mak i鑾絠n
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("Butona Bas.")                                      // Butona Bas.
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Noz鐪塴 Is璋媙璋媦or")                                   // Noz鐪塴 Is璋媙璋媦or
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("L鐪塼fen Bekleyin...")                               // L鐪塼fen Bekleyin...
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Bekleniyor")                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("filaman璋媙 y鐪塳lenmesi")                             // filaman璋媙 y鐪塳lenmesi
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Bekleniyor")                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("filaman akmas璋�")                                   // filaman akmas璋�
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Bask璋媙璋媙 s鐪塺d鐪塺鐪塴mesini")                          // Bask璋媙璋媙 s鐪塺d鐪塺鐪塴mesini
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("bekle")                                            // bekle
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("L鐪塼fen bekleyiniz...")                             // L鐪塼fen bekleyiniz...
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("鑴熻皨kart璋媗璋媦or...")                                  // 鑴熻皨kart璋媗璋媦or...
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Y鐪塳le ve bas")                                     // Y鐪塳le ve bas
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Y鐪塳l鐪墆or...")                                      // Y鐪塳l鐪墆or...
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Ak璋媡璋媗璋媦or...")                                    // Ak璋媡璋媗璋媦or...
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("S鐪塺d鐪塺鐪塴鐪墆or...")                                  // S鐪塺d鐪塺鐪塴鐪墆or...
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_TR_H


