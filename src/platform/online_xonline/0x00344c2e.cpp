/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E400F1D89C098AC1CB8023EA608FDC2E4951692F378406957CB5706BDEB07CF
 * Entry: 0x00344c2e, Ghidra index: 12749, label: FUN_00344c2e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344c2e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_003445aa(param_1,param_2,&param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00343537(param_3,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_00343377(param_1,0xfffffc15);
  }
  return 0;
}
