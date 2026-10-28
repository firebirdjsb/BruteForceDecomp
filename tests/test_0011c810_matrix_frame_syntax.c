#include "bf_x86_0011c810_matrix_frame.h"
int bf_matrix_bridge_fixture(uint32_t guest_sp,const bf_0011c810_guest_bytes *io)
{
    const bf_0011c810_frame f=bf_0011c810_frame_at(guest_sp);
    return (int)bf_0011c810_copy_produced_matrix(f,io).status;
}
