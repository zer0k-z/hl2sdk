
#ifndef CONCRETEENTITYLIST_H
#define CONCRETEENTITYLIST_H

#include "tier0/platform.h"
#include <stdint.h>

class CBaseEntity;
// Size: 0x78
struct EntityChunk
{
	CBaseEntity *ent;
	uint8_t unk008[8];
	uint32_t index; // up to 15 bits are entity index, could be some type of handle or something else
	uint8_t unk020[0x64];
};

class CConcreteEntityList
{
public:
	EntityChunk *chunks[64];
	// _BYTE gap0[56];
	uint64_t qword200;
	uint64_t qword208;
	uint64_t qword210;
	uint32_t dword218;
	uint8_t gap21C[4];
	uint64_t qword220;
	uint64_t qword228;
	uint32_t dword230;
	uint8_t gap234[4];
	
	uint64_t qword238;
	uint64_t qword240;
	uint32_t dword248;
	uint64_t qword250;
	uint64_t qword258;
	uint32_t dword260;
	uint32_t dword264;
	uint32_t maxNetworkableEntities; // 0x268
	uint32_t maxNonNetworkableEntities; // 0x26c
	uint32_t dword270;
	uint32_t dword274[512];
	uint32_t dwordA74;
};

#endif // CONCRETEENTITYLIST_H