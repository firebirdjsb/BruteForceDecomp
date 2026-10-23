/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 193A363A622D60E84222EF4B912C7156CD073706A7932486FE77C833B782A395
 * Entry: 0x001d1400, Ghidra index: 6243, label: FUN_001d1400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1400(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  }
  return;
}
