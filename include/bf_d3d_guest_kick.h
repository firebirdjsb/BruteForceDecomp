#ifndef BF_D3D_GUEST_KICK_H
#define BF_D3D_GUEST_KICK_H

#include "bf_xbe_guest32_constructors.h"

// One ordered guest SFENCE. The backend must flush guest writes before the
// next device access. Guest DWORD reads and writes must route MMIO and must
// not be cached, combined, or reordered. Platform implementation unresolved.
void bf_guest_store_fence();

// Explicit guest register/stack models, with ESP pointing at the return VA.
// Callers modeling a retail CALL must push its five-byte CALL's successor VA.
void D3D8LTCG__CDevice_KickOff_0__LTCG_edx1(bf_guest32_constructor_state& guest);
void FUN_00372180(bf_guest32_constructor_state& guest);
void FUN_00371b60(bf_guest32_constructor_state& guest);
void FUN_00372050(bf_guest32_constructor_state& guest);

#endif
