/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 165664D077773E5299021EC7E12B72BF91EBA0E30986D3D1A549379111A328C0
 * Entry: 0x001d7d00, Ghidra index: 6410, label: FUN_001d7d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d7d00(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    iVar3 = param_3 + -0x3c;
    puVar2 = param_4 + -0xf;
    *puVar2 = *(undefined4 *)(param_3 + -0x3c);
    param_4[-0xe] = *(undefined4 *)(param_3 + -0x38);
    param_4[-0xd] = *(undefined4 *)(param_3 + -0x34);
    param_4[-0xc] = *(undefined4 *)(param_3 + -0x30);
    param_4[-0xb] = *(undefined4 *)(param_3 + -0x2c);
    if (*(int *)(param_3 + -0x28) == 0) {
      if (param_4[-10] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(param_4[-10]);
      }
      param_4[-10] = 0;
    }
    else if (param_4[-10] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      param_4[-10] = puVar1;
    }
    if (*(undefined4 **)(param_3 + -0x28) != (undefined4 *)0x0) {
      *(undefined4 *)param_4[-10] = **(undefined4 **)(param_3 + -0x28);
    }
    FUN_0010bc40();
    FUN_0010bc40();
    param_4[-1] = *(undefined4 *)(param_3 + -4);
    param_4 = puVar2;
    param_3 = iVar3;
  } while (iVar3 != param_2);
  *param_1 = puVar2;
  return;
}
