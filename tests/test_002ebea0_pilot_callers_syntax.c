/* Header type-check fixture for Windows x86/x64 with no host libc. */
#include "bf_x86_stack_probe_pilot_callers.h"
int bf_pilot_fixture(bf_stack_probe_002ebea0_state *s,
                     bf_stack_probe_002ebea0_memory *m,
                     uint32_t ebp, uint16_t word)
{
    const bf_sp_pilot_result a = bf_sp_pilot_2c2530(*s, ebp, word, m);
    const bf_sp_pilot_result b = bf_sp_pilot_33fa74(*s, ebp, 0, 1, m);
    return (int)a.status + (int)b.status;
}