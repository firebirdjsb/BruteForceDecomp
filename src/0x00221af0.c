/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DCAE51E86DFE0B30488210371DDF0C3FD6FAA3D28F5B225543B937405EE6A8F
 * Entry: 0x00221af0, Ghidra index: 7576, label: FUN_00221af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00221af0(void)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int *in_ECX;
  undefined1 extraout_DL;
  undefined4 unaff_EBX;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  int unaff_retaddr;
  undefined4 uStack_c8;
  int iStack_c4;
  float fStack_c0;
  float local_bc [2];
  undefined4 uStack_b4;
  undefined1 auStack_ac [76];
  float fStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  cVar4 = (char)((uint)unaff_EBX >> 0x18);
  uStack_c8 = (float)CONCAT13(1,(undefined3)uStack_c8);
  (**(code **)(*in_ECX + 4))(local_bc);
  piVar7 = *(int **)((int)fStack_c0 + 0x9c);
  uStack_c8 = fStack_c0;
  if (*piVar7 == 0) {
    iVar5 = piVar7[1];
  }
  else {
    iVar5 = 0;
  }
  if (iVar5 == unaff_retaddr) {
    piVar7 = *(int **)((int)local_bc[0] + 0x9c);
    uStack_c8 = local_bc[0];
  }
  iVar5 = *piVar7;
  piVar8 = (int *)0x0;
  piVar9 = (int *)0x0;
  if (((iVar5 == 1) || (iVar5 == 10)) && (piVar2 = (int *)piVar7[1], piVar2 != (int *)0x0)) {
    iStack_c4 = FUN_00115000();
    if (iStack_c4 == -1) {
      return;
    }
    FUN_00222310();
    piVar8 = piVar2;
    if ((*(byte *)(piVar2 + 0x1c) & 1) == 0) {
      FUN_00221a40(*(undefined4 *)(*(int *)(unaff_retaddr + 0xc) + 0x1cc));
    }
  }
  else if ((iVar5 == 0) && (piVar2 = (int *)piVar7[1], piVar2 != (int *)0x0)) {
    iStack_c4 = piVar2[0x1b];
    if ((0 < (short)piVar2[0x41]) ||
       (pfVar6 = (float *)(**(code **)(*piVar2 + 0x54))(),
       fVar1 = *(float *)(*(int *)(unaff_retaddr + 0xc) + 0x1bc),
       pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6 < fVar1 * fVar1)) {
      cVar4 = '\0';
    }
    FUN_00221a00(unaff_retaddr,*(undefined4 *)(*(int *)(unaff_retaddr + 0xc) + 0x1c8));
    piVar8 = piVar2;
  }
  else {
    if (iVar5 != 0xb) {
      return;
    }
    piVar9 = (int *)FUN_000d1a00(uStack_c8);
    if (piVar9 == (int *)0x0) {
      return;
    }
    iStack_c4 = *piVar9;
    if ((*(byte *)(piVar9 + 3) & 2) != 0) {
      cVar4 = '\0';
    }
  }
  if (iStack_c4 != -1) {
    if (piVar8 == (int *)0x0) {
      if (piVar9 == (int *)0x0) {
        return;
      }
      *(byte *)(piVar9 + 3) = *(byte *)(piVar9 + 3) | 2;
    }
    else {
      FUN_00220e30(*(undefined4 *)(*(int *)(unaff_retaddr + 0xc) + 0x1d0));
    }
    if ((cVar4 != '\0') && (cVar4 = FUN_00222480(), cVar4 != '\0')) {
      if (((*piVar7 == 1) || (*piVar7 == 10)) && (piVar7[1] != 0)) {
        *(undefined4 *)(piVar7[1] + 0x414) = uStack_b4;
      }
      if (cVar4 != '\0') {
        FUN_00236670(0,&uStack_c8,auStack_ac);
        iVar5 = *(int *)(unaff_retaddr + 0xc);
        if (*(float *)(iVar5 + 0x1b0) <= uStack_c8) {
          iVar5 = *(int *)(iVar5 + 0x160);
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x15c);
        }
        uStack_c8 = (float)iVar5;
        piVar7 = (int *)FUN_00076310();
        iVar3 = *piVar7;
        if (iVar5 != DAT_0046d064) {
          FUN_00040f40();
          FUN_0003d7e0();
          FUN_000def50(0x3f800000);
        }
        if (iVar3 != DAT_0046d064) {
          FUN_0003f010();
          FUN_00040f10();
          uStack_5c = 1;
          fVar10 = (float10)FUN_00233b90();
          uStack_58 = 0x3f800000;
          fStack_60 = (float)(fVar10 * (float10)0.1 - (float10)0.05);
          uStack_54 = extraout_DL;
          FUN_00179250(*(undefined4 *)(*(int *)(unaff_retaddr + 8) + 0x208),iVar3,5);
        }
      }
    }
  }
  return;
}
