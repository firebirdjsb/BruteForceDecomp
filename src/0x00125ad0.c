/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C79F5187A5A3F6B3ACEBADC6F6C3738B63845D6CC749A9683EE8F565D09B9B4
 * Entry: 0x00125ad0, Ghidra index: 3703, label: FUN_00125ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_0046d064;
void FUN_00125ad0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int **ppiVar8;
  undefined4 uVar9;
  ushort uVar10;
  undefined2 uVar11;
  int *piVar12;
  int *unaff_retaddr;
  float fStack_30;
  float fStack_2c;
  int *piStack_28;
  int *local_24;
  float fStack_20;
  float fStack_1c;
  undefined2 uStack_18;
  ushort uStack_16;
  undefined2 uStack_14;
  ushort uStack_12;
  float fStack_10;
  float fStack_c;
  
  piVar1 = *(int **)(param_2 + 0x14);
  if ((piVar1 == (int *)0x0) || (piVar12 = piVar1, *(int *)(piVar1[3] + 4) != 3)) {
    piVar12 = (int *)0x0;
  }
  local_24 = piVar1;
  iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0xbec) + 0xc))(param_1);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x24) != 0)) {
    fStack_2c = *(float *)(param_1 + 8) * 0.133;
    fStack_30 = 0.25;
    if (fStack_2c <= 0.25) {
      fStack_2c = 0.25;
    }
    if (1.0 <= fStack_2c) {
      fStack_2c = 1.0;
    }
    uVar11 = 0;
    fVar2 = fStack_2c * 0.5 + 0.5;
    if (0.5 < fStack_2c) {
      uVar11 = (undefined2)(int)((fStack_2c - 0.25) * 65535.0);
    }
    fStack_2c = fStack_2c * 65535.0;
    iVar5 = (int)fStack_2c;
    fStack_20 = (float)FUN_00279bb0(&local_24);
    fStack_2c = fVar2 * 0.5;
    piVar1 = (int *)((int)fStack_20 + 4);
    uStack_16 = (ushort)iVar5;
    uVar10 = uStack_16 >> 1;
    fStack_1c = 0.0;
    fStack_c = 0.0;
    uStack_14 = 0;
    uStack_18 = uVar11;
    uStack_12 = uVar10;
    fStack_10 = fStack_2c;
    iVar5 = FUN_00129f40(&local_24,fStack_20,*(undefined4 *)((int)fStack_20 + 4),&uStack_18);
    FUN_0027a650();
    *piVar1 = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    fStack_c = fStack_2c;
    piVar1 = (int *)((int)fStack_20 + 4);
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_12 = 0;
    uStack_16 = uVar10;
    fStack_10 = fVar2;
    iVar5 = FUN_00129f40(&local_24,fStack_20,*piVar1,&uStack_18);
    FUN_0027a650();
    *piVar1 = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    iVar5 = (**(code **)(**(int **)(unaff_retaddr[2] + 0xbec) + 0xc))(unaff_retaddr);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x24);
    }
    iVar5 = *(int *)(iVar5 + 0x20);
    if (((iVar5 == 0) || (iVar5 < 0)) || (0x18 < iVar5)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(DAT_00469948 + 0x250 + iVar5 * 4);
    }
    FUN_001e8e70(iVar5 + 0x10,&piStack_28);
    if (local_24 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *local_24;
    }
    FUN_001298b0(&fStack_30,iVar5,local_24);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_24);
  }
  puVar6 = *(undefined4 **)(*(int *)(unaff_retaddr[2] + 0xbe4) + 0x1348);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)*puVar6;
  }
  for (; puVar6 != *(undefined4 **)(*(int *)(unaff_retaddr[2] + 0xbe4) + 0x1348);
      puVar6 = (undefined4 *)*puVar6) {
    iVar5 = puVar6[2];
    if (*(int **)(iVar5 + 0xe0) == unaff_retaddr) {
      if (iVar5 != 0) {
        iVar7 = (**(code **)(*unaff_retaddr + 0x40))();
        if (piVar1 == (int *)0x0) {
          ppiVar8 = (int **)(iVar7 + 0x24);
          uVar9 = *(undefined4 *)(param_1 + 8);
        }
        else {
          fStack_30 = *(float *)(iVar7 + 0x2c) - *(float *)(param_1 + 0x2c);
          fStack_2c = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
          piStack_28 = (int *)(*(float *)(iVar7 + 0x24) - *(float *)(param_1 + 0x24));
          ppiVar8 = &local_24;
          uVar9 = *(undefined4 *)(param_1 + 8);
          local_24 = piStack_28;
          fStack_20 = fStack_2c;
          fStack_1c = fStack_30;
        }
        FUN_000b3010(*(undefined4 *)(iVar5 + 0xf4),uVar9,ppiVar8);
      }
      break;
    }
  }
  iVar5 = DAT_0046d064;
  if (piVar12 == (int *)0x0) {
    if (((*(byte *)(param_1 + 0x5c) & 4) != 0) && (*(int *)(param_1 + 4) != 4)) {
      iVar5 = -0x10cde6e3;
    }
  }
  else if (unaff_retaddr == piVar12) {
    iVar5 = -0xbb17c1;
  }
  else {
    iVar7 = piVar12[0x6d];
    uVar9 = (**(code **)(unaff_retaddr[0x6d] + 0x9c))();
    cVar4 = (**(code **)(iVar7 + 0xc4))(uVar9);
    if (cVar4 != '\0') {
      iVar5 = -0x1d2604ed;
    }
  }
  if (iVar5 == DAT_0046d064) {
    if (*(int *)(param_1 + 4) == 4) {
      iVar5 = 0xfeee721;
    }
    else {
      fVar2 = (float)unaff_retaddr[0x14];
      fVar3 = (float)unaff_retaddr[0x15] - *(float *)(param_1 + 8);
      if ((fVar2 * 0.25 <= fVar3) || ((float)unaff_retaddr[0x15] <= fVar2 * 0.25)) {
        if ((fVar2 * 0.5 <= fVar3) || ((float)unaff_retaddr[0x15] <= fVar2 * 0.5)) {
          iVar5 = 0xae8104e;
          if (*(float *)(param_1 + 8) <= fVar2 * 0.15) {
            iVar5 = -0x17a9ff61;
          }
        }
        else {
          iVar5 = -0x54f4168;
        }
      }
      else {
        iVar5 = 0x1e1dcd0;
      }
    }
    if (iVar5 == DAT_0046d064) goto LAB_00125ed8;
  }
  FUN_00140a60(*(undefined4 *)(unaff_retaddr[2] + 0xbe8),unaff_retaddr,iVar5,0);
LAB_00125ed8:
  if ((((float)unaff_retaddr[0x15e] < 0.0 != ((float)unaff_retaddr[0x15e] == 0.0)) &&
      ((int *)unaff_retaddr[0x7f] != (int *)0x0)) &&
     ((iVar5 = *(int *)unaff_retaddr[0x7f], iVar5 == 0x13 || ((iVar5 == 0 || (iVar5 == 0x2b)))))) {
    *(byte *)(unaff_retaddr + 0x98) = *(byte *)(unaff_retaddr + 0x98) | 2;
  }
  unaff_retaddr[0x15e] = 0x41a00000;
  if ((*(int *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x5c) & 8) != 0)) {
    FUN_00127ff0(unaff_retaddr);
  }
  return;
}
