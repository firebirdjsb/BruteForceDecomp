/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BEE33386E6E6D8778572B4617C5F10A45BCA0434ED2814CB2FC288A483E48EF
 * Entry: 0x002877f0, Ghidra index: 9093, label: FUN_002877f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_002877f0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x18;
    puVar2 = param_4 + -6;
    *puVar2 = *(undefined4 *)(param_3 + -0x18);
    FUN_0010bc40();
    *(undefined1 *)(param_4 + -1) = *(undefined1 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
