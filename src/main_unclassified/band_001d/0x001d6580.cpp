/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F7AA2947A761970D5F674EC5DA9CC515D2C1BAA2FF60193556DB18C5CB676B9
 * Entry: 0x001d6580, Ghidra index: 6357, label: FUN_001d6580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d6580(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x20;
    puVar2 = param_4 + -8;
    *puVar2 = *(undefined4 *)(param_3 + -0x20);
    param_4[-7] = *(undefined4 *)(param_3 + -0x1c);
    param_4[-6] = *(undefined4 *)(param_3 + -0x18);
    param_4[-5] = *(undefined4 *)(param_3 + -0x14);
    FUN_0010bc40();
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
