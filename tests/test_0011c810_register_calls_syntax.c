/* Prove explicit register-pointer signatures parse on Windows x86 and x64.
 * Not a guest original x86 call ABI or real target-pointer verification. */
#include "bf_0011c810_register_calls.h"
#include "bf_0011c810_guest_producer_bridge.h"
int bf_0011c810_contract_fixture(float *out,const float *a,float *matrix,
                                 const bf_0011c810_guest_bytes *io)
{
    FUN_0001d0c0(a,matrix);
    FUN_0012b2a0(out,a,matrix);
    return (int)bf_0011c810_source_matrix(io,0,0).status;
}
