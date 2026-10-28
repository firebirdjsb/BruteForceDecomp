#include "bf_0011c810_virtual_call_link.h"
int bf_0011c810_virtual_syntax(const bf_0011c810_guest_bytes *io,
    bf_0011c810_virtual_executor executor,void *context,uint32_t arg,uint32_t s)
{
    const bf_0011c810_virtual_result r=bf_0011c810_first_virtual_to_matrix(
        io,arg,s,executor,context);
    return (int)r.status;
}
