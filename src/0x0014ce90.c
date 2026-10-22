/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F0772C75A8AE639A79E6B5AD0663BFF948D4D509922ADA100352722ED7C0ACB
 * Entry: 0x0014ce90, Ghidra index: 4350, label: FUN_0014ce90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
int FUN_0014ce90(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  char in_AL;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int unaff_retaddr;
  undefined4 uVar8;
  
  iVar1 = param_1;
  if (in_ECX == 0) {
    return 0;
  }
  param_1 = 0;
  if (in_AL == '\0') {
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(in_ECX + 400);
  }
  if ((*(int *)(in_ECX + 0x184) == DAT_0046d064) || (iVar3 = FUN_00160da0(0xffffffff,1), iVar3 == 0)
     ) {
    iVar3 = in_ECX;
  }
  if ((*(int *)(iVar3 + 0x160) == 2) || (*(int *)(iVar3 + 0x160) == 3)) {
    if (*(int *)(iVar1 + 0x1b4) != 0) {
      param_2 = (undefined1 *)FUN_0014bfe0(iVar3);
      if (param_2 != (undefined1 *)0x0) {
        uVar8 = *(undefined4 *)(iVar1 + 0x1d4);
        iVar1 = **(int **)(iVar3 + 0x15c);
        uVar4 = FUN_0014bee0(iVar3);
        (**(code **)(iVar1 + 0x28))(uVar4,uVar8);
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
      }
      return (int)param_2;
    }
  }
  else {
    piVar5 = (int *)FUN_0014d290();
    if (piVar5 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar5 + 0x20))();
      if (cVar2 == '\0') {
        (**(code **)(*piVar5 + 0x28))(iVar3);
        (**(code **)(*piVar5 + 0x24))(iVar7 * param_1);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 0;
        }
      }
      else {
        iVar6 = (**(code **)(*piVar5 + 0x5c))();
        if (iVar6 != iVar3) {
          return 0;
        }
        unaff_retaddr = (int)*(short *)((int)piVar5 + 0x1a);
        (**(code **)(*piVar5 + 0x24))(iVar7 * (int)param_2 + unaff_retaddr);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
      }
      iVar7 = (**(code **)(*piVar5 + 0x5c))();
      if (iVar7 != 0) {
        iVar7 = (**(code **)(*piVar5 + 0x5c))();
        (**(code **)(**(int **)(iVar7 + 0x15c) + 0x28))(piVar5,*(undefined4 *)(iVar1 + 0x1d4));
      }
      *(byte *)(iVar1 + 0x1c8) = *(byte *)(iVar1 + 0x1c8) | 4;
      param_2 = (undefined1 *)(*(short *)((int)piVar5 + 0x1a) - unaff_retaddr);
      param_1 = 0;
      piVar5 = &param_1;
      if (-1 < (int)param_2) {
        piVar5 = (int *)&param_2;
      }
      return *piVar5;
    }
  }
  return 0;
}
