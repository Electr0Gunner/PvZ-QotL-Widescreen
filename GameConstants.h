#pragma once

constexpr const double PI = 3.141592653589793;

const int			BOARD_WIDTH = 1280; // PC: 800 - Console : 1280
const int			BOARD_HEIGHT = 720; // PC : 600 - Console : 720
const int			BOARD_OFFSET_X = 220; // PC: 220
const int			BOARD_OFFSET_Y = 60; // Console : 60
const int			BOARD_ADDITIONAL_WIDTH = 240; // Console : 240
const int			WIDE_BOARD_WIDTH = 800 + BOARD_ADDITIONAL_WIDTH;
const int			BOARD_EDGE = -100 + BOARD_ADDITIONAL_WIDTH;
const int			BOARD_IMAGE_WIDTH_OFFSET = 1180 + BOARD_ADDITIONAL_WIDTH;
const int           BOARD_ICE_START = 800 + BOARD_ADDITIONAL_WIDTH;
const int           LAWN_XMIN = 40;
const int           LAWN_YMIN = 80;
const int           HIGH_GROUND_HEIGHT = 30;
const int			STREET_ZOMBIE_START_X = 1000; // PC: 830 - Console : 1000
const int			STREET_ZOMBIE_ROOF_START_X = 900;
const int			STREET_ZOMBIE_START_Y = 70;
const int			STREET_ZOMBIE_GRID_SIZE_X = 30; // PC : 56 - Console : 30
const int			STREET_ZOMBIE_GRID_SIZE_Y = 90;
const int			STREET_ZOMBIE_ROOF_OFFSET = 30; // PC : 30 - Console : 15
const int			ROOF_POLE_START = WIDE_BOARD_WIDTH + 70 - BOARD_ADDITIONAL_WIDTH;
const int			ROOF_POLE_END = -BOARD_WIDTH;
const int			ROOF_TREE_START = WIDE_BOARD_WIDTH + 130 - BOARD_ADDITIONAL_WIDTH;
const int			ROOF_TREE_END = -670;

const int           SEEDBANK_MAX = 10;
const int           SEED_BANK_OFFSET_X = 0 + BOARD_ADDITIONAL_WIDTH;
const int           SEED_BANK_OFFSET_X_END = 10 + BOARD_ADDITIONAL_WIDTH;
const int           SEED_CHOOSER_OFFSET_Y = 720; // PC: 516 - Console : 720
const int           SEED_BANK_OFFSET = BOARD_OFFSET_Y;
const int           SEED_PACKET_WIDTH = 50;
const int           SEED_PACKET_HEIGHT = 70;
const int           IMITATER_DIALOG_WIDTH = 500;
const int           IMITATER_DIALOG_HEIGHT = 600;

const int			ADVENTURE_AREAS = 5;
const int			LEVELS_PER_AREA = 10;
const int           NUM_LEVELS = ADVENTURE_AREAS * LEVELS_PER_AREA;
const int			FINAL_LEVEL = NUM_LEVELS;
const int           FLAG_RAISE_TIME = 100;
const int           LAST_STAND_FLAGS = 5;
const int           ZOMBIE_COUNTDOWN_FIRST_WAVE = 1800;
const int           ZOMBIE_COUNTDOWN = 2500;
const int           ZOMBIE_COUNTDOWN_RANGE = 600;
const int           ZOMBIE_COUNTDOWN_BEFORE_FLAG = 4500;
const int           ZOMBIE_COUNTDOWN_BEFORE_REPICK = 5499;
const int           ZOMBIE_COUNTDOWN_MIN = 400;
const int           FOG_BLOW_RETURN_TIME = 2000;
const int           SUN_COUNTDOWN = 425;
const int           SUN_COUNTDOWN_RANGE = 275;
const int           SUN_COUNTDOWN_MAX = 950;
const int           SURVIVAL_NORMAL_FLAGS = 5;
const int           SURVIVAL_HARD_FLAGS = 10;

const int           STORESCREEN_ITEMOFFSET_1_X = 422 + BOARD_OFFSET_X;
const int           STORESCREEN_ITEMOFFSET_1_Y = 210 + BOARD_OFFSET_Y;
const int           STORESCREEN_ITEMOFFSET_2_X = 382 + BOARD_OFFSET_X;
const int           STORESCREEN_ITEMOFFSET_2_Y = 331 + BOARD_OFFSET_Y;
const int           STORESCREEN_ITEMSIZE = 86;
const int           STORESCREEN_COINBANK_X = 650 + BOARD_ADDITIONAL_WIDTH + BOARD_OFFSET_X;
const int           STORESCREEN_COINBANK_Y = BOARD_HEIGHT - 41;
const int           STORESCREEN_PAGESTRING_X = 470 + BOARD_OFFSET_X;
const int           STORESCREEN_PAGESTRING_Y = 500 + (BOARD_OFFSET_Y * 2);

////////////////////////////////////////////////////////////
///						QOTL VARIABLES					 ///
////////////////////////////////////////////////////////////

const bool			HAS_QUICKPLAY = true;
const bool			HAS_ACHIEVEMENTS = true;
const bool			HAS_PAGE_SELECTOR = true;
const bool			HAS_FAST_FOWARD_BUTTON = true;
const bool			HAS_CUSTOM_CURSOR = false;