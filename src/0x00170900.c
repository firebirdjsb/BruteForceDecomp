/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F593228170428F4A930C20DF76BB9AFBCBD7C0CC83D84AE53C8DE45813229D31
 * Entry: 0x00170900, Ghidra index: 4838, label: FUN_00170900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00170900(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *in_EAX;
  int iVar7;
  int iVar8;
  int unaff_ESI;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(int *)(unaff_ESI + 0x60) = *in_EAX;
  iVar8 = *in_EAX;
  iVar7 = *(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x10);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar8 = *(int *)(iVar8 + 0x24) - *(int *)(iVar8 + 0x10);
  *(float *)(unaff_ESI + 0x30) = 1.0 / fVar1;
  fVar2 = (float)iVar8;
  if (iVar8 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar8 = *(int *)(unaff_ESI + 0x60);
  *(float *)(unaff_ESI + 0x48) = fVar2 * (1.0 / fVar1);
  fStack_34 = *(float *)(iVar8 + 0x20);
  fStack_38 = *(float *)(iVar8 + 0x1c);
  fStack_3c = *(float *)(iVar8 + 0x18);
  local_40 = *(float *)(iVar8 + 0x14);
  fStack_48 = *(float *)(iVar8 + 0x30);
  fStack_4c = *(float *)(iVar8 + 0x2c);
  fStack_44 = *(float *)(iVar8 + 0x34);
  local_50 = *(float *)(iVar8 + 0x28);
  local_30 = local_40 * -1.0;
  local_2c = fStack_3c * -1.0;
  local_28 = fStack_38 * -1.0;
  local_24 = fStack_34 * -1.0;
  local_20 = local_50 * -1.0;
  fStack_1c = fStack_4c * -1.0;
  fStack_18 = fStack_48 * -1.0;
  fStack_14 = fStack_44 * -1.0;
  FUN_0016ff20(unaff_ESI,iVar8,&local_40,&local_50);
  FUN_00170ca0(unaff_ESI);
  fVar1 = *(float *)(unaff_ESI + 0x58);
  FUN_0016ff20(unaff_ESI,iVar8,&local_30,&local_50);
  FUN_00170ca0(unaff_ESI);
  fVar2 = *(float *)(unaff_ESI + 0x58);
  FUN_0016ff20(unaff_ESI,iVar8,&local_40,&local_20);
  FUN_00170ca0(unaff_ESI);
  fVar3 = *(float *)(unaff_ESI + 0x58);
  FUN_0016ff20(unaff_ESI,iVar8,&local_30,&local_20);
  FUN_00170ca0(unaff_ESI);
  fVar4 = *(float *)(unaff_ESI + 0x58);
  fVar5 = fVar4;
  if (fVar3 < fVar4) {
    fVar5 = fVar3;
  }
  fVar6 = fVar2;
  if ((fVar5 <= fVar2) && (fVar6 = fVar4, fVar3 < fVar4)) {
    fVar6 = fVar3;
  }
  fVar5 = fVar1;
  if (fVar6 <= fVar1) {
    fVar6 = fVar4;
    if (fVar3 < fVar4) {
      fVar6 = fVar3;
    }
    fVar5 = fVar2;
    if ((fVar6 <= fVar2) && (fVar5 = fVar4, fVar3 < fVar4)) {
      fVar5 = fVar3;
    }
  }
  if (fVar5 != fVar1) {
    if (fVar5 == fVar2) {
      local_40 = local_30;
      fStack_3c = local_2c;
      fStack_38 = local_28;
      fStack_34 = local_24;
    }
    else if (fVar5 == fVar3) {
      fStack_4c = fStack_1c;
      local_50 = local_20;
      fStack_48 = fStack_18;
      fStack_44 = fStack_14;
    }
    else if (fVar5 == fVar4) {
      fStack_3c = local_2c;
      local_40 = local_30;
      fStack_38 = local_28;
      fStack_34 = local_24;
      fStack_4c = fStack_1c;
      local_50 = local_20;
      fStack_48 = fStack_18;
      fStack_44 = fStack_14;
    }
  }
  FUN_0016ff20(unaff_ESI,iVar8,&local_40,&local_50);
  return;
}
