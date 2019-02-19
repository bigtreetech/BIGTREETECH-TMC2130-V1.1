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
 * Greek
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_EL_H
#define LANGUAGE_EL_H

#define MAPPER_CECF
#define DISPLAY_CHARSET_ISO10646_GREEK

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" 鑻囪熆鎱板杺娓叞.")
#define MSG_SD_INSERTED                     _UxGT("铻樺杺锜戒吉绾爡绾悗 榄忕淮锜昏熆浼熂")
#define MSG_SD_REMOVED                      _UxGT("铻掕爜浼锜昏敋锜界晱 榄忕淮锜昏熆浼熂")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters
#define MSG_MAIN                            _UxGT("铻斾吉锜藉杺榄忚悗 铻ｈ儍锠堣皳鐣�")
#define MSG_AUTOSTART                       _UxGT("铻掕爛锜胯爤娓吉锜跨晱 钄氶瓘榄忓璋撶晱锜界晱")
#define MSG_DISABLE_STEPPERS                _UxGT("铻掕熀钄氳皳钄氳熁绾叞锜烘叞濮旂晱锜界晱 铻犳叞锜胯媷锜�")
#define MSG_AUTO_HOME                       _UxGT("铻掕爛锜挎叞娓�. 钄氳熀浼皳浼爜鎱拌熁缁� 锜借熆鎱� 浼熁锠傚杺榄忚爤 锜界晱娓敋濮旀叞") //SHORTEN
#define MSG_AUTO_HOME_X                     _UxGT("铻掕熁锠傚杺榄忚爤 锜界晱娓敋濮旀叞 X")
#define MSG_AUTO_HOME_Y                     _UxGT("铻掕熁锠傚杺榄忚爤 锜界晱娓敋濮旀叞 Y")
#define MSG_AUTO_HOME_Z                     _UxGT("铻掕熁锠傚杺榄忚爤 锜界晱娓敋濮旀叞 Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("铻樿熀浼皳浼爜鎱拌熁缁� 铻樿熀. 铻橀瓘锜胯爥锜鸿爡锜界晱锜�") //SHORTEN
#define MSG_LEVEL_BED_WAITING               _UxGT("铻樿熀鍠傝熀钄氭湭鎱拌熀鎱板鐣忚熃鐣� 钄氳熀. 铻橀瓘锜胯爥锜鸿爡锜界晱锜� 锜鸿敋锜诲杺娓敋璋撹敋鍠�") //SHORTEN
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("铻樿熀锠堟腑钄氳皳鎱� 锜界晱娓敋濮旀叞")
#define MSG_LEVEL_BED_DONE                  _UxGT("铻ｄ綅鎱伴瓘浣嶈悗锜昏爡锜界晱 钄氳熀鍠傝熀钄氭湭鎱拌熀鎱板鐣忚熃鐣忚熂!") //SHORTEN
#define MSG_SET_HOME_OFFSETS                _UxGT("铻ｈ熁鍠傝熃娓爤锜� 灏句吉锜藉杺榄忚爧璋� 娓敋锜夸吉锜挎叞锜哄锜借敋锠呰皳") //SHORTEN
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("铻樿爜浼熁娓爤锜借熆鐣忛瓘浼皳 鎱板杺 娓敋锜夸吉锜挎叞锜哄锜借敋鍠傝熂") //SHORTEN
#define MSG_SET_ORIGIN                      _UxGT("铻ｈ熁鍠傝熃娓爤锜� 锜鸿熁鎱拌媷浣嶈敋锠�锜界晱锜�")
#define MSG_PREHEAT_1                       _UxGT("铻よ熁鎱拌儍鑻囪熁娓吉璋撹熃鐣� PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 锠堜綅浼�")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" bed") //SHORTEN
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" 钄氳熀鍠傚熬钄氬熬浼锠呰熃鐣�") //SHORTEN
#define MSG_PREHEAT_2                       _UxGT("铻よ熁鎱拌儍鑻囪熁娓吉璋撹熃鐣� ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 锠堜綅浼�")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" bed") //SHORTEN
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" 钄氳熀鍠傚熬钄氬熬浼锠呰熃鐣�") //SHORTEN
#define MSG_COOLDOWN                        _UxGT("铻犺敋鍠傝爡锜界晱 鑳冭敋锜绘腑鎱伴瓘锜讳吉锜藉杺浼熂")
#define MSG_SWITCH_PS_ON                    _UxGT("铻樿皳钄氳熁绾叞锜烘叞濮旂晱锜界晱")
#define MSG_SWITCH_PS_OFF                   _UxGT("铻掕熀钄氳皳钄氳熁绾叞锜烘叞濮旂晱锜界晱")
#define MSG_EXTRUDE                         _UxGT("铻樺皦锠嬭儍鐣忚熃鐣�")
#define MSG_RETRACT                         _UxGT("铻掕皳缁磋熃锠�锜昏熃鐣�")
#define MSG_MOVE_AXIS                       _UxGT("铻犺敋锜夸吉榄忓璋撶晱锜界晱 缁村皦鎱拌皳浼�")
#define MSG_BED_LEVELING                    _UxGT("铻樿熀鍠傝熀钄氭湭鎱拌熀鎱板鐣忚熃鐣� 铻樿熀. 铻橀瓘锜胯爥锜鸿爡锜界晱锜�") //SHORTEN
#define MSG_LEVEL_BED                       _UxGT("铻樿熀鍠傝熀钄氭湭鎱拌熀鎱板鐣忚熃鐣� 铻樿熀. 铻橀瓘锜胯爥锜鸿爡锜界晱锜�") //SHORTEN
#define MSG_MOVE_X                          _UxGT("铻犺敋锜夸吉榄忓璋撶晱锜界晱 X")
#define MSG_MOVE_Y                          _UxGT("铻犺敋锜夸吉榄忓璋撶晱锜界晱 Y")
#define MSG_MOVE_Z                          _UxGT("铻犺敋锜夸吉榄忓璋撶晱锜界晱 Z")
#define MSG_MOVE_E                          _UxGT("铻樺皦锠呰儍鐣忚熆钀庤熁浼熂")
#define MSG_MOVE_01MM                       _UxGT("铻犺敋锜夸吉榄忓璋撶晱锜界晱 0,1娓腑")
#define MSG_MOVE_1MM                        _UxGT("铻犺敋锜夸吉榄忓璋撶晱锜界晱 1娓腑")
#define MSG_MOVE_10MM                       _UxGT("铻犺敋锜夸吉榄忓璋撶晱锜界晱 10娓腑")
#define MSG_SPEED                           _UxGT("闊︿吉锠傝爥锜跨晱锜夸吉")
#define MSG_BED_Z                           _UxGT("铻樿熀. 铻橀瓘锜胯爥锜鸿爡锜界晱锜� Z")
#define MSG_NOZZLE                          _UxGT("铻掗瓘锜绘叞锠佽爥锜藉杺鎱�")
#define MSG_BED                             _UxGT("铻濅綅濮旇皳鐣�")
#define MSG_FAN_SPEED                       _UxGT("闊︿吉锠傝爥锜跨晱锜夸吉 浼皳钄氭腑鍠傝熃锜胯悗锜讳吉")
#define MSG_FLOW                            _UxGT("宸嶆叞钀�")
#define MSG_CONTROL                         _UxGT("铻嗕綅钄氱含锠傛叞锜�")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fact")
#define MSG_AUTOTEMP                        _UxGT("铻掕爛锜挎叞娓� 锜昏爥鑳冩腑鍠傝熃鐣� 鑳冭敋锜�/锜藉浼熂") //SHORTEN
#define MSG_ON                              _UxGT("铻樿皳钄氳熁绾叞锜烘叞鍠傜晱娓媷璋撴叞")
#define MSG_OFF                             _UxGT("铻掕熀钄氳皳钄氳熁绾叞锜烘叞鍠傜晱娓媷璋撴叞")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_ACC                             _UxGT("铻樿熀鍠傝熆缁磋爞锠�璋撹熃鐣�")
#define MSG_JERK                            _UxGT("Jerk")
#define MSG_VX_JERK                         _UxGT("V浼皳锜垮鏈熁浼熃鐣� x")
#define MSG_VY_JERK                         _UxGT("V浼皳锜垮鏈熁浼熃鐣� y")
#define MSG_VZ_JERK                         _UxGT("V浼皳锜垮鏈熁浼熃鐣� z")
#define MSG_VE_JERK                         _UxGT("V浼皳锜垮鏈熁浼熃鐣� e")
#define MSG_VMAX                            _UxGT("V 铻犺媷绾杺锜借熆鎱�")
#define MSG_VMIN                            _UxGT("V 铻樹綅缁磋爞鍠傝熃锜挎叞")
#define MSG_VTRAV_MIN                       _UxGT("V钄氫綅缁磋爞. 娓敋锜夸吉锜胯爤锜哄杺锜界晱")
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("A娓敋绾� ")
#define MSG_A_RETRACT                       _UxGT("铻�-浼皳缁磋熃锠�锜昏熃鐣�")
#define MSG_A_TRAVEL                        _UxGT("铻�-娓敋锜夸吉锜胯爤锜哄杺锜界晱")
#define MSG_STEPS_PER_MM                    _UxGT("B钀庢腑浼熆浼� 浼皳缁� 娓腑")
#define MSG_XSTEPS                          _UxGT("B钀庢腑浼熆浼� X 浼皳缁� 娓腑")
#define MSG_YSTEPS                          _UxGT("B钀庢腑浼熆浼� 杩� 浼皳缁� 娓腑")
#define MSG_ZSTEPS                          _UxGT("B钀庢腑浼熆浼� 铻� 浼皳缁� 娓腑")
#define MSG_ESTEPS                          _UxGT("B钀庢腑浼熆浼� 铻� 浼皳缁� 娓腑")
#define MSG_E1STEPS                         _UxGT("B钀庢腑浼熆浼� 铻�1 浼皳缁� 娓腑")
#define MSG_E2STEPS                         _UxGT("B钀庢腑浼熆浼� 铻�2 浼皳缁� 娓腑")
#define MSG_E3STEPS                         _UxGT("B钀庢腑浼熆浼� 铻�3 浼皳缁� 娓腑")
#define MSG_E4STEPS                         _UxGT("B钀庢腑浼熆浼� 铻�4 浼皳缁� 娓腑")
#define MSG_E5STEPS                         _UxGT("B钀庢腑浼熆浼� 铻�5 浼皳缁� 娓腑")
#define MSG_TEMPERATURE                     _UxGT("铻涜敋锜绘腑鎱伴瓘锜讳吉锜藉浼�")
#define MSG_MOTION                          _UxGT("铻濆璋撶晱锜界晱")
#define MSG_FILAMENT                        _UxGT("铻¤悗娓吉")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("铻� 锜借敋 娓腑3")
#define MSG_FILAMENT_DIAM                   _UxGT("铻栧杺缁存腑钄氳熆锜绘叞锜� 璋撹悗娓吉锜挎叞锜�")
#define MSG_CONTRAST                        _UxGT("铻濇叞璋撹熆锜荤淮锜借熆 LCD")
#define MSG_STORE_EEPROM                    _UxGT("铻掕熀鎱拌儍钀庨瓘钄氳爛锜界晱")
#define MSG_LOAD_EEPROM                     _UxGT("妗呰爤锜昏熆锠呰熃鐣�")
#define MSG_RESTORE_FAILSAFE                _UxGT("铻樿熀浼皳浼爜鎱拌熁缁� 浼熃锠佷吉浣嶆叞锠夎熂 浼皳锜垮杺绾熁缁磋爜鎱拌爛") //SHORTEN
#define MSG_REFRESH                         _UxGT("铻掕皳浼皳鑻囪爡锜界晱")
#define MSG_WATCH                           _UxGT("铻ｈ儍锠堣皳鐣� 锜轰綅鐣忚熁鎱拌爜锠堣熁鐣忚熃鐣忚熂")
#define MSG_PREPARE                         _UxGT("铻よ熁鎱拌敋锜挎叞鍠傛腑浼熃濮斾吉")
#define MSG_TUNE                            _UxGT("鍗辫爛璋撹熆鎱拌皳鍠傝熃娓爤锜�")
#define MSG_PAUSE_PRINT                     _UxGT("铻や吉锠夎熃鐣� 钄氶瓘锜胯爥锜鸿爡锜界晱锜�")
#define MSG_RESUME_PRINT                    _UxGT("鍗辫爛璋撹媷锠傚杺锜界晱 钄氶瓘锜胯爥锜鸿爡锜界晱锜�")
#define MSG_STOP_PRINT                      _UxGT("铻栧杺浼瓘鎱拌熀钀� 钄氶瓘锜胯爥锜鸿爡锜界晱锜�")
#define MSG_CARD_MENU                       _UxGT("铻橀瓘锜胯爥锜鸿爡锜界晱 浼熀锠� SD")
#define MSG_NO_CARD                         _UxGT("铻栬敋璋� 灏捐熁鑻囪儍鐣忛瓘钄� SD")
#define MSG_DWELL                           _UxGT("铻掕皳浼熃锜挎叞浣嶈悗 浣嶈敋鍠傝熆鎱拌爛锜荤含濮斾吉锜�")
#define MSG_USERWAIT                        _UxGT("铻掕皳浼腑鎱拌皳钀� 绾杺浼� 锠傝熁钀庤熃锜跨晱")
#define MSG_RESUMING                        _UxGT("鍗辫爛璋撹敋锠傚鍛宠敋锜夸吉鍠� 鐣� 钄氶瓘锜胯爥锜鸿爡锜界晱") //SHORTEN
#define MSG_PRINT_ABORTED                   _UxGT("铻栧杺浼瓘锠堣熀锜胯敋锜夸吉鍠� 鐣� 钄氶瓘锜胯爥锜鸿爡锜界晱") //SHORTEN
#define MSG_NO_MOVE                         _UxGT("铻濅吉娓浼� 榄忓璋撶晱锜界晱.")
#define MSG_KILLED                          _UxGT("闊﹁灅宸嶈灎铻掗煢铻滃嵄铻犺灒鍗�. ")
#define MSG_STOPPED                         _UxGT("铻栬灉铻掕灊铻ｈ灓铻�. ")
#define MSG_CONTROL_RETRACT                 _UxGT("铻掕皳缁磋熃锠�锜昏熃鐣� 娓腑")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("铻樿皳浼綅浣嶄吉绾悗 浼皳缁磋熃锠�锜昏熃鐣忚熂 娓腑")  //SHORTEN
#define MSG_CONTROL_RETRACTF                _UxGT("铻掕皳缁磋熃锠�锜昏熃鐣� V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("铻犺敋锜夸吉锜鸿悗鏈晱锜界晱 娓腑")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_AUTORETRACT                     _UxGT("铻掕爛锜胯爤娓吉锜跨晱 浼皳缁磋熃锠�锜昏熃鐣�")
#define MSG_FILAMENTCHANGE                  _UxGT("铻掍綅浣嶄吉绾悗 璋撹悗娓吉锜挎叞锜�")
#define MSG_INIT_SDCARD                     _UxGT("铻よ熁鎱拌敋锜挎叞鍠傛腑浼熃濮斾吉 榄忕淮锜昏熆浼熂 SD")  //SHORTEN
#define MSG_CNG_SDCARD                      _UxGT("铻掍綅浣嶄吉绾悗 榄忕淮锜昏熆浼熂 SD")
#define MSG_ZPROBE_OUT                      _UxGT("铻栧杺钄氳熁钄氳爥璋撶晱锜界晱 Z 钄氶瓘锜胯爤锜� 铻樿熀.铻橀瓘锜胯爥锜鸿爡锜界晱锜�") //SHORTEN
#define MSG_YX_UNHOMED                      _UxGT("铻樿熀浼皳浼爜鎱拌熁缁� 鍥�/杩� 锜鸿熁鍠傝皳 浼熀锠� 铻�") //SHORTEN
#define MSG_XYZ_UNHOMED                     _UxGT("铻樿熀浼皳浼爜鎱拌熁缁� 鍥磋繚铻� 锜鸿熁锠嬭熆浼�")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("铻犺敋锜夸吉锜胯爤锜哄杺锜界晱 铻�")
#define MSG_BABYSTEP_X                      _UxGT("铻犲杺榄忚熁锠� 灏捐悗娓吉 鍥�")
#define MSG_BABYSTEP_Y                      _UxGT("铻犲杺榄忚熁锠� 灏捐悗娓吉 杩�")
#define MSG_BABYSTEP_Z                      _UxGT("铻犲杺榄忚熁锠� 灏捐悗娓吉 铻�")
#define MSG_ENDSTOP_ABORT                   _UxGT("铻掗瓘锠夎熁锠呰熃鐣� endstop ")
#define MSG_HEATING_FAILED_LCD              _UxGT("铻掕皳钄氳熀鍠傝熆锠�锠傝悗锜� 鑳冭媷锜绘腑浼皳锜界晱")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("铻よ灋铻樿灒铻¤瀿铻欒灒杩濆嵄铻� 铻涜灅宸嶈灎铻ｉ煢铻氶煢铻�")
#define MSG_THERMAL_RUNAWAY                 _UxGT("铻栬灉铻掓杩濊灂铻� 铻涜灅宸嶈灎铻ｈ灊宸嶈瀿鍗辫灉铻掑嵄")
#define MSG_ERR_MAXTEMP                     _UxGT("铻よ灅宸嶈灉闊﹁灇 铻涜灅宸嶈灎铻ｈ灊宸嶈瀿鍗辫灉铻�")
#define MSG_ERR_MINTEMP                     _UxGT("铻犺灇 铻樿灓铻掑穽铻濊灇鍗� 铻涜灅宸嶈灎铻ｈ灊宸嶈瀿鍗辫灉铻掑嵄") //SHORTEN
#define MSG_ERR_MAXTEMP_BED                 _UxGT("铻犺灅铻曡灉鍗遍煢铻� 铻涜灅宸嶈灎铻ｈ灊宸嶈瀿鍗辫灉铻掑嵄 铻樿灓. 铻樿灊闊﹁繚铻ゆ儫鍗辫灇鍗�") //SHORTEN
#define MSG_ERR_MINTEMP_BED                 _UxGT("铻樿灋铻掑洿铻滃嵄闊﹁灇 铻涜灅宸嶈灎铻ｈ灊宸嶈瀿鍗辫灉铻掑嵄 铻樿灓. 铻樿灊闊﹁繚铻ゆ儫鍗辫灇鍗�") //SHORTEN
#define MSG_HALTED                          _UxGT("H 钄氶瓘锜胯爥锜鸿爡锜界晱 鏈杺浼瓘锠堣熀鐣忛瓘钄�")
#define MSG_PLEASE_RESET                    _UxGT("PLEASE RESET") //TRANSLATE
#define MSG_HEATING                         _UxGT("铻涜敋锜绘腑浼璋撹敋锜夸吉鍠傞垾锟�")
#define MSG_HEATING_COMPLETE                _UxGT("铻� 鑳冭媷锜绘腑浼皳锜界晱 鎱颁綅鎱伴瓘浣嶇晱锜昏爧鑳冪晱榄忚敋.") //SHORTEN
#define MSG_BED_HEATING                     _UxGT("铻涜媷锜绘腑浼皳锜界晱 铻樿灓. 铻橀瓘锜胯爥锜鸿爡锜界晱锜�") //SHORTEN
#define MSG_BED_DONE                        _UxGT("铻� 铻樿熀. 铻橀瓘锜胯爥锜鸿爡锜界晱锜� 鎱颁綅鎱伴瓘浣嶇晱锜昏爧鑳冪晱榄忚敋") //SHORTEN
#define MSG_DELTA_CALIBRATE                 _UxGT("铻斾吉鑳冩腑鎱拌皳锠堟腑鐣忚熃鐣� Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("铻斾吉鑳冩腑鎱拌皳锠堟腑鐣忚熃鐣� X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("铻斾吉鑳冩腑鎱拌皳锠堟腑鐣忚熃鐣� Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("铻斾吉鑳冩腑鎱拌皳锠堟腑鐣忚熃鐣� Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("铻斾吉鑳冩腑鎱拌皳锠堟腑鐣忚熃鐣� 榄忚媷璋撹熆锜绘叞锠�")

#define MSG_INFO_MENU                       _UxGT("About Printer")
#define MSG_INFO_PRINTER_MENU               _UxGT("Printer Info")
#define MSG_INFO_STATS_MENU                 _UxGT("Printer Stats")
#define MSG_INFO_BOARD_MENU                 _UxGT("Board Info")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Thermistors")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extruders")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocol")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Print Count")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completed  ")
  #define MSG_INFO_PRINT_TIME               _UxGT("Total Time ")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Prints   ")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completed")
  #define MSG_INFO_PRINT_TIME               _UxGT("Duration ")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("Min Temp")
#define MSG_INFO_MAX_TEMP                   _UxGT("Max Temp")
#define MSG_INFO_PSU                        _UxGT("PSU")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("CHANGE FILAMENT")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Extrude more")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Resume print")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Wait for start")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("of the filament")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("change")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("filament unload")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insert filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("and press button")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("to continue...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("filament load")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("filament extrude")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Wait for print")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("to resume")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Please wait...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Ejecting...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insert and Click")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Loading...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Extruding...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Resuming...")
#endif

#endif // LANGUAGE_EL_H


