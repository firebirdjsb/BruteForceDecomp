/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F390729F4C3FD94009BBBAA00DFC41D8C27D3518B813E13C7B895466A7CD27F
 * Entry: 0x001d05d0, Ghidra index: 6177, label: FUN_001d05d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d05d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(in_ECX + 3);
    *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)in_ECX + 0xd);
  }
  return;
}
