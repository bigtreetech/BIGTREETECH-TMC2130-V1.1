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
 * Simplified Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_CN_H
#define LANGUAGE_ZH_CN_H

#define WELCOME_MSG                         MACHINE_NAME _UxGT("瀹告彃姘ㄧ紒锟�.")  //" ready."
#define MSG_SD_INSERTED                     _UxGT("鐎涙ê鍋嶉崡鈥冲嚒閹绘帒鍙�")  //"Card inserted"
#define MSG_SD_REMOVED                      _UxGT("鐎涙ê鍋嶉崡陇顫﹂幏鏂垮毉")  //"Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("閹糕�虫健")  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("娑撴槒褰嶉崡锟�")  //"Main"
#define MSG_AUTOSTART                       _UxGT("閼奉亜濮╁锟芥慨锟�")  //"Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("閸忔娊妫村銉ㄧ箻閻㈠灚婧�")  //"Disable steppers"
#define MSG_AUTO_HOME                       _UxGT("閸ョ偛甯悙锟�")  //"Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("閸ョ��閸樼喍缍�")  //"Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("閸ョ�侀崢鐔剁秴")  //"Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("閸ョ�傞崢鐔剁秴")  //"Home Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("楠炲啿褰寸拫鍐ㄩ挬XYZ瑜版帒甯担锟�")  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("閸楁洖鍤锟芥慨瀣劰鎼村﹨鐨熼獮锟�")  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("娑撳閲滈悜顓炵哎鐠嬪啫閽╅悙锟�")  //"Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("鐎瑰本鍨氶悜顓炵哎鐠嬪啫閽�")  //"Leveling Done!"
#define MSG_SET_HOME_OFFSETS                _UxGT("鐠佸墽鐤嗛崢鐔哄仯閸嬪繒些")  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("閸嬪繒些瀹告彃鎯庨悽锟�")  //"Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("鐠佸墽鐤嗛崢鐔哄仯")  //"Set origin"
#define MSG_PREHEAT_1                       _UxGT("妫板嫮鍎筆LA")  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 閸忋劑鍎�")  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" 閻戭厼绨�")  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" 鐠佸墽鐤�")  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       _UxGT("妫板嫮鍎笰BS")  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 閸忋劑鍎�")  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" 閻戭厼绨�")  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" 鐠佸墽鐤�")  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        _UxGT("闂勫秵淇�")  //"Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("閻㈠灚绨幍鎾崇磻")  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("閻㈠灚绨崗鎶芥４")  //"Switch power off"
#define MSG_EXTRUDE                         _UxGT("閹搞倕鍤�")  //"Extrude"
#define MSG_RETRACT                         _UxGT("閸ョ偞濞�")  //"Retract"
#define MSG_MOVE_AXIS                       _UxGT("缁夎濮╂潪锟�")  //"Move axis"
#define MSG_BED_LEVELING                    _UxGT("鐠嬪啫閽╅悜顓炵哎")  //"Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("鐠嬪啫閽╅悜顓炵哎")  //"Level bed"
#define MSG_MOVE_X                          _UxGT("缁夎濮")  //"Move X"
#define MSG_MOVE_Y                          _UxGT("缁夎濮℡")  //"Move Y"
#define MSG_MOVE_Z                          _UxGT("缁夎濮㈱")  //"Move Z"
#define MSG_MOVE_E                          _UxGT("閹搞倕鍤張锟�")  //"Extruder"
#define MSG_MOVE_01MM                       _UxGT("缁夎濮� 0.1 mm")  //"Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("缁夎濮� 1 mm")  //"Move 1mm"
#define MSG_MOVE_10MM                       _UxGT("缁夎濮� 10 mm")  //"Move 10mm"
#define MSG_SPEED                           _UxGT("闁喓宸�")  //"Speed"
#define MSG_BED_Z                           _UxGT("閻戭厼绨")  //"Bed Z"
#define MSG_NOZZLE                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 閸犲嘲妲�")  //"Nozzle" 閸ｆ潙妲�
#define MSG_BED                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 閻戭厼绨�")  //"Bed"
#define MSG_FAN_SPEED                       _UxGT("妞嬪孩澧栭柅鐔哄芳")  //"Fan speed"
#define MSG_FLOW                            _UxGT("閹搞倕鍤柅鐔哄芳")  //"Flow"
#define MSG_CONTROL                         _UxGT("閹貉冨煑")  //"Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 閺堬拷鐏忥拷") //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 閺堬拷婢讹拷")  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 閸ョ姵鏆�")  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        _UxGT("閼奉亜濮╅幒褎淇�")  //"Autotemp"
#define MSG_ON                              _UxGT("瀵拷 ")  //"On "
#define MSG_OFF                             _UxGT("閸忥拷 ")  //"Off"
#define MSG_PID_P                           _UxGT("PID-P")  //"PID-P"
#define MSG_PID_I                           _UxGT("PID-I")  //"PID-I"
#define MSG_PID_D                           _UxGT("PID-D")  //"PID-D"
#define MSG_PID_C                           _UxGT("PID-C")  //"PID-C"
#define MSG_SELECT                          _UxGT("闁瀚�")  //"Select"
#define MSG_ACC                             _UxGT("閸旂娀锟界喎瀹�")  //"Accel" acceleration
#define MSG_JERK                            _UxGT("閹舵牕濮╅柅鐔哄芳")  // "Jerk"
#define MSG_VX_JERK                         _UxGT("X鏉炲瓨濮堥崝銊╋拷鐔哄芳")  //"Vx-jerk"
#define MSG_VY_JERK                         _UxGT("Y鏉炲瓨濮堥崝銊╋拷鐔哄芳")  //"Vy-jerk"
#define MSG_VZ_JERK                         _UxGT("Z鏉炲瓨濮堥崝銊╋拷鐔哄芳")  //"Vz-jerk"
#define MSG_VE_JERK                         _UxGT("閹搞倕鍤張鐑樺閸斻劑锟界喓宸�")  //"Ve-jerk"
#define MSG_VMAX                            _UxGT("閺堬拷婢堆嗙箻閺傛瑩锟界喓宸�")  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            _UxGT("閺堬拷鐏忓繗绻橀弬娆擄拷鐔哄芳")  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       _UxGT("閺堬拷鐏忓繒些閸斻劑锟界喓宸�")  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_AMAX                            _UxGT("閺堬拷婢堆勫ⅵ閸楁澘濮為柅鐔峰")  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       _UxGT("閺�鎯扮箻閸旂娀锟界喎瀹�")  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        _UxGT("闂堢偞澧﹂崡鎵╅崝銊ュ闁喎瀹�")  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    _UxGT("鏉炲瓨顒為弫锟�/mm")  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_XSTEPS                          _UxGT("X鏉炲瓨顒為弫锟�/mm")  //"Xsteps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_YSTEPS                          _UxGT("Y鏉炲瓨顒為弫锟�/mm")  //"Ysteps/mm"
#define MSG_ZSTEPS                          _UxGT("Z鏉炲瓨顒為弫锟�/mm")  //"Zsteps/mm"
#define MSG_ESTEPS                          _UxGT("閹搞倕鍤張鐑橆劄閺侊拷/mm")  //"Esteps/mm"
#define MSG_TEMPERATURE                     _UxGT("濞撯晛瀹�")  //"Temperature"
#define MSG_MOTION                          _UxGT("鏉╂劕濮�")  //"Motion"
#define MSG_FILAMENT                        _UxGT("娑撴繃鏋″ù瀣啇")  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              _UxGT("濞村顔愮粔鐥琺椴�")  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   _UxGT("娑撴繃鏋￠惄鏉戠窞")  //"Fil. Dia."
#define MSG_CONTRAST                        _UxGT("LCD鐎佃鐦惔锟�")  //"LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("娣囨繂鐡ㄧ拋鍓х枂")  //"Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("鐟佸懓娴囩拋鍓х枂")  //"Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("閹垹顦茬�瑰鍙忛崐锟�")  //"Restore failsafe"
#define MSG_REFRESH                         _UxGT("閸掗攱鏌�")  //"Refresh"
#define MSG_WATCH                           _UxGT("娣団剝浼呯仦锟�")  //"Info screen"
#define MSG_PREPARE                         _UxGT("閸戝棗顦�")  //"Prepare"
#define MSG_TUNE                            _UxGT("鐠嬪啯鏆�")  //"Tune"
#define MSG_PAUSE_PRINT                     _UxGT("閺嗗倸浠犻幍鎾冲祪")  //"Pause print"
#define MSG_RESUME_PRINT                    _UxGT("閹垹顦查幍鎾冲祪")  //"Resume print"
#define MSG_STOP_PRINT                      _UxGT("閸嬫粍顒涢幍鎾冲祪")  //"Stop print"
#define MSG_CARD_MENU                       _UxGT("娴犲骸鐡ㄩ崒銊ュ幢娑撳﹥澧﹂崡锟�")  //"Print from SD"
#define MSG_NO_CARD                         _UxGT("閺冪姴鐡ㄩ崒銊ュ幢")  //"No SD card"
#define MSG_DWELL                           _UxGT("娴兼垹婀㈡稉锟� ...")  //"Sleep..."
#define MSG_USERWAIT                        _UxGT("缁涘绶熼悽銊﹀煕 ...")  //"Wait for user..."
#define MSG_RESUMING                        _UxGT("閹垹顦查幍鎾冲祪娑擄拷")  //"Resuming print"
#define MSG_PRINT_ABORTED                   _UxGT("閹垫挸宓冨鎻掑絿濞戯拷")  //"Print aborted"
#define MSG_NO_MOVE                         _UxGT("閺冪姷些閸旓拷")  //"No move."
#define MSG_KILLED                          _UxGT("瀹稿弶娼冮幒锟�")  //"KILLED. "
#define MSG_STOPPED                         _UxGT("瀹告彃浠犲锟�")  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("閸ョ偞濞婇梹鍨mm")  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("閹广垺澧滈崶鐐村▕闂�鍨mm")  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                _UxGT("閸ョ偞濞婇柅鐔哄芳mm/s")  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("閸ョ偞濞婇幁銏狀槻闂�鍨mm")  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("閹广垺澧滈崶鐐村▕閹垹顦查梹鍨mm")  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("閸ョ偞濞婇幁銏狀槻閸氬氦绻橀弬娆擄拷鐔哄芳mm/s")  //"UnRet  V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_AUTORETRACT                     _UxGT("閼奉亜濮╅幎钘夋礀")  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  _UxGT("閺囧瓨宕叉稉婵囨灐")  //"Change filament"
#define MSG_INIT_SDCARD                     _UxGT("閸掓繂顫愰崠鏍х摠閸屻劌宕�")  //"Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("閺囧瓨宕茬�涙ê鍋嶉崡锟�")  //"Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Z閹恒垽鎷￠崷銊у劰鎼村﹣绠ｆ径锟�")  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_HOME                            _UxGT("瑜版帊缍�")  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("閸忥拷")  //"first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z閸嬪繒些")  //"Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("瀵邦噣鍣虹拫鍐╂殻X鏉烇拷")  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      _UxGT("瀵邦噣鍣虹拫鍐╂殻Y鏉烇拷")  //"Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("瀵邦噣鍣虹拫鍐╂殻Z鏉烇拷")  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("閹糕�虫健缂佸牊顒�")  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("閸旂姷鍎规径杈Е")  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("闁挎瑨顕ら敍姝奅DUNDANT TEMP")  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("濞撯晜甯舵径杈ㄥ付")  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("闁挎瑨顕ら敍姘付妤傛ɑ淇惔锟�")  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("闁挎瑨顕ら敍姘付娴ｅ孩淇惔锟�")  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("闁挎瑨顕ら敍姘付妤傛鍎规惔濠冧刊鎼达拷")  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("闁挎瑨顕ら敍姘付娴ｅ海鍎规惔濠冧刊鎼达拷")  //"Err: MINTEMP BED"
#define MSG_HALTED                          _UxGT("閹垫挸宓冮崑婊勬簚")  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("鐠囩兘鍣哥純锟�")  //"Please reset"
#define MSG_SHORT_DAY                       _UxGT("婢讹拷")  //"d" // One character only
#define MSG_SHORT_HOUR                      _UxGT("閺冿拷")  //"h" // One character only
#define MSG_SHORT_MINUTE                    _UxGT("閸掞拷")  //"m" // One character only
#define MSG_HEATING                         _UxGT("閸旂姷鍎规稉锟� ...")  //"Heating..."
#define MSG_HEATING_COMPLETE                _UxGT("鐎瑰本鍨氶崝鐘靛劰")  //"Heating done."
#define MSG_BED_HEATING                     _UxGT("閸旂姷鍎归悜顓炵哎娑擄拷")  //"Bed Heating."
#define MSG_BED_DONE                        _UxGT("鐎瑰本鍨氶崝鐘靛劰閻戭厼绨�")  //"Bed done."
#define MSG_DELTA_CALIBRATE                 _UxGT("閳寧鐗庨崙锟�")  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("閺嶁�冲櫙X")  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("閺嶁�冲櫙Y")  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("閺嶁�冲櫙Z")  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("閺嶁�冲櫙娑擃厼绺�")  //"Calibrate Center"

#define MSG_INFO_MENU                       _UxGT("閸忓厖绨幍鎾冲祪閺堬拷")  //"About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("閹垫挸宓冮張杞颁繆閹拷")  //"Printer Info"
#define MSG_INFO_STATS_MENU                 _UxGT("閹垫挸宓冮張铏圭埠鐠侊拷")  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("娑撶粯婢樻穱鈩冧紖")  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("濞撯晛瀹崇拋锟�")  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("閹搞倕鍤張锟�")  //"Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("濞夈垻澹掗悳锟�")  //"Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("閸楀繗顔�")  //"Protocol"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              _UxGT("閹垫挸宓冪拋鈩冩殶")  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("鐎瑰本鍨氭禍锟�")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("閹粯澧﹂崡鐗堟闂傦拷")  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            _UxGT("閺堬拷闂�鍨紣娴ｆ粍妞傞梻锟�")  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("閹槒顓搁幐銈呭毉")  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              _UxGT("閹垫挸宓冮弫锟�")  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("鐎瑰本鍨�")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("閹鍙�")  //"Total"
#define MSG_INFO_PRINT_LONGEST            _UxGT("閺堬拷闂�锟�")  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("瀹稿弶灏嬮崙锟�")  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("閺堬拷娴ｅ孩淇惔锟�")  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("閺堬拷妤傛ɑ淇惔锟�")  //"Max Temp"
#define MSG_INFO_PSU                        _UxGT("閻㈠灚绨笟娑樼安")  //"Power Supply"

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("閹搞倕鍤弴鏉戭樋")  //"Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("閹垹顦查幍鎾冲祪")  //"Resume print"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("缁涘绶熷锟芥慨锟�")  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("娑撴繃鏋�")  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("閸欐ɑ娲�")  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("缁涘绶�")  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("閸楅晲绗呮稉婵囨灐")  //"filament unload"
#define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("閹绘帒鍙嗘稉婵囨灐")  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("楠炶埖瀵滈柨锟�")  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("閺夈儳鎴风紒锟� ...")  //"to continue..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("缁涘绶�")  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("鏉╂稒鏋�")  //"filament load"
#define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("缁涘绶�")  //"Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("娑撴繃鏋￠幐銈呭毉")  //"filament extrude"
#define MSG_FILAMENT_CHANGE_EXTRUDE_3       _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("缁涘绶熼幍鎾冲祪")  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("閹垹顦�")  //"to resume"
#define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("")  //""

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("鐠囬鐡戝锟� ...")  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("闁拷閸戣桨鑵� ...")  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("閹绘帒鍙嗛獮璺哄礋閸戯拷")  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("鐟佸懓娴囨稉锟� ...")  //"Loading..."
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("閹搞倕鍤稉锟� ...")  //"Extruding..."
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("閹垹顦叉稉锟� ...")  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_CN_H


