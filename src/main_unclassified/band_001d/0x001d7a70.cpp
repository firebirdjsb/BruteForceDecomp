/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D996497F388C293D151A940266F084CDB8EF9832D3E57BBEB8619B66C3466FCB
 * Entry: 0x001d7a70, Ghidra index: 6407, label: FUN_001d7a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d7a70(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    iVar3 = param_3 + -0x28;
    puVar2 = param_4 + -10;
    *puVar2 = *(undefined4 *)(param_3 + -0x28);
    param_4[-9] = *(undefined4 *)(param_3 + -0x24);
    param_4[-8] = *(undefined4 *)(param_3 + -0x20);
    param_4[-7] = *(undefined4 *)(param_3 + -0x1c);
    param_4[-6] = *(undefined4 *)(param_3 + -0x18);
    if (*(int *)(param_3 + -0x14) == 0) {
      if (param_4[-5] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(param_4[-5]);
      }
      param_4[-5] = 0;
    }
    else if (param_4[-5] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      param_4[-5] = puVar1;
    }
    if (*(undefined4 **)(param_3 + -0x14) != (undefined4 *)0x0) {
      *(undefined4 *)param_4[-5] = **(undefined4 **)(param_3 + -0x14);
    }
    FUN_0010bc40();
    param_4 = puVar2;
    param_3 = iVar3;
  } while (iVar3 != param_2);
  *param_1 = puVar2;
  return;
}
