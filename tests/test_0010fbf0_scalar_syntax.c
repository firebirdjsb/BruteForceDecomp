#include "bf_0010fbf0_scalar_projection.h"
int bf_0010fbf0_fixture(const bf_0011c810_guest_bytes *io,
    uint32_t receiver, uint32_t output, bf_0010fbf0_result *r)
{
    const bf_0010fbf0_result v=bf_0010fbf0_project(io,receiver,output);
    if(r)*r=v;
    return (int)v.stage;
}
