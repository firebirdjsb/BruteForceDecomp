/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3A5D26237F6E3B8CFB46953CF0C76EF74EB0B33E7F0B57697DDAA652DECBF47
 * Entry: 0x00164fa0, Ghidra index: 4692, label: FUN_00164fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164fa0(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  
  while (param_2 < in_ECX) {
    iVar7 = (in_ECX + -1) / 2;
    iVar3 = *(int *)(param_1 + iVar7 * 0x18);
    iVar1 = param_1 + iVar7 * 0x18;
    if (param_3 <= iVar3) break;
    piVar2 = (int *)(param_1 + in_ECX * 0x18);
    *piVar2 = iVar3;
    if (*(int *)(iVar1 + 4) == 0) {
      if (piVar2[1] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar2[1]);
      }
      piVar2[1] = 0;
    }
    else if (piVar2[1] == 0) {
      puVar5 = (undefined4 *)FUN_002ea01d(4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = 0;
      }
      piVar2[1] = (int)puVar5;
    }
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      *(undefined4 *)piVar2[1] = **(undefined4 **)(iVar1 + 4);
    }
    uVar4 = 0;
    piVar6 = (int *)(iVar1 + 8);
    do {
      piVar2[uVar4 + 2] = *piVar6;
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
      in_ECX = iVar7;
    } while (uVar4 < 4);
  }
  piVar2 = (int *)(param_1 + in_ECX * 0x18);
  *piVar2 = param_3;
  if (param_4 == (undefined4 *)0x0) {
    if (piVar2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar2[1]);
    }
    piVar2[1] = 0;
  }
  else {
    if (piVar2[1] == 0) {
      puVar5 = (undefined4 *)FUN_002ea01d(4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = 0;
      }
      piVar2[1] = (int)puVar5;
    }
    *(undefined4 *)piVar2[1] = *param_4;
  }
  piVar2[2] = param_5;
  piVar2[3] = param_6;
  piVar2[4] = param_7;
  piVar2[5] = param_8;
  if (param_4 == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_4);
}
