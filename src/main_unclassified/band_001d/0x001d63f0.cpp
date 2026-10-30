/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27DC419A86C1AAA39EF08E07C4570A1DD9D10A8B811D632FD733A352A180F24E
 * Entry: 0x001d63f0, Ghidra index: 6352, label: FUN_001d63f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d63f0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x30;
    puVar2 = param_4 + -0xc;
    *puVar2 = *(undefined4 *)(param_3 + -0x30);
    param_4[-0xb] = *(undefined4 *)(param_3 + -0x2c);
    param_4[-10] = *(undefined4 *)(param_3 + -0x28);
    param_4[-9] = *(undefined4 *)(param_3 + -0x24);
    FUN_001d3530();
    FUN_0010bc40();
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
