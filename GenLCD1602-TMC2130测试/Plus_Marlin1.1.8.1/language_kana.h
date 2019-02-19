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
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#ifndef LANGUAGE_KANA_H
#define LANGUAGE_KANA_H

// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_KANA

// 閻楀洣鍒掗崥宥堛�冪粈鍝勭暰缂囷拷
#define WELCOME_MSG                         MACHINE_NAME " ready."
#define MSG_SD_INSERTED                     "\xb6\xb0\xc4\xde\xb6\xde\xbf\xb3\xc6\xad\xb3\xbb\xda\xcf\xbc\xc0" // "閿濊妗ㄩ敒鍕剁犯閿濊绶搁敐鍖″尃閿炲棴姹熼敐绛逛氦閿炴熬绶╅敐纭风窔" ("Card inserted")
#define MSG_SD_REMOVED                      "\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"                     // "閿濊妗ㄩ敒鍕剁犯閿濊绶搁敐鎲嬬凡閿炲骏楠勯敒锟�" ("Card removed")
#define MSG_LCD_ENDSTOPS                    "Endstops"                                                         // Max length 8 characters
#define MSG_MAIN                            "\xd2\xb2\xdd"                                                     // "閿炴帪璁查敒锟�" ("Main")
#define MSG_AUTOSTART                       "\xbc\xde\xc4\xde\xb3\xb6\xb2\xbc"                                 // "閿濈》绶搁敒鍕剁犯閿濈钑夐敐璇ч儕" ("Autostart")
#define MSG_DISABLE_STEPPERS                "\xd3\xb0\xc0\xb0\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"             // "閿炴搫妗ㄩ敒锟介敐甯窛閿炵儑绶烽敐鐧哥犯閿烇拷 閿濈绶�" ("Disable steppers")
#define MSG_DEBUG_MENU                      "\xc3\xde\xca\xde\xaf\xb8\xde\xd2\xc6\xad\xb0"                     // "閿炲喛绶搁敒濠忕犯閿濐垽绀侀敒鐑囩番閿炲棴姹熼敐锟�" ("Debug Menu")
#define MSG_PROGRESS_BAR_TEST               "\xcc\xdf\xdb\xb8\xde\xda\xbd\xca\xde\xb0\x20\xc3\xbd\xc4"         // "閿炲矉绶归敒娑崇閿炵儑绶撮敐鏂ょ筏閿炵儑妗� 閿炲喛娴囬敒锟�" ("Progress Bar Test")
#define MSG_AUTO_HOME                       "\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                                 // "閿濈櫢绶搁敒婵撶窛閿炴繐绶﹂敐顖ゆ" ("Auto home")
#define MSG_AUTO_HOME_X                     "X\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "X閿濈》绶搁敐锟� 閿濈櫢绶搁敒婵撶窛閿炴繐绶﹂敐顖ゆ" ("Home X")
#define MSG_AUTO_HOME_Y                     "Y\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "Y閿濈》绶搁敐锟� 閿濈櫢绶搁敒婵撶窛閿炴繐绶﹂敐顖ゆ" ("Home Y")
#define MSG_AUTO_HOME_Z                     "Z\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "Z閿濈》绶搁敐锟� 閿濈櫢绶搁敒婵撶窛閿炴繐绶﹂敐顖ゆ" ("Home Z")
#define MSG_LEVEL_BED_HOMING                "\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7\xc1\xad\xb3"                     // "閿濈櫢绶搁敒婵撶窛閿炴繐绶﹂敐顖ゆ閿炰緤姹熼敐锟�" ("Homing XYZ")
#define MSG_LEVEL_BED_WAITING               "\xda\xcd\xde\xd8\xdd\xb8\xde\xb6\xb2\xbc"                         // "閿炴熬绶ч敒鐑囩凡閿炴繐绀侀敒鐑囪晧閿濊閮�" ("Click to Begin")
#define MSG_LEVEL_BED_NEXT_POINT            "\xc2\xb7\xde\xc9\xbf\xb8\xc3\xb2\xc3\xdd\xcd"                     // "閿炲偊妞掗敒鐑囩罚閿濆尅绀侀敒鍐胯閿炲喛绶烽敒锟�" ("Next Point")
#define MSG_LEVEL_BED_DONE                  "\xda\xcd\xde\xd8\xdd\xb8\xde\xb6\xdd\xd8\xae\xb3"                 // "閿炴熬绶ч敒鐑囩凡閿炴繐绀侀敒鐑囪晧閿炴繐绶查敐顕嗗尃" ("Leveling Done!")
#define MSG_SET_HOME_OFFSETS                "\xb7\xbc\xde\xad\xdd\xb5\xcc\xbe\xaf\xc4\xbe\xaf\xc3\xb2"         // "閿濆嚖閮婇敒鐑囨睙閿炴繐闄嶉敒宀嬮獎閿濐垽绶為敐鎾呰拫閿炲喛璁�" ("Set home offsets")
#define MSG_HOME_OFFSETS_APPLIED            "\xb5\xcc\xbe\xaf\xc4\xb6\xde\xc3\xb7\xd6\xb3\xbb\xda\xcf\xbc\xc0" // "閿濈绶﹂敐鎾呰拫閿炲嫸钑夐敒鐑囩窛閿濆嚖绶伴敐绛逛氦閿炴熬绶╅敐纭风窔" ("Offsets applied")
#define MSG_SET_ORIGIN                      "\xb7\xbc\xde\xad\xdd\xbe\xaf\xc4"                                 // "閿濆嚖閮婇敒鐑囨睙閿炴繐楠勯敐顖ょ窞" ("Set origin")
#define MSG_PREHEAT_1                       "PLA \xd6\xc8\xc2"                                                 // "PLA 閿炴牭绶㈤敒锟�" ("Preheat PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   "PLA \xbd\xcd\xde\xc3\xd6\xc8\xc2"                                 // "PLA 閿濇枻绶ч敒鐑囩窛閿炴牭绶㈤敒锟�" (" All")
#define MSG_PREHEAT_1_BEDONLY               "PLA \xcd\xde\xaf\xc4\xde\xd6\xc8\xc2"                             // "PLA 閿炲稄绶搁敐顖ょ窞閿炵儑绶伴敒鍫窚" (" Bed")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "\xbe\xaf\xc3\xb2"                                   // "閿濇拝钂嬮敒鍐胯" (" conf")
#define MSG_PREHEAT_2                       "ABS \xd6\xc8\xc2"                                                 // "ABS 閿炴牭绶㈤敒锟�" ("Preheat ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   "ABS \xbd\xcd\xde\xc3\xd6\xc8\xc2"                                 // "ABS 閿濇枻绶ч敒鐑囩窛閿炴牭绶㈤敒锟�" (" All")
#define MSG_PREHEAT_2_BEDONLY               "ABS \xcd\xde\xaf\xc4\xde\xd6\xc8\xc2"                             // "ABS 閿炲稄绶搁敐顖ょ窞閿炵儑绶伴敒鍫窚" (" Bed")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "\xbe\xaf\xc3\xb2"                                   // "閿濇拝钂嬮敒鍐胯" (" conf")
#define MSG_COOLDOWN                        "\xb6\xc8\xc2\xc3\xb2\xbc"                                         // "閿濊绶㈤敒鍌︾窛閿濊閮�" ("Cooldown")
#define MSG_SWITCH_PS_ON                    "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xdd"                             // "閿炲喛绶搁敒婵撶劍閿炵儑绶� 閿濈绶�" ("Switch power on")
#define MSG_SWITCH_PS_OFF                   "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"                             // "閿炲喛绶搁敒婵撶劍閿炵儑绶� 閿濈绶�" ("Switch power off")
#define MSG_EXTRUDE                         "\xb5\xbc\xc0\xde\xbc"                                             // "閿濈閮婇敒锟介敒鐑囬儕" ("Extrude")
#define MSG_RETRACT                         "\xcb\xb7\xba\xd0\xbe\xaf\xc3\xb2"                                 // "閿炲妞掗敐鐚寸藩閿濇拝钂嬮敒鍐胯" ("Retract")
#define MSG_MOVE_AXIS                       "\xbc\xde\xb8\xb2\xc4\xde\xb3"                                     // "閿濈》绶搁敐闈╄閿炲嫸绶搁敐锟�" ("Move axis")
#define MSG_BED_LEVELING                    "\xcd\xde\xaf\xc4\xde\xda\xcd\xde\xd8\xdd\xb8\xde"                 // "閿炲稄绶搁敐顖ょ窞閿炵儑绶撮敒宥忕犯閿炴﹫绶烽敐闈╃犯" ("Bed Leveling")
#define MSG_LEVEL_BED                       "\xcd\xde\xaf\xc4\xde\xda\xcd\xde\xd8\xdd\xb8\xde"                 // "閿炲稄绶搁敐顖ょ窞閿炵儑绶撮敒宥忕犯閿炴﹫绶烽敐闈╃犯" ("Level bed")
#define MSG_MOVING                          "\xb2\xc4\xde\xb3\xc1\xad\xb3"                                     // "閿濊绶為敒鐑囧尃閿炰緤姹熼敐锟�" ("Moving...")
#define MSG_FREE_XY                         "XY\xbc\xde\xb8\x20\xb6\xb2\xce\xb3"                               // "XY閿濈》绶搁敐锟� 閿濊璁查敒搴尃" ("Free XY")
#define MSG_MOVE_X                          "X\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "X閿濈》绶搁敐锟� 閿濊绶為敒鐑囧尃" ("Move X")
#define MSG_MOVE_Y                          "Y\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "Y閿濈》绶搁敐锟� 閿濊绶為敒鐑囧尃" ("Move Y")
#define MSG_MOVE_Z                          "Z\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "Z閿濈》绶搁敐锟� 閿濊绶為敒鐑囧尃" ("Move Z")
#define MSG_MOVE_E                          "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0"                             // "閿濊揪绀侀敐鏂ょ窞閿炴瑱妗ㄩ敒锟介敒鐑囨〃" ("Extruder")
#define MSG_MOVE_01MM                       "0.1mm \xb2\xc4\xde\xb3"                                           // "0.1mm 閿濊绶為敒鐑囧尃" ("Move 0.1mm")
#define MSG_MOVE_1MM                        "  1mm \xb2\xc4\xde\xb3"                                           // "  1mm 閿濊绶為敒鐑囧尃" ("Move 1mm")
#define MSG_MOVE_10MM                       " 10mm \xb2\xc4\xde\xb3"                                           // " 10mm 閿濊绶為敒鐑囧尃" ("Move 10mm")
#define MSG_SPEED                           "\xbf\xb8\xc4\xde"                                                 // "閿濆尅绀侀敒鍕剁犯" ("Speed")
#define MSG_BED_Z                           "Z\xb5\xcc\xbe\xaf\xc4"                                            // "Z閿濈绶﹂敐鎾呰拫閿烇拷" ("Bed Z")
#define MSG_NOZZLE                          "\xc9\xbd\xde\xd9"                                                 // "閿炲娴囬敒鐑囩烦" ("Nozzle")
#define MSG_BED                             "\xcd\xde\xaf\xc4\xde"                                             // "閿炲稄绶搁敐顖ょ窞閿烇拷" ("Bed")
#define MSG_FAN_SPEED                       "\xcc\xa7\xdd\xbf\xb8\xc4\xde"                                     // "閿炲矉娑ч敒婵撳▏閿濋潻绶為敒锟�" ("Fan speed")
#define MSG_FLOW                            "\xc4\xbc\xad\xc2\xd8\xae\xb3"                                     // "閿炲嫸閮婇敐顓ㄧ窚閿炴﹫鐤嗛敐锟�" ("Flow")
#define MSG_CONTROL                         "\xbe\xb2\xb7\xde\xae"                                             // "閿濇拝璁查敐鍑ょ犯閿濓拷" ("Control")
#define MSG_MIN                             LCD_STR_THERMOMETER " \xbb\xb2\xc3\xb2"                            // " 閿濅紮璁查敒鍐胯" (" Min")
#define MSG_MAX                             LCD_STR_THERMOMETER " \xbb\xb2\xba\xb3"                            // " 閿濅紮璁查敐鐚村尃" (" Max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER " \xcc\xa7\xb8\xc0\xb0"                        // " 閿炲矉娑ч敐闈╃窔閿濓拷" (" Fact")
#if LCD_WIDTH >= 20
  #define MSG_AUTOTEMP                      "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde\xbe\xb2\xb7\xde\xae"         // "閿濈》绶搁敒鍕剁犯閿濈闄嶉敒婵撶窞閿炵儑楠勯敐璇ф閿炵儑鐤�" ("Autotemp")
#else
  #define MSG_AUTOTEMP                      "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde"                             // "閿濈》绶搁敒鍕剁犯閿濈闄嶉敒婵撶窞閿烇拷" ("Autotemp")
#endif
#define MSG_ON                              "\xb5\xdd "                                                        // "閿濈绶� " ("On ")
#define MSG_OFF                             "\xb5\xcc "                                                        // "閿濈绶� " ("Off")
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "\xbe\xdd\xc0\xb8"                                                 // "閿濇拝绶烽敒锟介敐锟�" ("Select")
#if LCD_WIDTH >= 20
  #define MSG_ACC                           "\xb6\xbf\xb8\xc4\xde mm/s2"                                       // "閿濊濞囬敐闈╃窞閿烇拷 mm/s2" ("Accel")
  #define MSG_VX_JERK                       "X\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "X閿濈》绶搁敐锟� 閿炴棑绀侀敒鍕剁犯 mm/s" ("Vx-jerk")
  #define MSG_VY_JERK                       "Y\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Y閿濈》绶搁敐锟� 閿炴棑绀侀敒鍕剁犯 mm/s" ("Vy-jerk")
  #define MSG_VZ_JERK                       "Z\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Z閿濈》绶搁敐锟� 閿炴棑绀侀敒鍕剁犯 mm/s" ("Vz-jerk")
  #define MSG_VE_JERK                       "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0\x20\xd4\xb8\xc4\xde"         // "閿濊揪绀侀敐鏂ょ窞閿炴瑱妗ㄩ敒锟介敒鐑囨〃 閿炴棑绀侀敒鍕剁犯" ("Ve-jerk")
  #define MSG_VMAX                          "\xbb\xb2\xc0\xde\xb2\xb5\xb8\xd8\xbf\xb8\xc4\xde "                // "閿濅紮璁查敒锟介敒鐑囪閿濈绀侀敒姗堝▏閿濋潻绶為敒锟� " ("Vmax ")
  #define MSG_VMIN                          "\xbb\xb2\xbc\xae\xb3\xb5\xb8\xd8\xbf\xb8\xc4\xde"                 // "閿濅紮璁查敐纭风枂閿濈闄嶉敐闈╃凡閿濆尅绀侀敒鍕剁犯" ("Vmin")
  #define MSG_VTRAV_MIN                     "\xbb\xb2\xbc\xae\xb3\xb2\xc4\xde\xb3\xbf\xb8\xc4\xde"             // "閿濅紮璁查敐纭风枂閿濈璁查敒鍕剁犯閿濈濞囬敐闈╃窞閿烇拷" ("VTrav min")
  #define MSG_AMAX                          "\xbb\xb2\xc0\xde\xb2\xb6\xbf\xb8\xc4\xde "                        // "閿濅紮璁查敒锟介敒鐑囪閿濊濞囬敐闈╃窞閿烇拷 " ("Amax ")
#else
  #define MSG_ACC                           "\xb6\xbf\xb8\xc4\xde"                                             // "閿濊濞囬敐闈╃窞閿烇拷" ("Accel")
  #define MSG_VX_JERK                       "X\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"                                // "XY閿濈》绶搁敐锟� 閿炴棑绀侀敒鍕剁犯" ("Vx-jerk")
  #define MSG_VY_JERK                       "Y\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"                                // "XY閿濈》绶搁敐锟� 閿炴棑绀侀敒鍕剁犯" ("Vy-jerk")
  #define MSG_VZ_JERK                       "Z\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"                                // "Z閿濈》绶搁敐锟� 閿炴棑绀侀敒鍕剁犯" ("Vz-jerk")
  #define MSG_VE_JERK                       "E\x20\xd4\xb8\xc4\xde"                                            // "E 閿炴棑绀侀敒鍕剁犯" ("Ve-jerk")
  #define MSG_VMAX                          "max\xb5\xb8\xd8\xbf\xb8\xc4\xde "                                 // "max閿濈绀侀敒姗堝▏閿濋潻绶為敒锟�" ("Vmax ")
  #define MSG_VMIN                          "min\xb5\xb8\xd8\xbf\xb8\xc4\xde"                                  // "min閿濈绀侀敒姗堝▏閿濋潻绶為敒锟�" ("Vmin")
  #define MSG_VTRAV_MIN                     "min\xb2\xc4\xde\xb3\xbf\xb8\xc4\xde"                              // "min閿濊绶為敒鐑囧尃閿濆尅绀侀敒鍕剁犯" ("VTrav min")
  #define MSG_AMAX                          "max\xb6\xbf\xb8 "                                                 // "max閿濊濞囬敐锟� " ("Amax ")
#endif
#define MSG_A_RETRACT                       "\xcb\xb7\xba\xd0\xb6\xbf\xb8\xc4\xde"                             // "閿炲妞掗敐鐚寸藩閿濊濞囬敐闈╃窞閿烇拷" ("A-retract")
#define MSG_A_TRAVEL                        "\xb2\xc4\xde\xb3\xb6\xbf\xb8\xc4\xde"                             // "閿濊绶為敒鐑囧尃閿濊濞囬敐闈╃窞閿烇拷" ("A-travel")
#if LCD_WIDTH >= 20
  #define MSG_STEPS_PER_MM                    "Steps/mm"
  #define MSG_XSTEPS                          "Xsteps/mm"
  #define MSG_YSTEPS                          "Ysteps/mm"
  #define MSG_ZSTEPS                          "Zsteps/mm"
  #define MSG_ESTEPS                          "Esteps/mm"
  #define MSG_E1STEPS                         "E1steps/mm"
  #define MSG_E2STEPS                         "E2steps/mm"
  #define MSG_E3STEPS                         "E3steps/mm"
  #define MSG_E4STEPS                         "E4steps/mm"
  #define MSG_E5STEPS                         "E5steps/mm"
#else
  #define MSG_STEPS_PER_MM                    "Steps"
  #define MSG_XSTEPS                          "Xsteps"
  #define MSG_YSTEPS                          "Ysteps"
  #define MSG_ZSTEPS                          "Zsteps"
  #define MSG_ESTEPS                          "Esteps"
  #define MSG_E1STEPS                         "E1steps"
  #define MSG_E2STEPS                         "E2steps"
  #define MSG_E3STEPS                         "E3steps"
  #define MSG_E4STEPS                         "E4steps"
  #define MSG_E5STEPS                         "E5steps"
#endif
#define MSG_TEMPERATURE                     "\xb5\xdd\xc4\xde"                                                 // "閿濈绶烽敒鍕剁犯" ("Temperature")
#define MSG_MOTION                          "\xb3\xba\xde\xb7\xbe\xaf\xc3\xb2"                                 // "閿濈鑳堕敒鐑囨閿濇拝钂嬮敒鍐胯" ("Motion")
#define MSG_FILAMENT                        "\xcc\xa8\xd7\xd2\xdd\xc4"                                         // "閿炲矉寤洪敒妤嬬番閿炴繐绶�" ("Filament")
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#if LCD_WIDTH >= 20
  #define MSG_FILAMENT_DIAM                 "\xcc\xa8\xd7\xd2\xdd\xc4\xc1\xae\xaf\xb9\xb2"                     // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敒渚婄枂閿濐垽鐒﹂敐锟�" ("Fil. Dia.")
#else
  #define MSG_FILAMENT_DIAM                 "\xcc\xa8\xd7\xd2\xdd\xc4\xb9\xb2"                                 // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐鐧歌" ("Fil. Dia.")
#endif
#define MSG_CONTRAST                        "LCD\xba\xdd\xc4\xd7\xbd\xc4"                                      // "LCD閿濈尨绶烽敒鍕剁繁閿濇枻绶�" ("LCD contrast")
#define MSG_STORE_EEPROM                    "\xd2\xd3\xd8\xcd\xb6\xb8\xc9\xb3"                                 // "閿炴帪绶敒姗堢阀閿濊绀侀敒澶涘尃" ("Store memory")
#define MSG_LOAD_EEPROM                     "\xd2\xd3\xd8\xb6\xd7\xd6\xd0\xba\xd0"                             // "閿炴帪绶敒姗堣晧閿炴绶伴敒鎰惰兌閿烇拷" ("Load memory")
#define MSG_RESTORE_FAILSAFE                "\xbe\xaf\xc3\xb2\xd8\xbe\xaf\xc4"                                 // "閿濇拝钂嬮敒鍐胯閿炴﹫楠勯敐顖ょ窞" ("Restore failsafe")
#define MSG_REFRESH                         "\xd8\xcc\xda\xaf\xbc\xad"                                         // "閿炴﹫绶﹂敒姘捐拫閿濈》姹�" ("Refresh")
#define MSG_WATCH                           "\xbc\xde\xae\xb3\xce\xb3\xb6\xde\xd2\xdd"                         // "閿濈》绶搁敐顕嗗尃閿炲函鍖犻敐璁圭犯閿炴帪绶�" ("Info screen")
#define MSG_PREPARE                         "\xbc\xde\xad\xdd\xcb\xde\xbe\xaf\xc3\xb2"                         // "閿濈》绶搁敐顓ㄧ贩閿炲绶搁敐鎾呰拫閿炲喛璁�" ("Prepare")
#define MSG_TUNE                            "\xc1\xae\xb3\xbe\xb2"                                             // "閿炰緤鐤嗛敐绛归獎閿濓拷" ("Tune")
#define MSG_PAUSE_PRINT                     "\xb2\xc1\xbc\xde\xc3\xb2\xbc"                                     // "閿濊绶涢敐纭风犯閿炲喛璁查敐锟�" ("Pause print")
#define MSG_RESUME_PRINT                    "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                             // "閿炲矉绶归敒姗堢贩閿炲嫸浜ら敐璇ц晧閿濓拷" ("Resume print")
#define MSG_STOP_PRINT                      "\xcc\xdf\xd8\xdd\xc4\xc3\xb2\xbc"                                 // "閿炲矉绶归敒姗堢贩閿炲嫸绶濋敐璇ч儕" ("Stop print")
#define MSG_CARD_MENU                       "SD\xb6\xb0\xc4\xde\xb6\xd7\xcc\xdf\xd8\xdd\xc4"                   // "SD閿濊妗ㄩ敒鍕剁犯閿濊绶遍敒宀嬬饭閿炴﹫绶烽敒锟�" ("Print from SD")
#define MSG_NO_CARD                         "SD\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"                   // "SD閿濊妗ㄩ敒鍕剁犯閿濊绶搁敐鎲嬬凡閿炲骏楠勯敒锟�" ("No SD card")
#define MSG_DWELL                           "\xb7\xad\xb3\xbc"                                                 // "閿濆嚖姹熼敐绛归儕" ("Sleep...")
#define MSG_USERWAIT                        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "閿濈》绶ら敒鐑囩繁閿濋潻闄嶉敒蹇ョ窙閿濋潻绶氶敒鐑囦氦閿濓拷" ("Wait for user...")
#define MSG_RESUMING                        "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                             // "閿炲矉绶归敒姗堢贩閿炲嫸浜ら敐璇ц晧閿濓拷" ("Resuming print")
#define MSG_PRINT_ABORTED                   "\xcc\xdf\xd8\xdd\xc4\xb6\xde\xc1\xad\xb3\xbc\xbb\xda\xcf\xbc\xc0" // "閿炲矉绶归敒姗堢贩閿炲嫸钑夐敒鐑囩窙閿濐叏鍖犻敐纭蜂氦閿炴熬绶╅敐纭风窔" ("Print aborted")
#define MSG_NO_MOVE                         "\xb3\xba\xde\xb7\xcf\xbe\xdd"                                     // "閿濈鑳堕敒鐑囨閿炲骏楠勯敒锟�" ("No move.")
#define MSG_KILLED                          "\xcb\xbc\xde\xae\xb3\xc3\xb2\xbc"                                 // "閿炲閮婇敒鐑囩枂閿濈绶濋敐璇ч儕" ("KILLED. ")
#define MSG_STOPPED                         "\xc3\xb2\xbc\xbc\xcf\xbc\xc0"                                     // "閿炲喛璁查敐纭烽儕閿炲骏閮婇敒锟�" ("STOPPED. ")
#if LCD_WIDTH >= 20
  #define MSG_CONTROL_RETRACT               "\xcb\xb7\xba\xd0\xd8\xae\xb3 mm"                                  // "閿炲妞掗敐鐚寸藩閿炴﹫鐤嗛敐锟� mm" ("Retract mm")
  #define MSG_CONTROL_RETRACT_SWAP          "\xcb\xb7\xba\xd0\xd8\xae\xb3S mm"                                 // "閿炲妞掗敐鐚寸藩閿炴﹫鐤嗛敐鐮� mm" ("Swap Re.mm")
  #define MSG_CONTROL_RETRACTF              "\xcb\xb7\xba\xd0\xbf\xb8\xc4\xde mm/s"                            // "閿炲妞掗敐鐚寸藩閿濆尅绀侀敒鍕剁犯 mm/s" ("Retract  V")
  #define MSG_CONTROL_RETRACT_ZLIFT         "\xc9\xbd\xde\xd9\xc0\xb2\xcb mm"                                  // "閿炲娴囬敒鐑囩烦閿烇拷閿濊绶� mm" ("Hop mm")
  #define MSG_CONTROL_RETRACT_RECOVER       "\xce\xbc\xae\xb3\xd8\xae\xb3 mm"                                  // "閿炲函閮婇敐顕嗗尃閿炴﹫鐤嗛敐锟� mm" ("UnRet mm")
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP  "\xce\xbc\xae\xb3\xd8\xae\xb3S mm"                                 // "閿炲函閮婇敐顕嗗尃閿炴﹫鐤嗛敐鐮� mm" ("S UnRet mm")
  #define MSG_CONTROL_RETRACT_RECOVERF      "\xce\xbc\xae\xb3\xbf\xb8\xc4\xde mm/s"                            // "閿炲函閮婇敐顕嗗尃閿濆尅绀侀敒鍕剁犯 mm/s" ("UnRet  V")
#else
  #define MSG_CONTROL_RETRACT               "\xcb\xb7\xba\xd0\xd8\xae\xb3"                                     // "閿炲妞掗敐鐚寸藩閿炴﹫鐤嗛敐锟�" ("Retract mm")
  #define MSG_CONTROL_RETRACT_SWAP          "\xcb\xb7\xba\xd0\xd8\xae\xb3S"                                    // "閿炲妞掗敐鐚寸藩閿炴﹫鐤嗛敐鐮�" ("Swap Re.mm")
  #define MSG_CONTROL_RETRACTF              "\xcb\xb7\xba\xd0\xbf\xb8\xc4\xde"                                 // "閿炲妞掗敐鐚寸藩閿濆尅绀侀敒鍕剁犯" ("Retract  V")
  #define MSG_CONTROL_RETRACT_ZLIFT         "\xc9\xbd\xde\xd9\xc0\xb2\xcb"                                     // "閿炲娴囬敒鐑囩烦閿烇拷閿濊绶�" ("Hop mm")
  #define MSG_CONTROL_RETRACT_RECOVER       "\xce\xbc\xae\xb3\xd8\xae\xb3"                                     // "閿炲函閮婇敐顕嗗尃閿炴﹫鐤嗛敐锟�" ("UnRet mm")
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP  "\xce\xbc\xae\xb3\xd8\xae\xb3S"                                    // "閿炲函閮婇敐顕嗗尃閿炴﹫鐤嗛敐鐮�" ("S UnRet mm")
  #define MSG_CONTROL_RETRACT_RECOVERF      "\xce\xbc\xae\xb3\xbf\xb8\xc4\xde"                                 // "閿炲函閮婇敐顕嗗尃閿濆尅绀侀敒鍕剁犯" ("UnRet  V")
#endif
#define MSG_AUTORETRACT                     "\xbc\xde\xc4\xde\xb3\xcb\xb7\xba\xd0"                             // "閿濈》绶搁敒鍕剁犯閿濈绶ラ敐鍑よ兌閿烇拷" ("AutoRetr.")
#define MSG_FILAMENTCHANGE                  "\xcc\xa8\xd7\xd2\xdd\xc4\xba\xb3\xb6\xdd"                         // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐鐚村尃閿濊绶�" ("Change filament")
#define MSG_INIT_SDCARD                     "SD\xb6\xb0\xc4\xde\xbb\xb2\xd6\xd0\xba\xd0"                       // "SD閿濊妗ㄩ敒鍕剁犯閿濅紮璁查敒鏍电藩閿濈尨绶�" ("Init. SD card")
#define MSG_CNG_SDCARD                      "SD\xb6\xb0\xc4\xde\xba\xb3\xb6\xdd"                               // "SD閿濊妗ㄩ敒鍕剁犯閿濈尨鍖犻敐璁圭贩" ("Change SD card")
#define MSG_ZPROBE_OUT                      "Z\xcc\xdf\xdb\xb0\xcc\xde\x20\xcd\xde\xaf\xc4\xde\xb6\xde\xb2"    // "Z閿炲矉绶归敒娑虫〃閿炲矉绶� 閿炲稄绶搁敐顖ょ窞閿炵儑钑夐敒鐑囪" ("Z probe out. bed")
#if LCD_WIDTH >= 20
  #define MSG_BLTOUCH_SELFTEST              "BLTouch \xbc\xde\xba\xbc\xdd\xc0\xde\xdd"                         // "BLTouch 閿濈》绶搁敐鐚撮儕閿炴繐绶氶敒鐑囩贩" ("BLTouch Self-Test")
#else
  #define MSG_BLTOUCH_SELFTEST              "BLTouch \xbe\xd9\xcc\xc3\xbd\xc4"                                 // "BLTouch 閿濇拝绶抽敒宀嬬窛閿濇枻绶�" ("BLTouch Self-Test")
#endif
#define MSG_BLTOUCH_RESET                   "BLTouch \xd8\xbe\xaf\xc4"                                         // "BLTouch 閿炴﹫楠勯敐顖ょ窞" ("Reset BLTouch")
#define MSG_HOME                            "\xbb\xb7\xc6"                                                     // "閿濅紮妞掗敒锟�" ("Home") // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#if LCD_WIDTH >= 20
  #define MSG_FIRST                         "\xa6\xcc\xaf\xb7\xbb\xbe\xc3\xb8\xc0\xde\xbb\xb2"                 // "閿濓讣绶﹂敐顖ゆ閿濅紮楠勯敒鍐跨閿烇拷閿炵儑浜ら敐锟�" ("first")
#else
  #define MSG_FIRST                         "\xa6\xcc\xaf\xb7\xbb\xbe\xd6"                                     // "閿濓讣绶﹂敐顖ゆ閿濅紮楠勯敒锟�" ("first")
#endif
#define MSG_ZPROBE_ZOFFSET                  "Z\xb5\xcc\xbe\xaf\xc4"                                            // "Z閿濈绶﹂敐鎾呰拫閿烇拷" ("Z Offset")
#define MSG_BABYSTEP_X                      "X\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "X閿濈》绶搁敐锟� 閿炲绶搁敒鍕剁犯閿濓拷" ("Babystep X")
#define MSG_BABYSTEP_Y                      "Y\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "Y閿濈》绶搁敐锟� 閿炲绶搁敒鍕剁犯閿濓拷" ("Babystep Y")
#define MSG_BABYSTEP_Z                      "Z\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "Z閿濈》绶搁敐锟� 閿炲绶搁敒鍕剁犯閿濓拷" ("Babystep Z")
#if LCD_WIDTH >= 20
  #define MSG_ENDSTOP_ABORT                 "\xb2\xc4\xde\xb3\xb9\xde\xdd\xb6\xb2\xb9\xdd\xc1\xb7\xc9\xb3"     // "閿濊绶為敒鐑囧尃閿濈櫢绶搁敒婵撹晧閿濊鐒﹂敒婵撶窙閿濆嚖绶ｉ敐锟�" ("Endstop abort")
#else
  #define MSG_ENDSTOP_ABORT                 "\xb2\xc4\xde\xb3\xb9\xde\xdd\xb6\xb2\xb9\xdd\xc1"                 // "閿濊绶為敒鐑囧尃閿濈櫢绶搁敒婵撹晧閿濊鐒﹂敒婵撶窙" ("Endstop abort")
#endif
#define MSG_HEATING_FAILED_LCD              "\xb6\xc8\xc2\xbc\xaf\xca\xdf\xb2"                                 // "閿濊绶㈤敒鍌﹂儕閿濐垽绶ら敒鐕傝" ("Heating failed")
#if LCD_WIDTH >= 20
  #define MSG_ERR_REDUNDANT_TEMP            "\xb4\xd7\xb0:\xbc\xde\xae\xb3\xc1\xae\xb3\xbb\xb0\xd0\xbd\xc0\xb0\xb7\xc9\xb3" // "閿濊揪绶遍敐锟�:閿濈》绶搁敐顕嗗尃閿炰緤鐤嗛敐绛逛氦閿濆府绶敐鏂ょ窔閿濆府妞掗敒澶涘尃" ("Err: REDUNDANT TEMP")
#else
  #define MSG_ERR_REDUNDANT_TEMP            "\xb4\xd7\xb0:\xbc\xde\xae\xb3\xc1\xae\xb3\xbb\xb0\xd0\xbd\xc0"                 // "閿濊揪绶遍敐锟�:閿濈》绶搁敐顕嗗尃閿炰緤鐤嗛敐绛逛氦閿濆府绶敐鏂ょ窔" ("Err: REDUNDANT TEMP")
#endif
#define MSG_THERMAL_RUNAWAY                 "\xc8\xc2\xce\xde\xb3\xbf\xb3"                                                  // "閿炲牞绶滈敒搴犯閿濈濞囬敐锟�" ("THERMAL RUNAWAY")
#define MSG_ERR_MAXTEMP                     "\xb4\xd7\xb0:\xbb\xb2\xba\xb3\xb5\xdd\xc1\xae\xb3\xb6"                         // "閿濊揪绶遍敐锟�:閿濅紮璁查敐鐚村尃閿濈绶烽敒渚婄枂閿濈钑�" ("Err: MAXTEMP")
#define MSG_ERR_MINTEMP                     "\xb4\xd7\xb0:\xbb\xb2\xc3\xb2\xb5\xdd\xd0\xcf\xdd"                             // "閿濊揪绶遍敐锟�:閿濅紮璁查敒鍐胯閿濈绶烽敒鎰剁珐閿烇拷" ("Err: MINTEMP")
#if LCD_WIDTH >= 20
  #define MSG_ERR_MAXTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xba\xb3\xb5\xdd\xc1\xae\xb3\xb6" // "閿濊揪绶遍敐锟�:閿炲稄绶搁敐顖ょ窞閿烇拷 閿濅紮璁查敐鐚村尃閿濈绶烽敒渚婄枂閿濈钑�" ("Err: MAXTEMP BED")
  #define MSG_ERR_MINTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xc3\xb2\xb5\xdd\xd0\xcf\xdd"     // "閿濊揪绶遍敐锟�:閿炲稄绶搁敐顖ょ窞閿烇拷 閿濅紮璁查敒鍐胯閿濈绶烽敒鎰剁珐閿烇拷" ("Err: MINTEMP BED")
#else
  #define MSG_ERR_MAXTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xba\xb3\xb5\xdd"                 // "閿濊揪绶遍敐锟�:閿炲稄绶搁敐顖ょ窞閿烇拷 閿濅紮璁查敐鐚村尃閿濈绶�" ("Err: MAXTEMP BED")
  #define MSG_ERR_MINTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xc3\xb2\xb5\xdd"                 // "閿濊揪绶遍敐锟�:閿炲稄绶搁敐顖ょ窞閿烇拷 閿濅紮璁查敒鍐胯閿濈绶�" ("Err: MINTEMP BED")
#endif
#define MSG_ERR_Z_HOMING                    MSG_HOME " " MSG_X MSG_Y " " MSG_FIRST                             // "閿濅紮妞掗敒锟� XY 閿濓讣绶﹂敐顖ゆ閿濅紮楠勯敒鍐跨閿烇拷閿炵儑浜ら敐锟�" or "閿濅紮妞掗敒锟� XY 閿濓讣绶﹂敐顖ゆ閿濅紮楠勯敒锟�" ("G28 Z Forbidden")
#define MSG_HALTED                          "\xcc\xdf\xd8\xdd\xc0\xb0\xca\xc3\xb2\xbc\xbc\xcf\xbc\xc0"         // "閿炲矉绶归敒姗堢贩閿烇拷閿濆府绶ら敒鍐胯閿濈》閮婇敒蹇ラ儕閿烇拷" ("PRINTER HALTED")
#define MSG_PLEASE_RESET                    "\xd8\xbe\xaf\xc4\xbc\xc3\xb8\xc0\xde\xbb\xb2"                     // "閿炴﹫楠勯敐顖ょ窞閿濈》绶濋敐闈╃窔閿炵儑浜ら敐锟�" ("Please reset")
#define MSG_SHORT_DAY                       "d"                                                                // One character only
#define MSG_SHORT_HOUR                      "h"                                                                // One character only
#define MSG_SHORT_MINUTE                    "m"                                                                // One character only
#define MSG_HEATING                         "\xb6\xc8\xc2\xc1\xad\xb3"                                         // "閿濊绶㈤敒鍌︾窙閿濐叏鍖�" ("Heating...")
#define MSG_HEATING_COMPLETE                "\xb6\xc8\xc2\xb6\xdd\xd8\xae\xb3"                                 // "閿濊绶㈤敒鍌﹁晧閿炴繐绶查敐顕嗗尃" ("Heating done.")
#define MSG_BED_HEATING                     "\xcd\xde\xaf\xc4\xde\x20\xb6\xc8\xc2\xc1\xad\xb3"                 // "閿炲稄绶搁敐顖ょ窞閿烇拷 閿濊绶㈤敒鍌︾窙閿濐叏鍖�" ("Bed Heating.")
#define MSG_BED_DONE                        "\xcd\xde\xaf\xc4\xde\x20\xb6\xc8\xc2\xb6\xdd\xd8\xae\xb3"         // "閿炲稄绶搁敐顖ょ窞閿烇拷 閿濊绶㈤敒鍌﹁晧閿炴繐绶查敐顕嗗尃" ("Bed done.")
#define MSG_DELTA_CALIBRATE                 "\xc3\xde\xd9\xc0\x20\xba\xb3\xbe\xb2"                             // "閿炲喛绶搁敒娆欑窔 閿濈尨鍖犻敐鎾呰" ("Delta Calibration")
#define MSG_DELTA_CALIBRATE_X               "X\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "X閿濈》绶搁敐锟� 閿濈尨鍖犻敐鎾呰" ("Calibrate X")
#define MSG_DELTA_CALIBRATE_Y               "Y\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "Y閿濈》绶搁敐锟� 閿濈尨鍖犻敐鎾呰" ("Calibrate Y")
#define MSG_DELTA_CALIBRATE_Z               "Z\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "Z閿濈》绶搁敐锟� 閿濈尨鍖犻敐鎾呰" ("Calibrate Z")
#define MSG_DELTA_CALIBRATE_CENTER          "\xc1\xad\xb3\xbc\xdd\x20\xba\xb3\xbe\xb2"                         // "閿炰緤姹熼敐绛归儕閿烇拷 閿濈尨鍖犻敐鎾呰" ("Calibrate Center")
#define MSG_INFO_MENU                       "\xba\xc9\xcc\xdf\xd8\xdd\xc0\xb0\xc6\xc2\xb2\xc3"                 // "閿濈尨绶ｉ敒宀嬬饭閿炴﹫绶烽敒锟介敐甯窢閿炲偊璁查敒锟�" ("About Printer")
#define MSG_INFO_PRINTER_MENU               "\xcc\xdf\xd8\xdd\xc0\xb0\xbc\xde\xae\xb3\xce\xb3"                 // "閿炲矉绶归敒姗堢贩閿烇拷閿濆府閮婇敒鐑囩枂閿濈绶ㄩ敐锟�" ("Printer Info")
#define MSG_INFO_STATS_MENU                 "\xcc\xdf\xd8\xdd\xc4\xbc\xde\xae\xb3\xb7\xae\xb3"                 // "閿炲矉绶归敒姗堢贩閿炲嫸閮婇敒鐑囩枂閿濈妞掗敐顕嗗尃" ("Printer Stats")
#define MSG_INFO_BOARD_MENU                 "\xbe\xb2\xb7\xde\xae\xb9\xb2\xbc\xde\xae\xb3\xce\xb3"             // "閿濇拝璁查敐鍑ょ犯閿濐噯鐒﹂敐璇ч儕閿炵儑鐤嗛敐绛圭法閿濓拷" ("Board Info")
#define MSG_INFO_THERMISTOR_MENU            "\xbb\xb0\xd0\xbd\xc0\xb0"                                         // "閿濅紮妗ㄩ敒鎰舵祰閿烇拷閿濓拷" ("Thermistors")
#define MSG_INFO_EXTRUDERS                  "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0\xbd\xb3"                     // "閿濊揪绀侀敐鏂ょ窞閿炴瑱妗ㄩ敒锟介敒鐑囨〃閿濇枻鍖�" ("Extruders")
#define MSG_INFO_BAUDRATE                   "\xce\xde\xb0\xda\xb0\xc4"                                         // "閿炲函绶搁敐甯反閿濆府绶�" ("Baud")
#define MSG_INFO_PROTOCOL                   "\xcc\xdf\xdb\xc4\xba\xd9"                                         // "閿炲矉绶归敒娑崇窞閿濈尨绶�" ("Protocol")
#define MSG_CASE_LIGHT                      "\xb7\xae\xb3\xc0\xb2\xc5\xb2\xbc\xae\xb3\xd2\xb2"                 // "閿濆嚖鐤嗛敐绛圭窔閿濊绶熼敐璇ч儕閿濐噯鍖犻敒鎺炶" ("Case light")
#define MSG_INFO_PRINT_COUNT                "\xcc\xdf\xd8\xdd\xc4\xbd\xb3"                                     // "閿炲矉绶归敒姗堢贩閿炲嫸娴囬敐锟�" ("Print Count")
#define MSG_INFO_COMPLETED_PRINTS           "\xb6\xdd\xd8\xae\xb3\xbd\xb3"                                     // "閿濊绶烽敒姗堢枂閿濈娴囬敐锟�" ("Completed")
#define MSG_INFO_PRINT_TIME                 "\xcc\xdf\xd8\xdd\xc4\xbc\xde\xb6\xdd\xd9\xb2\xb9\xb2"             // "閿炲矉绶归敒姗堢贩閿炲嫸閮婇敒鐑囪晧閿炴繐绶抽敐璇х劍閿濓拷" ("Total print time")
#define MSG_INFO_PRINT_LONGEST              "\xbb\xb2\xc1\xae\xb3\xcc\xdf\xd8\xdd\xc4\xbc\xde\xb6\xdd"         // "閿濅紮璁查敒渚婄枂閿濈绶﹂敒鐕傜凡閿炴繐绶為敐纭风犯閿濊绶�" ("Longest job time")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_FILAMENT           "\xcc\xa8\xd7\xd2\xdd\xc4\xbc\xd6\xb3\xd8\xae\xb3\xd9\xb2\xb9\xb2" // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐纭风钒閿濈绶查敐顕嗗尃閿炴瑱璁查敐鐧歌" ("Extruded total")
#else
  #define MSG_INFO_PRINT_FILAMENT           "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xbc\xd6\xb3\xd8\xae\xb3"         // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐鍖″尃閿濈》绶伴敐绛圭凡閿濐噯鍖�" ("Extruded")
#endif
#define MSG_INFO_MIN_TEMP                   "\xbe\xaf\xc3\xb2\xbb\xb2\xc3\xb2\xb5\xdd"                         // "閿濇拝钂嬮敒鍐胯閿濅紮璁查敒鍐胯閿濈绶�" ("Min Temp")
#define MSG_INFO_MAX_TEMP                   "\xbe\xaf\xc3\xb2\xbb\xb2\xba\xb3\xb5\xdd"                         // "閿濇拝钂嬮敒鍐胯閿濅紮璁查敐鐚村尃閿濈绶�" ("Max Temp")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PSU                      "\xc3\xde\xdd\xb9\xde\xdd\xbc\xad\xcd\xde\xc2"                     // "閿炲喛绶搁敒婵撶劍閿炵儑绶烽敐纭锋睙閿炲稄绶搁敒锟�" ("Power Supply")
#else
  #define MSG_INFO_PSU                      "\xc3\xde\xdd\xb9\xde\xdd"                                         // "閿炲喛绶搁敒婵撶劍閿炵儑绶�" ("Power Supply")
#endif
#define MSG_DRIVE_STRENGTH                  "\xd3\xb0\xc0\xb0\xb8\xc4\xde\xb3\xd8\xae\xb8"                     // "閿炴搫妗ㄩ敒锟介敐甯閿炲嫸绶搁敐绛圭凡閿濐噯绀�" ("Drive Strength")
#if LCD_WIDTH >= 20
  #define MSG_DAC_PERCENT                   "DAC\xbc\xad\xc2\xd8\xae\xb8 %"                                    // "DAC閿濈》姹熼敒鍌︾凡閿濐噯绀� %" ("Driver %")
#else
  #define MSG_DAC_PERCENT                   "DAC\xbc\xad\xc2\xd8\xae\xb8"                                      // "DAC閿濈》姹熼敒鍌︾凡閿濐噯绀�" ("Driver %")
#endif
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EPROM                                                    // "閿炴帪绶敒姗堢阀閿濊绀侀敒澶涘尃" ("DAC EEPROM Write")
#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "\xbb\xd7\xc6\xb5\xbc\xc0\xde\xbd"                                 // "閿濅紮绶遍敒鍡檷閿濈》绶氶敒鐑囨祰" ("Extrude more")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                             // "閿炲矉绶归敒姗堢贩閿炲嫸浜ら敐璇ц晧閿濓拷" ("Resume print")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"                     // "閿濈尨鍖犻敐璁圭贩閿濓讣钑夐敐璇ч儕閿濈》绶╅敐锟�" ("Wait for start")
  #define MSG_FILAMENT_CHANGE_INIT_2        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "閿濈》绶ら敒鐑囩繁閿濋潻闄嶉敒蹇ョ窙閿濋潻绶氶敒鐑囦氦閿濓拷" ("of the filament")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"         // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敒鍥锋閿烇拷閿炵儑閮婇敒渚婃睙閿濓拷" ("Wait for")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "閿濈》绶ら敒鐑囩繁閿濋潻闄嶉敒蹇ョ窙閿濋潻绶氶敒鐑囦氦閿濓拷" ("filament unload")
  #define MSG_FILAMENT_CHANGE_INSERT_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xa6\xbf\xb3\xc6\xad\xb3\xbc,"            // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐锔煎▏閿濈绶犻敐顓ㄥ尃閿濓拷," ("Insert filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2      "\xb8\xd8\xaf\xb8\xbd\xd9\xc4\xbf\xde\xaf\xba\xb3\xbc\xcf\xbd"     // "閿濋潻绶查敐顖ょ閿濇枻绶抽敒鍕跺▏閿炵儑钂嬮敐鐚村尃閿濈》绶╅敐锟�" ("and press button")
  #define MSG_FILAMENT_CHANGE_LOAD_1        "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"             // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐鍖″尃閿炲喛绶烽敒渚婃睙閿濓拷" ("Wait for")
  #define MSG_FILAMENT_CHANGE_LOAD_2        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "閿濈》绶ら敒鐑囩繁閿濋潻闄嶉敒蹇ョ窙閿濋潻绶氶敒鐑囦氦閿濓拷" ("filament load")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "\xcc\xa8\xd7\xd2\xdd\xc4\xb5\xbc\xc0\xde\xbc\xc1\xad\xb3"         // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐纰夐儕閿烇拷閿炵儑閮婇敒渚婃睙閿濓拷" ("Wait for")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2     "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "閿濈》绶ら敒鐑囩繁閿濋潻闄嶉敒蹇ョ窙閿濋潻绶氶敒鐑囦氦閿濓拷" ("filament extrude")
  #define MSG_FILAMENT_CHANGE_RESUME_1      "\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"             // "閿炲矉绶归敒姗堢贩閿炲嫸婧呴敐浼欒閿濊璁查敐纭风珐閿濓拷" ("Wait for print")
  #define MSG_FILAMENT_CHANGE_RESUME_2      "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "閿濈》绶ら敒鐑囩繁閿濋潻闄嶉敒蹇ョ窙閿濋潻绶氶敒鐑囦氦閿濓拷" ("to resume")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"                     // "閿濈尨鍖犻敐璁圭贩閿濓讣钑夐敐璇ч儕閿濈》绶╅敐锟�" ("Please wait...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"         // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敒鍥锋閿烇拷閿炵儑閮婇敒渚婃睙閿濓拷" ("Ejecting...")
  #if LCD_WIDTH >= 20
    #define MSG_FILAMENT_CHANGE_INSERT_1    "\xbf\xb3\xc6\xad\xb3\xbc\x2c\xb8\xd8\xaf\xb8\xbc\xc3\xb8\xc0\xde\xbb\xb2" // "閿濆尅鍖犻敒鍡睙閿濈閮�,閿濋潻绶查敐顖ょ閿濈》绶濋敐闈╃窔閿炵儑浜ら敐锟�" ("Insert and Click")
  #else
    #define MSG_FILAMENT_CHANGE_INSERT_1    "\xbf\xb3\xc6\xad\xb3\xbc\x2c\xb8\xd8\xaf\xb8\xbe\xd6"                     // "閿濆尅鍖犻敒鍡睙閿濈閮�,閿濋潻绶查敐顖ょ閿濇拝绶�" ("Insert and Click")
  #endif
  #define MSG_FILAMENT_CHANGE_LOAD_1        "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"             // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐鍖″尃閿炲喛绶烽敒渚婃睙閿濓拷" ("Loading...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "\xcc\xa8\xd7\xd2\xdd\xc4\xb5\xbc\xc0\xde\xbc\xc1\xad\xb3"         // "閿炲矉寤洪敒妤嬬番閿炴繐绶為敐纰夐儕閿烇拷閿炵儑閮婇敒渚婃睙閿濓拷" ("Extruding...")
  #define MSG_FILAMENT_CHANGE_RESUME_1      "\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"             // "閿炲矉绶归敒姗堢贩閿炲嫸婧呴敐浼欒閿濊璁查敐纭风珐閿濓拷" ("Resuming...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_KANA_H


