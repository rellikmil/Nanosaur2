#pragma once

typedef enum GameLanguageID
{
	LANGUAGE_ILLEGAL = -1,
	LANGUAGE_ENGLISH = 0,
	LANGUAGE_FRENCH,
	LANGUAGE_GERMAN,
	LANGUAGE_SPANISH,
	LANGUAGE_ITALIAN,
	LANGUAGE_SWEDISH,
	LANGUAGE_DUTCH,
	NUM_LANGUAGES
} GameLanguageID;

typedef enum LocStrID
{
	STR_NULL					= 0,

	STR_LANGUAGE_NAME,

	STR_ENGLISH,
	STR_FRENCH,
	STR_GERMAN,
	STR_SPANISH,
	STR_ITALIAN,
	STR_SWEDISH,
	STR_DUTCH,

	STR_BACK_SYMBOL,

	STR_PLAY_GAME,
	STR_SETTINGS,
	STR_INFO,
	STR_QUIT,

	STR_ADVENTURE,
	STR_NANO_VS_NANO,
	STR_SAVED_GAMES,

	STR_STORY,
	STR_STORY_SUBTITLED,
	STR_CREDITS,
	STR_PANGEA_WEBSITE,

	STR_RACE1,
	STR_RACE2,
	STR_BATTLE1,
	STR_BATTLE2,
	STR_CAPTURE1,
	STR_CAPTURE2,

	STR_RESUME,
	STR_RETIRE,

	STR_PRESS_ANY_KEY,
	STR_PRESS_SPACE,
	STR_PRESS_START,
	STR_PRESS_SPACE_TO_CONTINUE,
	STR_PRESS_START_TO_CONTINUE,
	STR_PRESS_ESC_TO_GO_BACK,

	STR_SAVE_GAME,
	STR_CONTINUE_WITHOUT_SAVING,

	STR_FILE,
	STR_EMPTY_SLOT,
	STR_LEVEL,

	STR_JANUARY,
	STR_FEBRUARY,
	STR_MARCH,
	STR_APRIL,
	STR_MAY,
	STR_JUNE,
	STR_JULY,
	STR_AUGUST,
	STR_SEPTEMBER,
	STR_OCTOBER,
	STR_NOVEMBER,
	STR_DECEMBER,

	STR_LANGUAGE,
	STR_GENERAL,
	STR_CONTROLS,
	STR_SOUND,
	STR_GRAPHICS,

	STR_DIFFICULTY,
	STR_NORMAL_DIFFICULTY,
	STR_KIDDIE_MODE,
	STR_SUBTITLES,

	STR_CROSSHAIRS,
	STR_CROSSHAIRS_OFF,
	STR_CROSSHAIRS_ON,

	STR_SPLITSCREEN_MODE,
	STR_SPLITSCREEN_HORIZ,
	STR_SPLITSCREEN_VERT,

	STR_FULLSCREEN_HINT,
	STR_FULLSCREEN,
	STR_VSYNC,
	STR_ANTIALIASING,
	STR_MSAA_2X,
	STR_MSAA_4X,
	STR_MSAA_8X,
	STR_PREFERRED_DISPLAY,
	STR_DISPLAY,
	STR_ANTIALIASING_CHANGE_WARNING,

	STR_HUD_POSITION,
	STR_HUD_FULLSCREEN,
	STR_HUD_4X3,

	STR_HUD_SCALE,
	STR_HUD_SCALE_50,
	STR_HUD_SCALE_60,
	STR_HUD_SCALE_70,
	STR_HUD_SCALE_80,
	STR_HUD_SCALE_90,
	STR_HUD_SCALE_100,
	STR_HUD_SCALE_110,
	STR_HUD_SCALE_120,
	STR_HUD_SCALE_130,
	STR_HUD_SCALE_140,
	STR_HUD_SCALE_150,
	STR_HUD_SCALE_160,
	STR_HUD_SCALE_170,
	STR_HUD_SCALE_180,
	STR_HUD_SCALE_190,
	STR_HUD_SCALE_200,

	STR_3D_GLASSES,
	STR_3D_GLASSES_CALIBRATE,
	STR_3D_GLASSES_MODE,
	STR_3D_GLASSES_DISABLED,
	STR_3D_GLASSES_ANAGLYPH_COLOR,
	STR_3D_GLASSES_ANAGLYPH_MONO,
	STR_3D_GLASSES_SHUTTER,
	STR_3D_GLASSES_CHANNEL_BALANCING,
	STR_3D_GLASSES_R,
	STR_3D_GLASSES_G,
	STR_3D_GLASSES_B,

	STR_MUSIC,
	STR_SFX,
	STR_VOLUME_000,
	STR_VOLUME_020,
	STR_VOLUME_040,
	STR_VOLUME_060,
	STR_VOLUME_080,
	STR_VOLUME_100,
	STR_MOUSE_SENSITIVITY_0,
	STR_MOUSE_SENSITIVITY_1,
	STR_MOUSE_SENSITIVITY_2,
	STR_MOUSE_SENSITIVITY_3,
	STR_MOUSE_SENSITIVITY_4,
	STR_MOUSE_SENSITIVITY_5,
	STR_MOUSE_SENSITIVITY_6,
	STR_MOUSE_SENSITIVITY_7,
	STR_MOUSE_SENSITIVITY_8,
	STR_MOUSE_SENSITIVITY_9,
	STR_MOUSE_SENSITIVITY_10,
	STR_CONFIGURE_KEYBOARD,
	STR_CONFIGURE_GAMEPAD,
	STR_CONFIGURE_MOUSE,
	STR_CONFIGURE_KEYBOARD_HELP,
	STR_CONFIGURE_GAMEPAD_HELP,
	STR_CONFIGURE_KEYBOARD_HELP_CANCEL,
	STR_CONFIGURE_GAMEPAD_HELP_CANCEL,
	STR_NO_GAMEPAD_DETECTED,
	STR_LEFT_STICK_ALWAYS_STEERS,
	STR_GAMEPAD_RUMBLE,
	STR_VERTICAL_STEERING,
	STR_NORMAL,
	STR_INVERTED,
	STR_MOUSE_SENSITIVITY,

	STR_BACK,
	STR_OK,
	STR_CANCEL,
	STR_YES,
	STR_NO,
	STR_ON,
	STR_OFF,

	STR_PRESS,
	STR_CLICK,
	STR_RESET_KEYBINDINGS,
	STR_MOUSE_BUTTON_LEFT,
	STR_MOUSE_BUTTON_MIDDLE,
	STR_MOUSE_BUTTON_RIGHT,
	STR_BUTTON,
	STR_MOUSE_WHEEL_UP,
	STR_MOUSE_WHEEL_DOWN,
	STR_MOUSE_WHEEL_LEFT,
	STR_MOUSE_WHEEL_RIGHT,
	STR_UNBOUND_PLACEHOLDER,

	STR_CONTROLLER_BUTTON_A,
	STR_CONTROLLER_BUTTON_B,
	STR_CONTROLLER_BUTTON_X,
	STR_CONTROLLER_BUTTON_Y,
	STR_CONTROLLER_BUTTON_BACK,
	STR_CONTROLLER_BUTTON_GUIDE,
	STR_CONTROLLER_BUTTON_START,
	STR_CONTROLLER_BUTTON_LEFTSTICK,
	STR_CONTROLLER_BUTTON_RIGHTSTICK,
	STR_CONTROLLER_BUTTON_LEFTSHOULDER,
	STR_CONTROLLER_BUTTON_RIGHTSHOULDER,
	STR_CONTROLLER_BUTTON_DPAD_UP,
	STR_CONTROLLER_BUTTON_DPAD_DOWN,
	STR_CONTROLLER_BUTTON_DPAD_LEFT,
	STR_CONTROLLER_BUTTON_DPAD_RIGHT,
	STR_CONTROLLER_AXIS_LEFTSTICK_UP,
	STR_CONTROLLER_AXIS_LEFTSTICK_DOWN,
	STR_CONTROLLER_AXIS_LEFTSTICK_LEFT,
	STR_CONTROLLER_AXIS_LEFTSTICK_RIGHT,
	STR_CONTROLLER_AXIS_RIGHTSTICK_UP,
	STR_CONTROLLER_AXIS_RIGHTSTICK_DOWN,
	STR_CONTROLLER_AXIS_RIGHTSTICK_LEFT,
	STR_CONTROLLER_AXIS_RIGHTSTICK_RIGHT,
	STR_CONTROLLER_AXIS_LEFTTRIGGER,
	STR_CONTROLLER_AXIS_RIGHTTRIGGER,

	STR_KEYBINDING_DESCRIPTION_0,
	STR_KEYBINDING_DESCRIPTION_1,
	STR_KEYBINDING_DESCRIPTION_2,
	STR_KEYBINDING_DESCRIPTION_3,
	STR_KEYBINDING_DESCRIPTION_4,
	STR_KEYBINDING_DESCRIPTION_5,
	STR_KEYBINDING_DESCRIPTION_6,
	STR_KEYBINDING_DESCRIPTION_7,
	STR_KEYBINDING_DESCRIPTION_8,
	STR_KEYBINDING_DESCRIPTION_9,

	STR_STORY_1,
	STR_STORY_2,
	STR_STORY_3,
	STR_STORY_4,
	STR_STORY_5,
	STR_STORY_6,
	STR_STORY_7,

	STR_CONNECT_2_CONTROLLERS,
	STR_CONNECT_1_CONTROLLER,

	STR_ANAGLYPH_HELP_WHILEWEARING,
	STR_ANAGLYPH_HELP_ADJUSTRB,
	STR_ANAGLYPH_HELP_ADJUSTG,
	STR_ANAGLYPH_HELP_CHANNELBALANCING,

	STR_NO_ANAGLYPH_CALIBRATION_IN_GAME,

	NUM_LOCALIZED_STRINGS,
} LocStrID;

void LoadLocalizedStrings(GameLanguageID languageID);
void DisposeLocalizedStrings(void);

const char* Localize(LocStrID stringID);
int LocalizeWithPlaceholder(LocStrID stringID, char* buf, size_t bufSize, const char* format, ...);

bool IsNativeEnglishSystem(void);
GameLanguageID GetBestLanguageIDFromSystemLocale(void);
