/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E01BAE1B184A2FACA9E93B196901E6A364AA7D66F93D010863493C62505041F7
 * Entry: 0x00338138, Ghidra index: 12470, label: FUN_00338138
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00338138(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00330c3e(*(undefined4 *)(param_1 + 0xf8));
  if (iVar1 == 0) {
    return 0;
  }
  if (-1 < iVar1) {
    if (iVar1 == 0x15ffff) {
      if (*(int *)(param_1 + 0x100) == 0) goto LAB_00338190;
      if ((*(code **)(param_1 + 0xf0) == (code *)0x0) ||
         (iVar1 = (**(code **)(param_1 + 0xf0))(2,param_1,*(int *)(param_1 + 0x100)), -1 < iVar1)) {
        *(undefined4 *)(param_1 + 0x14) = 7;
        return 0;
      }
    }
    else {
      iVar1 = FUN_0033e833(param_1);
      if (-1 < iVar1) {
        *(undefined4 *)(param_1 + 0x14) = 1;
        return 0;
      }
    }
  }
  *(int *)(param_1 + 0xc) = iVar1;
LAB_00338190:
  *(undefined4 *)(param_1 + 0x14) = 8;
  return 0;
}
