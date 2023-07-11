#ifndef ENTITYSYSTEM_H
#define ENTITYSYSTEM_H

#include "tier0/platform.h"
#include <stdint.h>

// don't know if i'm doing this right...
abstract_class IEntityResourceManifestBuilder
{
	
};

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

// Size: 	0x1510 (from constructor)
class CEntitySystem : IEntityResourceManifestBuilder
{
public:
	// /*
	virtual void		unk000();
	virtual void		unk001();
	virtual void		unk002();
	virtual void		unk003();
	virtual void		unk004();
	virtual void		unk005();
	virtual void		unk006();
	virtual void		unk007();
	virtual void		unk008();
	virtual void		unk009();
	virtual void		unk010();
	virtual void		unk011();
	virtual void		unk012();
	virtual void		unk013(); // empty function
	virtual void		unk014(); // empty function
	virtual void		unk015(); // empty function
	virtual void		unk016();
	virtual void		unk017();
	virtual void		unk018();
	virtual void		unk019();
	virtual void		unk020();
	virtual void		unk021();
	// */
	
	// void *__vftable;
	uint64_t qword8;
	CConcreteEntityList entityList;
	uint64_t qwordA88;
	uint64_t qwordA90;
	uint64_t qwordA98;
	uint64_t qwordAA0;
	uint32_t dwordAA8;
	uint32_t dwordAAC;
	uint64_t qwordAB0;
	uint64_t qwordAB8;
	uint64_t qwordAC0;
	uint32_t dwordAC8;
	uint32_t dwordACC;
	uint64_t qwordAD0;
	uint64_t qwordAD8;
	uint64_t qwordAE0;
	uint32_t dwordAE8;
	uint32_t dwordAEC;
	uint64_t qwordAF0;
	uint64_t qwordAF8;
	uint64_t qwordB00;
	uint32_t dwordB08;
	uint32_t dwordB0C;
	uint8_t cthreadmutex[56];
	uint32_t dwordB48;
	uint8_t gapB4C[4];
	uint64_t qwordB50;
	uint64_t qwordB58;
	uint64_t qwordB60;
	uint8_t gapB68[4];
	uint32_t dwordB6C;
	uint64_t qwordB70;
	uint8_t byteB78;
	uint8_t gapB79;
	uint16_t wordB7A;
	uint8_t gapB7C[4];
	uint64_t qwordB80;
	uint8_t gapB88[8];
	uint32_t dwordB90;
	uint8_t gapB94[4];
	uint32_t dwordB98;
	uint8_t gapB9C[4];
	uint64_t qwordBA0;
	uint32_t dwordBA8;
	uint32_t dwordBAC;
	uint8_t charBB0[16];
	uint64_t qwordBC0;
	uint64_t qwordBC8;
	uint64_t qwordBD0;
	uint64_t qwordBD8;
	uint32_t dwordBE0;
	uint16_t wordBE4;
	uint8_t byteBE6;
	uint8_t gapBE7;
	uint32_t dwordBE8;
	uint8_t gapBEC[4];
	uint64_t qwordBF0;
	uint64_t qwordBF8;
	uint32_t dwordC00;
	uint8_t gapC04[4];
	uint64_t qwordC08;
	uint64_t qwordC10;
	uint32_t dwordC18;
	uint8_t gapC1C[4];
	uint64_t qwordC20;
	uint64_t qwordC28;
	uint32_t dwordC30;
	uint8_t gapC34[4];
	uint64_t qwordC38;
	uint64_t qwordC40;
	uint32_t dwordC48;
	uint8_t gapC4C[4];
	uint64_t qwordC50;
	uint64_t qwordC58;
	uint32_t dwordC60;
	uint8_t gapC64[4];
	uint64_t qwordC68;
	uint64_t qwordC70;
	uint64_t qwordC78;
	uint64_t qwordC80;
	uint64_t qwordC88;
	uint64_t qwordC90;
	uint64_t qwordC98;
	uint64_t qwordCA0;
	uint64_t qwordCA8;
	uint64_t qwordCB0;
	uint32_t dwordCB8;
	uint8_t byteCBC;
	uint8_t gapCBD[3];
	uint8_t scratchMemoryPool[16]; // CUtlScratchMemoryPool
	uint8_t charCD0[1584]; // some kind of massive struct
	uint64_t qword1300;
	uint64_t qword1308;
	uint64_t qword1310;
	uint32_t dword1318;
	uint8_t byte131C;
	uint8_t gap131D[3];
	uint64_t qword1320;
	uint64_t qword1328;
	uint32_t dword1330;
	uint8_t gap1334[4];
	uint64_t qword1338;
	uint64_t qword1340;
	uint8_t cthreadmutex1348[56];
	int8_t char1380[48];
	uint32_t dword13B0;
	uint8_t gap13B4[12]; // padding for 16 byte alignment?
	int8_t char13C0[48];
	uint8_t char13F0[256];
	uint64_t qword14F0;
	uint64_t qword14F8;
	uint64_t qword1500;
	uint32_t dword1508;
	uint8_t byte150C;
};

class CGameEntitySystem : CEntitySystem
{
public:
	virtual void		unk000() = 0;
	virtual void		unk001() = 0;
	virtual void		unk002() = 0;
	virtual void		unk003() = 0;
	virtual void		unk004() = 0;
	virtual void		unk005() = 0;
	virtual void		unk006() = 0;
	// virtual void		unk007() = 0; // not overloaded
	// virtual void		unk008() = 0; // not overloaded
	virtual void		unk009() = 0;
	virtual void		unk010() = 0;
	virtual void		unk011() = 0;
	virtual void		unk012() = 0;
	virtual void		unk013() = 0;
	virtual void		unk014() = 0;
	virtual void		unk015() = 0;
	virtual void		unk016() = 0;
	virtual void		unk017() = 0;
	virtual void		unk018() = 0;
	virtual void		unk019() = 0;
	virtual void		unk020() = 0;
	virtual void		unk021() = 0;
};

#endif // ENTITYSYSTEM_H