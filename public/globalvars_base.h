//========= Copyright � 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================//

#ifndef GLOBALVARS_BASE_H
#define GLOBALVARS_BASE_H

#ifdef _WIN32
#pragma once
#endif

enum GlobalVarsUsageWarning_t
{
	GV_RENDERTIME_CALLED_DURING_SIMULATION,
	GV_CURTIME_CALLED_DURING_RENDERING
};

typedef void (*FnGlobalVarsWarningFunc)(GlobalVarsUsageWarning_t);
class CSaveRestoreData;

//-----------------------------------------------------------------------------
// Purpose: Global variables used by shared code
//-----------------------------------------------------------------------------
class CGlobalVarsBase
{
public:

	CGlobalVarsBase();

public:

	float realtime;
	int framecount;

	float absoluteframetime;
	float absoluteframestarttimestddev;

	int maxClients;

	int unknown1; // command queue related
	int unknown2; // command queue related

	FnGlobalVarsWarningFunc m_pfnWarningFunc;

	float frametime;
	float curtime;
	float rendertime;

	float unknown3; // command queue + interpolation related 
	float unknown4; // command queue + interpolation related

	bool m_bInSimulation;
	bool m_bEnableAssertions;

	int tickcount;
	float interval_per_tick;
};

inline CGlobalVarsBase::CGlobalVarsBase()
{
}

#endif // GLOBALVARS_BASE_H
