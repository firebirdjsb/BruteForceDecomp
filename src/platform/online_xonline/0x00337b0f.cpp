/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8518E4B73CCFA7AB03032480F2AE918557F99F4D931BB5514C6A3032D56CD9C2
 * Entry: 0x00337b0f, Ghidra index: 12464, label: FUN_00337b0f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00337b0f(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00330c3e(*(undefined4 *)(param_1 + 0x100));
  if (iVar1 == 0) {
    return 0;
  }
  if (-1 < iVar1) {
    if (iVar1 == 0x15ffff) {
      if (*(int *)(param_1 + 0x108) == 0) goto LAB_00337b67;
      if ((*(code **)(param_1 + 0xf8) == (code *)0x0) ||
         (iVar1 = (**(code **)(param_1 + 0xf8))(2,param_1,*(int *)(param_1 + 0x108)), -1 < iVar1)) {
        *(undefined4 *)(param_1 + 0x14) = 5;
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
LAB_00337b67:
  *(undefined4 *)(param_1 + 0x14) = 6;
  return 0;
}
