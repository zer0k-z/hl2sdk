#include "entitysystem.h"

// idk
typedef long __int64;

// It's not void, but I just write it as that right now
void CEntityClass::Unserialize() {
  __int64 entity_index; // v8, e.g. ent_attachments entity_index
  const char* entity_className; // v7, e.g. weapon_glock

  // this gets turned into a string if it's trying to get printed out
  __int64 entity_classInstance; // v9, e.g. CWeaponGlock
  

}
