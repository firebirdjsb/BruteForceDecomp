/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A52B053E1188CA4D8BEC9446EB9E197B3CEC2B5754D0E8E9B2A8912170A8582C
 * Entry: 0x0021c1c0, Ghidra index: 7523, label: FUN_0021c1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021c1c0(undefined4 param_1)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x9c) == 0) {
    if (*(int *)(unaff_ESI + 0xec) == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(0x14);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[4] = 0;
        *puVar1 = 0;
      }
      *(undefined4 **)(unaff_ESI + 0xec) = puVar1;
    }
    FUN_0021d040(unaff_ESI,param_1,*(undefined4 *)(unaff_ESI + 8));
  }
  return;
}
