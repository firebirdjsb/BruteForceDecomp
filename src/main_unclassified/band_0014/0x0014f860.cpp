/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0BFF8C8BEE6BFDB8E71CB47B07ADAE52397D78BCB6DB8D744722D780EA352ED
 * Entry: 0x0014f860, Ghidra index: 4398, label: FUN_0014f860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
/* WARNING: Type propagation algorithm not settling */

void FUN_0014f860(float param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int *in_EAX;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar7;
  undefined4 uVar8;
  float *unaff_EDI;
  float afStack_14 [3];
  float fStack_8;
  float fStack_4;
  
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar4 == 0x120785ef) {
    return;
  }
  if (((uint)unaff_EDI[1] & 1) == 0) {
    return;
  }
  if ((*(byte *)(in_EAX + 0x1c) & 1) != 0) {
    return;
  }
  iVar5 = (**(code **)(*in_EAX + 0xf4))();
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(*(int *)(iVar5 + 0x794) + 0xd) != '\0') {
    return;
  }
  bVar2 = false;
  unaff_EDI[2] = param_1 + unaff_EDI[2];
  unaff_EDI[3] = param_1 + unaff_EDI[3];
  fVar1 = unaff_EDI[4];
  unaff_EDI[4] = param_1 + fVar1;
  if ((((uint)unaff_EDI[1] & 0x40) != 0) && (2.0 < param_1 + fVar1)) {
    unaff_EDI[4] = 0.0;
    bVar2 = true;
    unaff_EDI[1] = (float)((uint)unaff_EDI[1] & 0xffffffbf);
  }
  iVar5 = (**(code **)(*in_EAX + 0x40))();
  fVar1 = *unaff_EDI;
  if ((fVar1 != 0.0) && (!bVar2)) {
    afStack_14[0] = *(float *)(iVar5 + 0x2c) - *(float *)((int)fVar1 + 0x1c);
    fStack_8 = *(float *)(iVar5 + 0x28) - *(float *)((int)fVar1 + 0x18);
    fVar1 = *(float *)(iVar5 + 0x24) - *(float *)((int)fVar1 + 0x14);
    fStack_4 = afStack_14[0];
    if (fVar1 * fVar1 + afStack_14[0] * afStack_14[0] + fStack_8 * fStack_8 <= 400.0) {
      fVar1 = unaff_EDI[1];
      if ((((uint)fVar1 & 6) != 0) && (cVar3 = FUN_00126a90(), cVar3 == '\0')) {
        fStack_8 = *(float *)(extraout_ECX + 4) - 0.25;
        uVar8 = 1;
        if (((uint)fVar1 & 0x38) == 0) {
          uVar8 = 2;
        }
        afStack_14[0] = 0.0;
        afStack_14[1] = 3.4028235e+38;
        FUN_0004bf30(extraout_ECX,extraout_EDX,0,afStack_14,afStack_14 + 1,uVar8,0);
        FUN_00058d90();
        if (afStack_14[0] != 0.0) {
          fVar1 = fStack_8 - *(float *)((int)afStack_14[0] + 0x18);
          if ((0.25 < unaff_EDI[3]) &&
             (((afStack_14[0] != *unaff_EDI || (1.5 < fVar1)) || (fVar1 < -0.5)))) {
            uVar7 = 0;
            unaff_EDI[3] = 0.0;
            uVar8 = 6;
            if ((1.0 < unaff_EDI[2]) && ((2.5 < fVar1 || (fVar1 < -1.5)))) {
              unaff_EDI[2] = 0.0;
              uVar8 = 10;
              uVar7 = 6;
            }
            afStack_14[0] = (float)FUN_0014f5c0(unaff_EDI,in_EAX,*unaff_EDI,uVar8,uVar7);
          }
          if (afStack_14[0] != 0.0) {
            *unaff_EDI = afStack_14[0];
          }
        }
      }
      goto LAB_0014fa91;
    }
  }
  FUN_0014f7a0();
LAB_0014fa91:
  uVar6 = (uint)unaff_EDI[1] & 0xfffffffd;
  unaff_EDI[1] = (float)((((uint)unaff_EDI[1] & 0xfffffff8) + 8 ^ uVar6) & 0x38 ^ uVar6);
  return;
}
