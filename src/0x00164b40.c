/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1AB72BBA6270A2F314A2481F52D764AFFA4183AE71A7E8003D0B983A2183C399
 * Entry: 0x00164b40, Ghidra index: 4687, label: FUN_00164b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164b40(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = in_EAX;
  while( true ) {
    iVar6 = iVar2 * 2 + 2;
    if (param_2 <= iVar6) break;
    if (*(int *)(param_1 + iVar6 * 0x18) < *(int *)(param_1 + -0x18 + iVar6 * 0x18)) {
      iVar6 = iVar2 * 2 + 1;
    }
    iVar1 = param_1 + iVar6 * 0x18;
    puVar5 = (undefined4 *)(param_1 + iVar2 * 0x18);
    *puVar5 = *(undefined4 *)(param_1 + iVar6 * 0x18);
    if (*(int *)(iVar1 + 4) == 0) {
      if (puVar5[1] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      puVar5[1] = 0;
    }
    else if (puVar5[1] == 0) {
      puVar4 = (undefined4 *)FUN_002ea01d();
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
      }
      puVar5[1] = puVar4;
    }
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      *(undefined4 *)puVar5[1] = **(undefined4 **)(iVar1 + 4);
    }
    uVar3 = 0;
    puVar4 = (undefined4 *)(iVar1 + 8);
    do {
      puVar5[uVar3 + 2] = *puVar4;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
      iVar2 = iVar6;
    } while (uVar3 < 4);
  }
  if (iVar6 == param_2) {
    iVar6 = param_1 + -0x18 + param_2 * 0x18;
    puVar5 = (undefined4 *)(param_1 + iVar2 * 0x18);
    *puVar5 = *(undefined4 *)(param_1 + -0x18 + param_2 * 0x18);
    if (*(int *)(iVar6 + 4) == 0) {
      if (puVar5[1] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      puVar5[1] = 0;
    }
    else if (puVar5[1] == 0) {
      puVar4 = (undefined4 *)FUN_002ea01d();
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
      }
      puVar5[1] = puVar4;
    }
    if (*(undefined4 **)(iVar6 + 4) != (undefined4 *)0x0) {
      *(undefined4 *)puVar5[1] = **(undefined4 **)(iVar6 + 4);
    }
    uVar3 = 0;
    puVar4 = (undefined4 *)(iVar6 + 8);
    do {
      puVar5[uVar3 + 2] = *puVar4;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 < 4);
  }
  if (param_4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_002ea01d(4);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
    }
    *puVar5 = *param_4;
  }
  FUN_00164fa0(param_1,in_EAX);
  if (param_4 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
