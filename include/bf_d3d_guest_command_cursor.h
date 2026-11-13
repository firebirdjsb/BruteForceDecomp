#ifndef BF_D3D_GUEST_COMMAND_CURSOR_H
#define BF_D3D_GUEST_COMMAND_CURSOR_H

#include <cstring>
#include "bf_xbe_guest32_record_model.h"

// The retail refill reads one DWORD then pushes the full value and its
// logical half. Preserve all bits through the existing signed draft formal.
inline int bf_d3d_guest_signed_dword(uint32_t request)
{
    static_assert(sizeof(int) == sizeof(request));
    int full;
    std::memcpy(&full, &request, sizeof(request));
    return full;
}

#endif
