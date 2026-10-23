/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE3B93990E18DF9B6DCA1D46BE5F96674082DCB95F0C439F268D93773B41971A
 * Entry: 0x0012c6c0, Ghidra index: 3798, label: FUN_0012c6c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c05cc;
extern uint32_t _DAT_003c05b8;
extern uint32_t _DAT_003c05bc;
extern uint32_t _DAT_003c05c8;
extern uint32_t *_DAT_003c05d0;
extern uint32_t *_DAT_004699e4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0012c6c0(int param_1,float *param_2,float param_3,float *param_4)

{
  int iVar1;
  char cVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  float10 fVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float in_XMM1_Da;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar9;
  undefined1 auVar8 [16];
  float local_38;
  float fStack_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_18;
  float local_14;
  
  fStack_24 = param_2[2];
  local_28 = param_2[1];
  local_2c = *param_2;
  if (1.1920929e-07 < param_3) {
    auVar7 = rcpss(ZEXT416((uint)param_3),ZEXT416((uint)param_3));
    in_XMM1_Da = auVar7._0_4_;
    local_2c = local_2c * in_XMM1_Da;
    local_28 = local_28 * in_XMM1_Da;
    fStack_24 = fStack_24 * in_XMM1_Da;
  }
  fStack_30 = *(float *)(param_1 + 0x5f0);
  local_38 = *(float *)(param_1 + 0x5e8);
  fVar6 = in_XMM1_Da + local_38 * local_38;
  fVar9 = *(float *)(param_1 + 0x5ec) * *(float *)(param_1 + 0x5ec) + fStack_30 * fStack_30;
  auVar7._4_4_ = fVar6;
  auVar7._0_4_ = fVar9;
  auVar7._8_4_ = fVar6;
  auVar7._12_4_ = fVar6;
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = fVar9 + local_38 * local_38;
  if (2e-05 <= auVar8._0_4_) {
    auVar7 = rsqrtss(auVar8,auVar8);
    local_38 = local_38 * auVar7._0_4_;
    fStack_30 = fStack_30 * auVar7._0_4_;
  }
  fVar5 = (float10)fpatan((float10)*(float *)(param_1 + 0x5c4),(float10)*(float *)(param_1 + 0x5dc))
  ;
  fVar4 = (float10)fcos((float10)(float)fVar5);
  fVar5 = (float10)fsin((float10)(float)fVar5);
  local_14 = 0.0;
  *param_4 = local_38 * (float)fVar4 + fStack_30 * (float)fVar5;
  param_4[1] = 0.0;
  param_4[2] = fStack_30 * (float)fVar4 - local_38 * (float)fVar5;
  iVar1 = *(int *)(param_1 + 0x1f8);
  iVar3 = param_1;
  if (iVar1 == 7) {
    fVar6 = SQRT(*(float *)(param_1 + 0x5f0) * *(float *)(param_1 + 0x5f0) +
                 *(float *)(param_1 + 0x5ec) * *(float *)(param_1 + 0x5ec) +
                 *(float *)(param_1 + 0x5e8) * *(float *)(param_1 + 0x5e8));
    if (fVar6 <= 0.3) {
      fVar6 = 0.3;
    }
    if (0.5 <= fVar6) {
      fVar6 = 0.5;
    }
    fVar4 = (float10)fVar6 + (float10)fVar6;
    fVar4 = fVar4 * fVar4;
    fVar5 = (float10)*(float *)(*(int *)(param_1 + 0xc) + 0x6f8) * fVar4;
    goto LAB_0012c9be;
  }
  cVar2 = FUN_00126b40();
  if (cVar2 == '\0') {
    cVar2 = FUN_00126a40();
    iVar3 = extraout_EDX_00;
    fVar4 = extraout_ST0;
    if (cVar2 != '\0') {
      fVar5 = (float10)*(float *)(*(int *)(extraout_EDX_00 + 0xc) + 0x700);
      goto LAB_0012c9be;
    }
    if (iVar1 == 8) {
      fVar5 = (float10)*(float *)(*(int *)(extraout_EDX_00 + 0xc) + 0x704);
      goto LAB_0012c9be;
    }
  }
  else {
    fVar6 = SQRT(*(float *)(extraout_EDX + 0x5f0) * *(float *)(extraout_EDX + 0x5f0) +
                 *(float *)(extraout_EDX + 0x5ec) * *(float *)(extraout_EDX + 0x5ec) +
                 *(float *)(extraout_EDX + 0x5e8) * *(float *)(extraout_EDX + 0x5e8));
    if (fVar6 <= 0.1) {
      fVar6 = 0.1;
    }
    if (0.65 <= fVar6) {
      fVar6 = 0.65;
    }
    fVar6 = (fVar6 * 1.5384616) / _DAT_003c05c8;
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    local_18 = *(float *)(*(int *)(param_1 + 0xc) + 0x6fc);
    local_14 = SQRT(local_2c * local_2c + fStack_24 * fStack_24 + local_28 * local_28) *
               _DAT_004699e4 + fVar6 * fVar6 * (3.0 - (fVar6 + fVar6)) * local_18 * _DAT_003c05d0;
    if (*(int **)(param_1 + 0x21c) != (int *)0x0) {
      local_18 = *(float *)(**(int **)(param_1 + 0x21c) + 8);
    }
    if (0.001 <= ABS(local_18)) {
      fVar6 = local_14 / local_18;
      if (DAT_003c05cc <= local_14 / local_18) {
        fVar6 = DAT_003c05cc;
      }
      fVar4 = (float10)fVar6;
    }
    else {
      fVar4 = (float10)1.0;
    }
  }
  fVar5 = (float10)local_14;
LAB_0012c9be:
  fVar6 = (float)(fVar5 * (float10)*(float *)(iVar3 + 0x720));
  if (*(int *)(iVar3 + 0x21c) != 0) {
    *(float *)(*(int *)(iVar3 + 0x21c) + 0x28) = (float)fVar4;
  }
  *param_4 = fVar6 * *param_4;
  param_4[2] = fVar6 * param_4[2];
  param_4[1] = 0.0;
  fVar9 = _DAT_003c05b8;
  if (fVar6 * fVar6 <
      *(float *)(param_1 + 0x478) * *(float *)(param_1 + 0x478) +
      *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x474) +
      *(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x470)) {
    fVar9 = _DAT_003c05bc;
  }
  *(float *)(param_1 + 0x470) =
       (*param_4 - *(float *)(param_1 + 0x470)) * fVar9 * param_3 + *(float *)(param_1 + 0x470);
  *(float *)(param_1 + 0x478) =
       (param_4[2] - *(float *)(param_1 + 0x478)) * fVar9 * param_3 + *(float *)(param_1 + 0x478);
  *param_4 = param_3 * *(float *)(param_1 + 0x470);
  param_4[1] = param_3 * *(float *)(param_1 + 0x474);
  param_4[2] = param_3 * *(float *)(param_1 + 0x478);
  return;
}
