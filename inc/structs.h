#ifndef STRUCTS_H
#define STRUCTS_

typedef enum MUSIC_TRACKS {
	MUSIC_BACKGROUND,
	MUSIC_BACKGROUND_LOWCOST,
	MUSIC_CRASH,
	MUSIC_GAMEOVER,
	MUSIC_MAX
} MUSIC_TRACK;
static Mix_Music *music_tracks[MUSIC_MAX] = { NULL };
static Sint32 volume_old = -1;

typedef enum TEXTURES {
	TEXTURE_NUMBER_0,
	TEXTURE_NUMBER_1,
	TEXTURE_NUMBER_2,
	TEXTURE_NUMBER_3,
	TEXTURE_NUMBER_4,
	TEXTURE_NUMBER_5,
	TEXTURE_NUMBER_6,
	TEXTURE_NUMBER_7,
	TEXTURE_NUMBER_8,
	TEXTURE_NUMBER_9,
	TEXTURE_SCREEN,
	TEXTURE_PLAYER_CAR,
	TEXTURE_PLAYER_CAR_FLY,
	TEXTURE_PLAYER_CAR_FLY_UP,
	TEXTURE_PLAYER_CAR_FLY_DOWN,
	TEXTURE_PLAYER_CAR_HEAD_LIGHT,
	TEXTURE_PLAYER_CAR_CRASH,
	TEXTURE_LOGO,
	TEXTURE_STATUS_SCORE,
	TEXTURE_STATUS_BOX,
	TEXTURE_STATUS_LEVEL,
	TEXTURE_STATUS_FLY,
	TEXTURE_OPPOSITE_CAR_0,
	TEXTURE_OPPOSITE_CAR_1,
	TEXTURE_OPPOSITE_CAR_2,
	TEXTURE_OPPOSITE_CAR_3,
	TEXTURE_OPPOSITE_CAR_4,
	TEXTURE_OPPOSITE_CAR_5,
	TEXTURE_OPPOSITE_CAR_6,
	TEXTURE_GAMEOVER,
	TEXTURE_GAMEOVER_FIELD,
	TEXTURE_GAMEOVER_CRASH,
	TEXTURE_MAX
} TEXTURE;
static SDL_Texture *textures[TEXTURE_MAX] = { NULL };

typedef struct {
	Sint16 pos_x;
	Sint16 pos_y;
	Sint16 dx;
	Sint16 dy;
	TEXTURE image;
	TEXTURE image_fly;
	TEXTURE image_head_light;
} VERTICAL_CAR_STRUCT;

typedef struct {
	Sint16 dx;
	Sint16 dy;
	Sint16 speed;
	Sint16 dx_from_road;
	TEXTURE image;
} VERTICAL_OPPOSITE_CAR_TYPE_STRUCT;

typedef struct {
	Sint16 dx;
	Sint16 dy;
	Sint16 speed;
	Sint16 dx_from_road;
	TEXTURE image;
	Sint16 pos_x;
	Sint16 pos_y;
	Uint8 road_id;
	SDL_bool is_empty;
	SDL_bool is_add_score;
} VERTICAL_OPPOSITE_CAR_STRUCT;

#ifdef __EMSCRIPTEN__
typedef struct {
	SDL_Texture *texture;
} CONTEXT_EMSCRIPTEN;
#endif 

#endif //STRUCTS_H