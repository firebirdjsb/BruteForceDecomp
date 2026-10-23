/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B73BB039D0F2775ECA418C56FDF0C663A3191F2971B7A7886E6D4E67D821FA44
 * Entry: 0x000a8ab0, Ghidra index: 2013, label: FUN_000a8ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000a8ab0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x40);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_000a8b30();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined4 *)(iVar1 + 0x18) = 0x3a83126f;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *param_3 = iVar1;
  return 0;
}
