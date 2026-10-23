/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 213F5E93996C8BF0141BE4F0E605166F5541B4636F46191E149D23ED6E91F995
 * Entry: 0x00104e00, Ghidra index: 3334, label: FUN_00104e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00104e00(int param_1)

{
  int iVar1;
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    iVar1 = (**(code **)(*unaff_ESI + 4))();
    if (iVar1 == 5) {
      FUN_00109f10(*(undefined4 *)(param_1 + 0x10));
      return 1;
    }
  }
  return 0;
}
