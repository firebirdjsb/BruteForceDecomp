#ifndef BF_XBE_GUEST32_TABLE_LISTS_H
#define BF_XBE_GUEST32_TABLE_LISTS_H

#include "bf_xbe_guest32_record_leaves.h"

void FUN_0008f720(bf_guest32_constructor_state& guest);
void FUN_00087fb0(bf_guest32_constructor_state& guest);

namespace bf_guest32_table_lists {

inline std::uint32_t bucket(bf_guest32_constructor_state& guest, std::uint32_t key)
{
    using namespace bf_guest32_constructor;
    // IMUL and ADD leave the low DWORD. SHR by 21 replaces their
    // arithmetic flags and leaves OF/AF undefined.
    const std::uint32_t mixed = key * 0x19660du + 0x3c6ef35fu;
    guest.eax = mixed >> 21u;
    constexpr auto defined = arithmetic & ~(auxiliary | overflow);
    guest.eflags = (guest.eflags & ~defined) | szp(guest.eax, 0x80000000u) |
                   ((mixed >> 20u) & 1u);
    guest.eflags_defined = (guest.eflags_defined & ~arithmetic) | defined;
    return 0x00414da0u + guest.eax * 4u;
}

} // namespace bf_guest32_table_lists

#endif
