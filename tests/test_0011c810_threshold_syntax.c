#include "bf_0011c810_threshold_reset.h"
bf_0011c810_reset_result bf_reset_fixture(
    const bf_0011c810_guest_bytes *io,uint32_t argument,uint32_t first,uint32_t third)
{
    return bf_0011c810_threshold_reset(io,argument,first,third);
}
