#pragma once


		/* MY BUILD OPTIONS */

#define	OEM				1
#define DEMO			0
#define ALLOW_2P_INDEMO 0			// special build for Apple's .Mac promotion

#if !defined(__LITTLE_ENDIAN__) && !(__BIG_ENDIAN__)
#define __LITTLE_ENDIAN__ 1
#endif

		/* HEADERS */

#include <Pomme.h>
#include <SDL.h>
#include <SDL_opengl.h>
#include <SDL_opengl_glext.h>
#include <GL/glu.h> //---TEMP

typedef void* AGLContext;
typedef void* AGLPixelFormat;
typedef void* AGLDrawable;
typedef void* ImageDescriptionHandle;
typedef float CGGammaValue;
#define aglGetError() glGetError()
#define AGL_NO_ERROR GL_NO_ERROR
#define aglSwapBuffers(whatever) SDL_GL_SwapWindow(gSDLWindow)
#define aglSetCurrentContext(whatever) SDL_GL_MakeCurrent(gSDLWindow, (whatever))
#define FlightPhysicsCalibration(whatever)

#if 0
#include <Carbon/Carbon.h>

#include <IOKit/IOKitLib.h>
#include <IOKit/IOCFPlugIn.h>
#include <IOKit/hid/IOHIDLib.h>
#include <IOKit/hid/IOHIDKeys.h>
#include <Kernel/IOKit/hidsystem/IOHIDUsageTables.h>

#include <Quicktime/Movies.h>
#include <AGL/agl.h>
//#include <AGL/glu.h>
#include <OpenGL/glext.h>
#endif


#include "globals.h"
#include "structs.h"

#include "collision.h"
#include "ogl_support.h"
#include "metaobjects.h"
#include "ogl_shaders.h"
#include "main.h"
#include "terrain.h"
#include "player.h"
#include "mobjtypes.h"
#include "objects.h"
#include "misc.h"
#include "sound2.h"
#include "mycoreaudio.h"
#include "sobjtypes.h"
#include "sprites.h"
#include "shards.h"
#include "sparkle.h"
#include "bg3d.h"
#include "effects.h"
#include "camera.h"
#include 	"input.h"
#include "skeleton.h"
#include "file.h"
#include "fences.h"
#include "splineitems.h"
#include "items.h"
#include "windows.h"
#include "enemy.h"
#include "water.h"
#include "miscscreens.h"
#include	"infobar.h"
#include	"pick.h"
#include "internet.h"
#include "splinemanager.h"
#include "3dmath.h"

#define IMPME DoFatalAlert("IMPLEMENT ME in %s", __func__)
#define SOFTIMPME printf("soft IMPLEMENT ME in %s\n", __func__)

#define GAME_ASSERT(condition) do { if (!(condition)) DoFatalAlert("%s:%d: %s", __func__, __LINE__, #condition); } while(0)
#define GAME_ASSERT_MESSAGE(condition, message) do { if (!(condition)) DoFatalAlert("%s:%d: %s", __func__, __LINE__, message); } while(0)

extern	AGLContext				gAGLContext;
extern	Boolean					gAltivec;
extern	Boolean					gDisableAnimSounds;
extern	Boolean					gDisableHiccupTimer;
extern	Boolean					gDrawLensFlare;
extern	Boolean					gForceVertexArrayUpdate[];
extern	Boolean					gGameIsRegistered;
extern	Boolean					gGameOver;
extern	Boolean					gLevelCompleted, gTimeDemo;
extern	Boolean					gLittleSnitch;
extern	Boolean					gLowRAM;
extern	Boolean					gMuteMusicFlag;
extern	Boolean					gMyState_Lighting;
extern	Boolean					gPanther;
extern	Boolean					gPlayFullScreen;
extern	Boolean					gPlayerIsDead[];
extern	Boolean					gPlayingFromSavedGame;
extern	Boolean					gSongPlayingFlag;
extern	Boolean					gUsingVertexArrayRange;
extern	Byte					**gMapSplitMode;
extern	Byte					gActiveSplitScreenMode;
extern	Byte					gAnaglyphPass;
extern	Byte					gCurrentSplitScreenPane;
extern	Byte					gDebugMode;
extern	Byte					gNumPlayers;
extern	Byte					gTotalSides;
extern	CGGammaValue			gOriginalRedTable[256], gOriginalGreenTable[256], gOriginalBlueTable[256];
extern	CGrafPtr				gGameWindowGrafPtr;
extern	CollisionRec			gCollisionList[];
extern	FSSpec					gDataSpec;
extern	GDHandle 				gGDevice;
extern	GLuint					gVertexArrayRangeObjects[];
extern	LineMarkerDefType		gLineMarkerList[MAX_LINEMARKERS];
extern	MOMaterialObject		*gMostRecentMaterial;
extern	MOMaterialObject		*gSuperTileTextureObjects[MAX_SUPERTILE_TEXTURES];
extern	MOPictureObject			*gBackgoundPicture;
extern	MOVertexArrayData		gWaterTriMeshData[];
extern	MetaObjectPtr			gBG3DGroupList[MAX_BG3D_GROUPS][MAX_OBJECTS_IN_GROUP];
extern	NewObjectDefinitionType	gNewObjectDefinition;
extern	OGLBoundingBox			gObjectGroupBBoxList[MAX_BG3D_GROUPS][MAX_OBJECTS_IN_GROUP];
extern	OGLBoundingBox			gWaterBBox[];
extern	OGLColorRGB				gGlobalColorFilter;
extern	OGLColorRGBA			gMyState_Color;
extern	OGLMatrix4x4			gLocalToFrustumMatrix;
extern	OGLMatrix4x4			gLocalToViewMatrix;
extern	OGLMatrix4x4			gViewToFrustumMatrix;
extern	OGLMatrix4x4			gWorldToFrustumMatrix;
extern	OGLMatrix4x4			gWorldToViewMatrix;
extern	OGLMatrix4x4			gWorldToWindowMatrix[];
extern	OGLPoint3D				gBestCheckpointCoord[];
extern	OGLPoint3D				gCoord;
extern	OGLSetupOutputType		*gGameViewInfoPtr;
extern	OGLVector3D				gDelta;
extern	OGLVector3D				gRecentTerrainNormal;
extern	OGLVector3D				gWorldSunDirection;
extern	ObjNode					*gCurrentNode;
extern	ObjNode					*gFirstNodePtr;
extern	ParticleGroupType		*gParticleGroups[];
extern	PlayerInfoType			gPlayerInfo[];
extern	PrefsType				gGamePrefs;
extern	SDL_Window*				gSDLWindow;
extern	SparkleType				gSparkles[MAX_SPARKLES];
extern	SpriteType				*gSpriteGroupList[MAX_SPRITE_GROUPS];
extern	Str255					gSerialFileName;
extern	SuperTileItemIndexType	**gSuperTileItemIndexGrid;
extern	SuperTileMemoryType		gSuperTileMemoryList[MAX_SUPERTILES];
extern	SuperTileStatus			**gSuperTileStatusGrid;
extern	TerrainItemEntryType 	*gMasterItemList;
extern	WaterDefType			**gWaterListHandle;
extern	WaterDefType			*gWaterList;
extern	WindowPtr				gGameWindow;
extern	float					**gMapYCoords;
extern	float					**gMapYCoordsOriginal;
extern	float					**gVertexShading;
extern	float					gAnaglyphEyeSeparation, gAnaglyphFocallength;
extern	float					gAutoFadeEndDist;
extern	float					gAutoFadeRange_Frac;
extern	float					gAutoFadeStartDist;
extern	float					gAutoFireDelay[];
extern	float					gBestCheckpointAim[];
extern	float					gCameraDistFromMe;
extern	float					gCameraStartupTimer;
extern	float					gCurrentMaxSpeed[];
extern	float					gCurrentPaneAspectRatio;
extern	float					gDeathTimer[];
extern	float					gDemoVersionTimer;
extern	float					gFramesPerSecond;
extern	float					gFramesPerSecondFrac;
extern	float					gGammaFadePercent;
extern	float					gGammaTweak;
extern	float					gGlobalTransparency;
extern	float					gLoadingThermoPercent;
extern	float					gMapToUnitValue;
extern	float					gMapToUnitValueFrac;
extern	float					gMinHeightOffGround;
extern	float					gObjectGroupBSphereList[MAX_BG3D_GROUPS][MAX_OBJECTS_IN_GROUP];
extern	float					gRaceReadySetGoTimer;
extern	float					gScratchF;
extern	float					gTargetMaxSpeed[];
extern	float					gTerrainPolygonSize;
extern	float					gTerrainSuperTileUnitSize;
extern	float					gTerrainSuperTileUnitSizeFrac;
extern	float					gWormholeTimer;
extern	int						gGameWindowHeight;
extern	int						gGameWindowWidth;
extern	int						gMaxEnemies;
extern	int						gNumEnemies;
extern	int						gNumLineMarkers;
extern	int						gNumLoopingEffects;
extern	int						gNumObjectNodes;
extern	int						gNumObjectsInBG3DGroupList[MAX_BG3D_GROUPS];
extern	int						gNumPointers;
extern	int						gNumSparkles;
extern	int						gNumTerrainItems;
extern	int						gNumWorldCalcsThisFrame;
extern	int						gPolysThisFrame;
extern	int						gScratch;
extern	int 					gSuperTileActiveRange;
extern	int32_t					gNumSpritesInGroupList[];
extern	long					gNumSplines;
extern	long					gNumSuperTilesDeep;
extern	long					gNumSuperTilesWide;
extern	long					gNumWaterPatches;
extern	long					gTerrainUnitWidth;
extern	long					gTerrainUnitDepth;
extern	long					gNumUniqueSuperTiles;
extern	long					gPrefsFolderDirID;
extern	long					gRAMAlloced;
extern	long					gTerrainTileDepth;
extern	long					gTerrainTileWidth;
extern	short					**gSuperTileTextureGrid;
extern	short					gBestCheckpointNum[];
extern	short					gCurrentSong;
extern	short					gNumActiveParticleGroups;
extern	short					gNumCollisions;
extern	short					gNumFencesDrawn;
extern	short					gNumSuperTilesDrawn;
extern	short					gNumWaterDrawn;
extern	short					gPrefsFolderVRefNum;
extern	short					gVSMode, gLevelNum;
extern	signed char				gNumEnemyOfKind[];
extern	uint32_t				gDisplayVRAM;
extern	uint32_t				gGameFrameNum;
extern	uint32_t				gGlobalMaterialFlags;
extern	uint32_t				gSerialWasVerifiedMode;
extern	uint32_t				gSharewareMode;
extern	uint32_t				gTerrainPolygonSizeInt;
extern	uint32_t				gVRAMAfterBuffers;
extern	uint32_t 				gAutoFadeStatusBits;