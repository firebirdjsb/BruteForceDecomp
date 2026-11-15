#ifndef BF_GUEST32_INDIRECT_WRAPPERS_H
#define BF_GUEST32_INDIRECT_WRAPPERS_H

#include "bf_xbe_guest32_record_leaves.h"

// Dispatch the current EIP with the original CALL return slot already pushed.
// The guest dispatcher owns the target's register, stack and fault effects.
using bf_guest32_dispatch = void(bf_guest32_constructor_state&);

inline bool bf_guest32_call_indirect(bf_guest32_constructor_state& guest,
                                    std::uint32_t site, std::uint32_t next,
                                    std::uint32_t target, bf_guest32_dispatch& dispatch)
{
    bf_guest32_constructor::push(guest, site, next);
    guest.eip = target;
    dispatch(guest);
    return guest.eip == next;
}

inline void bf_guest32_sound_release_wrapper(bf_guest32_constructor_state& guest,
                                            std::uint32_t entry, std::uint32_t bias,
                                            bf_guest32_dispatch& dispatch)
{
    using namespace bf_guest32_constructor;
    const auto interface_address = read32(guest, entry, guest.esp + 4u);
    guest.ecx = interface_address - bias;
    // NEG EAX; SBB EAX,EAX; AND EAX,ECX. Only AND flags reach a memory access.
    guest.eax = interface_address != 0u ? guest.ecx : 0u;
    logic_flags(guest, guest.eax);
    guest.ecx = read32(guest, entry + 0xdu, guest.eax);
    push(guest, entry + 0xfu, guest.eax);
    const auto target = read32(guest, entry + 0x10u, guest.ecx + 8u);
    if (bf_guest32_call_indirect(guest, entry + 0x10u, entry + 0x13u, target, dispatch))
        bf_guest32_leaf_ret(guest, entry + 0x13u, 4u);
}

void DSOUND__IDirectSound_Release(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch);
void DSOUND__IDirectSoundBuffer_Release(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch);
void DSOUND__DSound_CRefCount_Release(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch);
void FUN_00330c3e(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch);
void FUN_00330c53(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch);
void FUN_00380eda(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch);

#endif
