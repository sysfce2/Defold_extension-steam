#ifndef DEFOLD_STEAMMUSIC_H
#define DEFOLD_STEAMMUSIC_H

#if defined(DM_PLATFORM_OSX) || defined(DM_PLATFORM_WINDOWS) || defined(DM_PLATFORM_LINUX)

#include <dmsdk/sdk.h>

int SteamMusic_Init(lua_State* L);

#endif

#endif
