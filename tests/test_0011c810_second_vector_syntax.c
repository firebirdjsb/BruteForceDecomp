#include "bf_0011c810_second_vector.h"
int bf_0011c810_second_fixture(const bf_0011c810_guest_bytes *io,
    uint32_t original_argument,uint32_t original_s,
    bf_0011c810_virtual_executor method,void *context,
    bf_0011c810_vector_stage_executor stage,void *stage_context)
{
    const bf_0011c810_second_result r=bf_0011c810_second_virtual_to_dot(
        io,original_argument,original_s,method,context,stage,stage_context);
    return (int)r.status;
}
