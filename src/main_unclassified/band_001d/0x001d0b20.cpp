/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 625EC8B7AC2164D33773134837BDB9B6B39BA80548CDE3E3DD6DC5B60FBAF3FC
 * Entry: 0x001d0b20, Ghidra index: 6203, label: FUN_001d0b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0b20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xf) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(in_ECX + 3);
    *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
    param_1[4] = in_ECX[4];
    param_1[5] = in_ECX[5];
    param_1[6] = in_ECX[6];
    param_1[7] = in_ECX[7];
    param_1[8] = in_ECX[8];
    param_1[9] = in_ECX[9];
    param_1[10] = in_ECX[10];
    param_1[0xb] = in_ECX[0xb];
    param_1[0xc] = in_ECX[0xc];
    param_1[0xd] = in_ECX[0xd];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(in_ECX + 0xe);
  }
  return;
}
