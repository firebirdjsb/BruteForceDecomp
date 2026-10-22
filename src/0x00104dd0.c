/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAD57AAA403E61DC1541EFF7442737559C8D4D9E0EA09BB3271BDB0DB365A787
 * Entry: 0x00104dd0, Ghidra index: 3333, label: FUN_00104dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00104dd0(int param_1)

{
  int iVar1;
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    iVar1 = (**(code **)(*unaff_ESI + 4))();
    if (iVar1 == 5) {
      FUN_00109f10(*(undefined4 *)(param_1 + 0xc));
      return 1;
    }
  }
  return 0;
}
