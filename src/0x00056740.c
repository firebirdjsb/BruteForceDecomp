/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0F468B9AA91F6B9067BC44E82C04E6FDF941C12DCBE6AFA5937241981C706FD
 * Entry: 0x00056740, Ghidra index: 832, label: FUN_00056740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00056740(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 in_XMM0 [16];
  undefined1 auVar12 [16];
  float local_3c;
  int *local_34;
  float fStack_28;
  undefined8 uStack_24;
  undefined1 auStack_10 [4];
  int *piStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  piVar5 = (int *)FUN_000120f0();
  local_3c = -99.0;
  local_34 = (int *)0x0;
  if (param_3 != 0) {
    piVar5[0x94] = piVar5[0x94] | 1;
    pfVar6 = (float *)(**(code **)(*(int *)(piVar5[0x93] + 8) + 4))();
    pfVar7 = (float *)(**(code **)(*(int *)(param_3 + 8) + 4))();
    fVar3 = pfVar7[2] - pfVar6[2];
    fVar4 = pfVar7[1] - pfVar6[1];
    fStack_28 = *pfVar7 - *pfVar6;
    uStack_24 = CONCAT44(fVar3,fVar4);
    fVar10 = fStack_28 * fStack_28 + fVar4 * fVar4 + fVar3 * fVar3;
    if (1.4210855e-14 < fVar10) {
      auVar12 = rsqrtss(in_XMM0,fVar10);
      fVar10 = auVar12._0_4_;
      in_XMM0._0_4_ = fStack_28 * fVar10;
      in_XMM0._4_4_ = fVar10 * 0.0;
      in_XMM0._8_4_ = fVar4 * fVar10;
      in_XMM0._12_4_ = fVar3 * fVar10;
      uStack_24 = in_XMM0._8_8_;
      fStack_28 = in_XMM0._0_4_;
    }
    piStack_c = (int *)0x0;
    piStack_8 = (int *)0x0;
    uStack_4 = 0;
    FUN_0005e310(*(undefined4 *)(piVar5[0x167] + 0x28),piVar5,auStack_10);
    piVar8 = piStack_c;
    if (piStack_c != piStack_8) {
      do {
        piVar1 = (int *)*piVar8;
        if ((piVar1 != (int *)0x0) && (piVar5 != piVar1)) {
          iVar2 = piVar5[0x93];
          piVar5[0x94] = piVar5[0x94] | 1;
          iVar9 = (**(code **)(*piVar1 + 0x40))();
          pfVar6 = (float *)(**(code **)(*(int *)(iVar2 + 8) + 4))();
          fVar3 = *(float *)(iVar9 + 0x2c) - pfVar6[2];
          fVar4 = *(float *)(iVar9 + 0x28) - pfVar6[1];
          fVar10 = *(float *)(iVar9 + 0x24) - *pfVar6;
          in_XMM0 = rsqrtss(in_XMM0,fVar10 * fVar10 + fVar4 * fVar4 + fVar3 * fVar3);
          fVar11 = in_XMM0._0_4_;
          fVar3 = fVar11 * fVar10 * fStack_28 +
                  fVar4 * fVar11 * (float)uStack_24 + fVar3 * fVar11 * uStack_24._4_4_;
          if (local_3c < fVar3) {
            local_3c = fVar3;
            local_34 = piVar1;
          }
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != piStack_8);
    }
    if (piStack_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piStack_c);
    }
  }
  return local_34;
}
