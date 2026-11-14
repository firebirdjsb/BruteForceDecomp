#ifndef BF_D3D_GUEST_PACKET_WRITERS_H
#define BF_D3D_GUEST_PACKET_WRITERS_H

#include "bf_xbe_guest32_constructors.h"

namespace bf_d3d_guest_packet {

inline void rep_movsd(bf_guest32_constructor_state& guest, std::uint32_t site)
{
    using namespace bf_guest32_constructor;
    const std::uint32_t step = (guest.eflags & direction) != 0u ? 0xfffffffcu : 4u;
    while (guest.ecx != 0u) {
        const auto value = read32(guest, site, guest.esi);
        write32(guest, site, guest.edi, value);
        guest.esi += step;
        guest.edi += step;
        --guest.ecx;
    }
}

} // namespace bf_d3d_guest_packet

void FUN_00370e10(bf_guest32_constructor_state& guest);
void FUN_0036ef80(bf_guest32_constructor_state& guest);

#endif
