// cat src/common/resource.h | perl scripts/misc/idmap.pl > src/common/gui/SkinImageMaps.h if you want to regen this
inline std::unordered_map<std::string, int> createIdNameMap() {
   std::unordered_map<std::string, int> res;
   res["BG"] = 102;
   res["FADERV_BG"] = 105;
   res["OSCSWITCH"] = 110;
   res["FBCONFIG"] = 112;
   res["SCENESWITCH"] = 113;
   res["SCENEMODE"] = 114;
   res["OCTAVES_OSC"] = 117;
   res["OCTAVES"] = 118;
   res["OSCMENU"] = 119;
   res["WAVESHAPER"] = 120;
   res["RELATIVE_TOGGLE"] = 121;
   res["OSCSELECT"] = 122;
   res["POLYMODE"] = 123;
   res["MODSRC_BG"] = 124;
   res["SWITCH_KTRK"] = 125;
   res["SWITCH_RETRIGGER"] = 126;
   res["NUMBERS"] = 127;
   res["MODSRC_SYMBOL"] = 128;
   res["FADERH_LABELS"] = 131;
   res["SWITCH_SOLO"] = 132;
   res["SWITCH_FM"] = 133;
   res["SWITCH_MUTE"] = 134;
   res["FXCONF_SYMBOLS"] = 136;
   res["FXCONF"] = 137;
   res["SWITCH_TEMPOSYNC"] = 140;
   res["SWITCH_LINK"] = 140;
   res["VFADER_MINI_BG_BLACK"] = 141;
   res["OSCROUTE"] = 143;
   res["FXBYPASS"] = 144;
   res["ENVSHAPE"] = 145;
   res["LFOTRIGGER"] = 146;
   res["BUTTON_STORE"] = 148;
   res["BUTTON_MINUSPLUS"] = 149;
   res["BUTTON_CHECK"] = 150;
   res["FMCONFIG"] = 151;
   res["UNIPOLAR"] = 152;
   res["FADERH_HANDLE"] = 153;
   res["FADERH_BG"] = 154;
   res["FADERV_HANDLE"] = 157;
   res["ABOUT"] = 158;
   res["FILTERSUBTYPE"] = 160;
   res["CHARACTER"] = 161;
   res["ENVMODE"] = 162;
   res["BUTTON_MENU"] = 164;
   res["LFOTYPE"] = 166;
   res["MENU_IN_SLIDER_BG"] = 167;
   res["MENU_IN_FILTER_BG"] = 168;
   res["FILTER_GLYPHS"] = 169;
   res["MSEG_SEGMENT_HANDLES"] = 301;
   res["MSEG_MOVEMENT"] = 302;
   res["MINIEDIT_ICON"] = 170;
   res["MSEG_VERTICAL_SNAP"] = 303;
   res["MSEG_HORIZONTAL_SNAP"] = 304;
   res["MPE_BUTTON"] = 171;
   res["ZOOM_BUTTON"] = 172;
   res["TUNE_BUTTON"] = 173;
   res["POLYSPLIT_NUM_BG"] = 174;
   res["PITCHBEND_NUM_BG"] = 175;
   res["KEYTRACKROOT_BG"] = 176;
   res["MSEG_LOOP_MODES"] = 305;
   res["LFO_MSEG_EDIT"] = 177;
   res["LFO_PRESETS"] = 178;
   res["MSEG_NUMBERFIELDBG"] = 306;
   res["MODSRC_SHOW_LFO"] = 179;
   res["MSEG_EDIT_MODE"] = 307;
   res["ABOUT_LOGOS"] = 180;
   return res;
}

inline std::unordered_set<int> allowedImageIds() {
   std::unordered_set<int> allowed;
   allowed.insert( 102 );
   allowed.insert( 105 );
   allowed.insert( 110 );
   allowed.insert( 112 );
   allowed.insert( 113 );
   allowed.insert( 114 );
   allowed.insert( 117 );
   allowed.insert( 118 );
   allowed.insert( 119 );
   allowed.insert( 120 );
   allowed.insert( 121 );
   allowed.insert( 122 );
   allowed.insert( 123 );
   allowed.insert( 124 );
   allowed.insert( 125 );
   allowed.insert( 126 );
   allowed.insert( 127 );
   allowed.insert( 128 );
   allowed.insert( 131 );
   allowed.insert( 132 );
   allowed.insert( 133 );
   allowed.insert( 134 );
   allowed.insert( 136 );
   allowed.insert( 137 );
   allowed.insert( 140 );
   allowed.insert( 140 );
   allowed.insert( 141 );
   allowed.insert( 143 );
   allowed.insert( 144 );
   allowed.insert( 145 );
   allowed.insert( 146 );
   allowed.insert( 148 );
   allowed.insert( 149 );
   allowed.insert( 150 );
   allowed.insert( 151 );
   allowed.insert( 152 );
   allowed.insert( 153 );
   allowed.insert( 154 );
   allowed.insert( 157 );
   allowed.insert( 158 );
   allowed.insert( 160 );
   allowed.insert( 161 );
   allowed.insert( 162 );
   allowed.insert( 164 );
   allowed.insert( 166 );
   allowed.insert( 167 );
   allowed.insert( 168 );
   allowed.insert( 169 );
   allowed.insert( 301 );
   allowed.insert( 302 );
   allowed.insert( 170 );
   allowed.insert( 303 );
   allowed.insert( 304 );
   allowed.insert( 171 );
   allowed.insert( 172 );
   allowed.insert( 173 );
   allowed.insert( 174 );
   allowed.insert( 175 );
   allowed.insert( 176 );
   allowed.insert( 305 );
   allowed.insert( 177 );
   allowed.insert( 178 );
   allowed.insert( 306 );
   allowed.insert( 179 );
   allowed.insert( 307 );
   allowed.insert( 180 );

   return allowed;
}
