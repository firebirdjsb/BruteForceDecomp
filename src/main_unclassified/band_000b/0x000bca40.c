/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DE8A4AD645E08CFBF13B7B5FE9375CEC9A76DEBAF9993903E4E4D814E386DF1
 * Entry: 0x000bca40, Ghidra index: 2296, label: FUN_000bca40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <stdint.h>
void FUN_000bca40(void)

{
  int *piVar1;
  int in_ECX;
  uint32_t guest_scissor_words[4];
  const uint32_t *guest_scissor_source;
  
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x118))(2,0,0x3f800000);
    FUN_00095360();
    /* XBE 0x000BCA75..0x000BCA95 copies four consecutive guest DWORDs
     * from the return value of the +0x18 callback to ESP+0x0c..+0x18.
     * XBE 0x000BCA88 passes the address of the first DWORD. The caller's
     * stack slot is local, not an incoming host pointer. */
    guest_scissor_source = (const uint32_t *)(uintptr_t)(**(code **)(piVar1[0x12] + 0x18))();
    guest_scissor_words[0] = guest_scissor_source[0];
    guest_scissor_words[1] = guest_scissor_source[1];
    guest_scissor_words[2] = guest_scissor_source[2];
    guest_scissor_words[3] = guest_scissor_source[3];
    D3D8LTCG__D3DDevice_SetScissors(1,0,guest_scissor_words);
    FUN_000b2720();
    (**(code **)(*piVar1 + 0x120))();
  }
  return;
}
