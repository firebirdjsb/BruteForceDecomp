/* Source-connected C11 guest-memory projection at 0x0011C810 call boundaries.
 * Original entries 0x0001D0C0 / 0x0012B2A0 (real game source C bodies).
 * The virtual return and caller guest frame are supplied; not manufactured.
 * Xbox guest x87/SSE exceptions, flags, MXCSR and original interleaved fault
 * behavior remain unverified. Only successful byte/storage outcomes tested.
 */
#include "bf_0011c810_guest_producer_bridge.h"
#include "bf_0011c810_register_calls.h"
#include <stdint.h>
_Static_assert(sizeof(float)==4, "The original x86 scalar slots are 4 bytes");
static bf_0011c810_bridge_result result(bf_0011c810_copy_status s,
                    bf_0011c810_bridge_stage stage,uint32_t at) {
    const bf_0011c810_bridge_result r={s,stage,at};return r;
}
bf_0011c810_bridge_result bf_0011c810_source_matrix(
    const bf_0011c810_guest_bytes *io,uint32_t guest_esp,uint32_t virtual_eax)
{
    if(!io||!io->read||!io->write)
        return result(BF_0011C810_INVALID_IO,BF_BRIDGE_STAGE_NONE,0);
    const bf_0011c810_frame f=bf_0011c810_frame_at(guest_esp);
    float vector[3],matrix[9];
    if(!io->read(io->user,virtual_eax,vector,sizeof vector))
        return result(BF_0011C810_READ_FAULT,BF_BRIDGE_STAGE_SOURCE_INPUT,virtual_eax);
    FUN_0001d0c0(vector,matrix);
    if(!io->write(io->user,f.producer_xyz9,matrix,sizeof matrix))
        return result(BF_0011C810_WRITE_FAULT,BF_BRIDGE_STAGE_MATRIX_OUTPUT,f.producer_xyz9);
    const bf_0011c810_copy_result cp=bf_0011c810_copy_produced_matrix(f,io);
    return result(cp.status,BF_BRIDGE_STAGE_MATRIX_COPY,cp.fault_guest_va);
}
bf_0011c810_bridge_result bf_0011c810_dot_output(
    const bf_0011c810_guest_bytes *io,uint32_t guest_esp)
{
    if(!io||!io->read||!io->write)
        return result(BF_0011C810_INVALID_IO,BF_BRIDGE_STAGE_NONE,0);
    const bf_0011c810_frame f=bf_0011c810_frame_at(guest_esp);
    float vector[3],matrix[9],output[3];
    if(!io->read(io->user,f.consumer_xyz9,matrix,sizeof matrix))
        return result(BF_0011C810_READ_FAULT,BF_BRIDGE_STAGE_DOT_INPUT,f.consumer_xyz9);
    if(!io->read(io->user,f.helper_vec3,vector,sizeof vector))
        return result(BF_0011C810_READ_FAULT,BF_BRIDGE_STAGE_DOT_INPUT,f.helper_vec3);
    FUN_0012b2a0(output,vector,matrix);
    /* Original helper stores +8, +0, +4, in that order. */
    const uint32_t addresses[]={f.helper_out3+8u,f.helper_out3,f.helper_out3+4u};
    const unsigned indices[]={2,0,1};
    for(unsigned i=0;i<3;++i)
        if(!io->write(io->user,addresses[i],&output[indices[i]],4u))
            return result(BF_0011C810_WRITE_FAULT,BF_BRIDGE_STAGE_DOT_OUTPUT,addresses[i]);
    return result(BF_0011C810_COPIED,BF_BRIDGE_STAGE_DOT_OUTPUT,0);
}
