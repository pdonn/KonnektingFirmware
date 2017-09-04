#define MANUFACTURER_ID 49374
#define DEVICE_ID 1
#define REVISION 0

#define PARAM_startupDelay 0
#define PARAM_triggerTime 1
#define PARAM_manualControl 2
#define PARAM_ventilationTime 3
#define PARAM_setting_channelA 4
#define PARAM_setting_channelB 5
#define PARAM_setting_channelC 6
#define PARAM_setting_channelD 7
#define PARAM_setting_channelE 8
#define PARAM_setting_channelF 9
#define PARAM_setting_channelG 10
#define PARAM_setting_channelH 11
#define PARAM_channel_runTimeClose 12
#define PARAM_channel_runTimeOpen 13
#define PARAM_channel_runTimeRollover 14
#define PARAM_channel_shortTimeRun 15
#define PARAM_channel_shortTimeRunTime 16
#define PARAM_channel_lockAction 17
#define PARAM_channel_ventByComObj 18
#define PARAM_channel_absPositionComObj 19
#define PARAM_channel_referenceRunComObj 20
#define PARAM_channel_runStatusComObj 21
#define PARAM_channel_absPosStatusComObj 22
#define PARAM_channel_runStatusPositionComObj 23
        
KnxComObject KnxDevice::_comObjectsList[] = {
    /* Index 0 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 1 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 2 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 3 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 4 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 5 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 6 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 7 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 8 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 9 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 10 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 11 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 12 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 13 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 14 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 15 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 16 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 17 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 18 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 19 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 20 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 21 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 22 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 23 - null */ KnxComObject(KNX_DPT_1_011, 0x2a),
    /* Index 24 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 25 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 26 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 27 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 28 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 29 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 30 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 31 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 32 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 33 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 34 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 35 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 36 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 37 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 38 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 39 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 40 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 41 - null */ KnxComObject(KNX_DPT_1_011, 0x2a),
    /* Index 42 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 43 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 44 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 45 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 46 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 47 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 48 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 49 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 50 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 51 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 52 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 53 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 54 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 55 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 56 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 57 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 58 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 59 - null */ KnxComObject(KNX_DPT_1_011, 0x2a),
    /* Index 60 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 61 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 62 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 63 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 64 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 65 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 66 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 67 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 68 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 69 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 70 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 71 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 72 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 73 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 74 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 75 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 76 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 77 - null */ KnxComObject(KNX_DPT_1_011, 0x2a),
    /* Index 78 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 79 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 80 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 81 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 82 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 83 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 84 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 85 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 86 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 87 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 88 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 89 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 90 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 91 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 92 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 93 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 94 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 95 - null */ KnxComObject(KNX_DPT_1_011, 0x2a),
    /* Index 96 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 97 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 98 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 99 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 100 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 101 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 102 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 103 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 104 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 105 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 106 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 107 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 108 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 109 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 110 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 111 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 112 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 113 - null */ KnxComObject(KNX_DPT_1_011, 0x2a),
    /* Index 114 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 115 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 116 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 117 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 118 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 119 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 120 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 121 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 122 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 123 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 124 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 125 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 126 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 127 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 128 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 129 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 130 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 131 - null */ KnxComObject(KNX_DPT_1_011, 0x2a),
    /* Index 132 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 133 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 134 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 135 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 136 - null */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 137 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 138 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 139 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 140 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 141 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 142 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 143 - null */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 144 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 145 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 146 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 147 - null */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 148 - null */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 149 - null */ KnxComObject(KNX_DPT_1_011, 0x2a),
    /* Index 150 - null */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 151 - null */ KnxComObject(KNX_DPT_1_001, 0x2a)
};
const byte KnxDevice::_numberOfComObjects = sizeof (_comObjectsList) / sizeof (KnxComObject); // do not change this code
       
byte KonnektingDevice::_paramSizeList[] = {
    /* Index 0 - startupDelay */ PARAM_UINT8,
    /* Index 1 - triggerTime */ PARAM_UINT8,
    /* Index 2 - manualControl */ PARAM_UINT8,
    /* Index 3 - ventilationTime */ PARAM_UINT8,
    /* Index 4 - setting_channelA */ PARAM_UINT8,
    /* Index 5 - setting_channelB */ PARAM_UINT8,
    /* Index 6 - setting_channelC */ PARAM_UINT8,
    /* Index 7 - setting_channelD */ PARAM_UINT8,
    /* Index 8 - setting_channelE */ PARAM_UINT8,
    /* Index 9 - setting_channelF */ PARAM_UINT8,
    /* Index 10 - setting_channelG */ PARAM_UINT8,
    /* Index 11 - setting_channelH */ PARAM_UINT8,
    /* Index 12 - channel_runTimeClose */ PARAM_UINT8,
    /* Index 13 - channel_runTimeOpen */ PARAM_UINT8,
    /* Index 14 - channel_runTimeRollover */ PARAM_UINT8,
    /* Index 15 - channel_shortTimeRun */ PARAM_UINT8,
    /* Index 16 - channel_shortTimeRunTime */ PARAM_UINT8,
    /* Index 17 - channel_lockAction */ PARAM_UINT8,
    /* Index 18 - channel_ventByComObj */ PARAM_UINT8,
    /* Index 19 - channel_absPositionComObj */ PARAM_UINT8,
    /* Index 20 - channel_referenceRunComObj */ PARAM_UINT8,
    /* Index 21 - channel_runStatusComObj */ PARAM_UINT8,
    /* Index 22 - channel_absPosStatusComObj */ PARAM_UINT8,
    /* Index 23 - channel_runStatusPositionComObj */ PARAM_UINT8,
    /* Index 24 - null */ PARAM_UINT8,
    /* Index 25 - null */ PARAM_UINT8,
    /* Index 26 - null */ PARAM_UINT8,
    /* Index 27 - null */ PARAM_UINT8,
    /* Index 28 - null */ PARAM_UINT8,
    /* Index 29 - null */ PARAM_UINT8,
    /* Index 30 - null */ PARAM_UINT8,
    /* Index 31 - null */ PARAM_UINT8,
    /* Index 32 - null */ PARAM_UINT8,
    /* Index 33 - null */ PARAM_UINT8,
    /* Index 34 - null */ PARAM_UINT8,
    /* Index 35 - null */ PARAM_UINT8,
    /* Index 36 - null */ PARAM_UINT8,
    /* Index 37 - null */ PARAM_UINT8,
    /* Index 38 - null */ PARAM_UINT8,
    /* Index 39 - null */ PARAM_UINT8,
    /* Index 40 - null */ PARAM_UINT8,
    /* Index 41 - null */ PARAM_UINT8,
    /* Index 42 - null */ PARAM_UINT8,
    /* Index 43 - null */ PARAM_UINT8,
    /* Index 44 - null */ PARAM_UINT8,
    /* Index 45 - null */ PARAM_UINT8,
    /* Index 46 - null */ PARAM_UINT8,
    /* Index 47 - null */ PARAM_UINT8,
    /* Index 48 - null */ PARAM_UINT8,
    /* Index 49 - null */ PARAM_UINT8,
    /* Index 50 - null */ PARAM_UINT8,
    /* Index 51 - null */ PARAM_UINT8,
    /* Index 52 - null */ PARAM_UINT8,
    /* Index 53 - null */ PARAM_UINT8,
    /* Index 54 - null */ PARAM_UINT8,
    /* Index 55 - null */ PARAM_UINT8,
    /* Index 56 - null */ PARAM_UINT8,
    /* Index 57 - null */ PARAM_UINT8,
    /* Index 58 - null */ PARAM_UINT8,
    /* Index 59 - null */ PARAM_UINT8,
    /* Index 60 - null */ PARAM_UINT8,
    /* Index 61 - null */ PARAM_UINT8,
    /* Index 62 - null */ PARAM_UINT8,
    /* Index 63 - null */ PARAM_UINT8,
    /* Index 64 - null */ PARAM_UINT8,
    /* Index 65 - null */ PARAM_UINT8,
    /* Index 66 - null */ PARAM_UINT8,
    /* Index 67 - null */ PARAM_UINT8,
    /* Index 68 - null */ PARAM_UINT8,
    /* Index 69 - null */ PARAM_UINT8,
    /* Index 70 - null */ PARAM_UINT8,
    /* Index 71 - null */ PARAM_UINT8,
    /* Index 72 - null */ PARAM_UINT8,
    /* Index 73 - null */ PARAM_UINT8,
    /* Index 74 - null */ PARAM_UINT8,
    /* Index 75 - null */ PARAM_UINT8,
    /* Index 76 - null */ PARAM_UINT8,
    /* Index 77 - null */ PARAM_UINT8,
    /* Index 78 - null */ PARAM_UINT8,
    /* Index 79 - null */ PARAM_UINT8,
    /* Index 80 - null */ PARAM_UINT8,
    /* Index 81 - null */ PARAM_UINT8,
    /* Index 82 - null */ PARAM_UINT8,
    /* Index 83 - null */ PARAM_UINT8,
    /* Index 84 - null */ PARAM_UINT8,
    /* Index 85 - null */ PARAM_UINT8,
    /* Index 86 - null */ PARAM_UINT8,
    /* Index 87 - null */ PARAM_UINT8,
    /* Index 88 - null */ PARAM_UINT8,
    /* Index 89 - null */ PARAM_UINT8,
    /* Index 90 - null */ PARAM_UINT8,
    /* Index 91 - null */ PARAM_UINT8,
    /* Index 92 - null */ PARAM_UINT8,
    /* Index 93 - null */ PARAM_UINT8,
    /* Index 94 - null */ PARAM_UINT8,
    /* Index 95 - null */ PARAM_UINT8,
    /* Index 96 - null */ PARAM_UINT8,
    /* Index 97 - null */ PARAM_UINT8,
    /* Index 98 - null */ PARAM_UINT8,
    /* Index 99 - null */ PARAM_UINT8,
    /* Index 100 - null */ PARAM_UINT8,
    /* Index 101 - null */ PARAM_UINT8,
    /* Index 102 - null */ PARAM_UINT8,
    /* Index 103 - null */ PARAM_UINT8,
    /* Index 104 - null */ PARAM_UINT8,
    /* Index 105 - null */ PARAM_UINT8,
    /* Index 106 - null */ PARAM_UINT8,
    /* Index 107 - null */ PARAM_UINT8
};
const byte KonnektingDevice::_numberOfParams = sizeof (_paramSizeList); // do not change this code