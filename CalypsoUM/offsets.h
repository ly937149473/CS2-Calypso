#pragma once

#include "includes.h"

namespace offsets
{
    // these offsets below are almost always change after a game update
    constexpr std::ptrdiff_t dwEntityList = 0x18C1DB8;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17361E8;
    constexpr std::ptrdiff_t dwViewMatrix = 0x19231B0;
    constexpr std::ptrdiff_t dwViewAngles = 0x192F940;


    // these offsets below are often the same after update
    constexpr std::ptrdiff_t m_iIDEntIndex = 0x15A4;
    constexpr std::ptrdiff_t m_vecViewOffset = 0xC58;
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x7E4;
    constexpr std::ptrdiff_t m_lifeState = 0x338;
    constexpr std::ptrdiff_t m_iTeamNum = 0x3CB;
    constexpr std::ptrdiff_t m_vOldOrigin = 0x127C;
    constexpr std::ptrdiff_t m_iHealth = 0x334;
    constexpr std::ptrdiff_t m_vecOrigin = 0x80;

    constexpr std::ptrdiff_t m_pGameSceneNode = 0x318;
    constexpr std::ptrdiff_t m_modelState = 0x160;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x514AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getMaxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
}