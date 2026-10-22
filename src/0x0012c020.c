/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B3451680A378DA659D12A50DCEE849E672E7354B00C352995A27B753BA51A3A
 * Entry: 0x0012c020, Ghidra index: 3797, label: FUN_0012c020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c055c;
extern uint32_t *DAT_00469940;
extern uint32_t DAT_0046d304;
extern uint32_t DAT_0046d30c;
extern uint32_t *_DAT_003c0564;
extern uint32_t _DAT_003c0568;
extern uint32_t _DAT_003c056c;
extern uint32_t *_DAT_003c0570;
extern uint32_t _DAT_003c0574;
extern uint32_t *_DAT_003c0578;
extern uint32_t _DAT_003c057c;
extern uint32_t *_DAT_0046d2fc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0012c020(int param_1,float param_2,float *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  byte bVar9;
  int iVar10;
  float10 fVar11;
  undefined1 in_XMM0 [16];
  undefined1 auVar12 [16];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_4;
  
  bVar2 = *(byte *)(param_1 + 0x261);
  if (((*(byte *)(param_1 + 0x262) & 4) == 0) && ((bVar2 & 1) == 0)) {
    uVar7 = (bVar2 & 0x40) >> 6;
    bVar9 = *(byte *)(param_1 + 0x43c) >> 1 & 1;
    fVar4 = (*(float *)(param_1 + 0x450) - *(float *)(&DAT_0046d30c + uVar7 * 4)) /
            (*(float *)(&DAT_0046d304 + uVar7 * 4) - *(float *)(&DAT_0046d30c + uVar7 * 4));
    if (bVar9 != 0) {
      if (fVar4 <= 0.5) {
        fVar4 = 0.5;
      }
      in_XMM0 = ZEXT416((uint)fVar4);
    }
    if ((fVar4 <= 0.0) ||
       (1.0000001e-06 < param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3)) {
      *(float *)(param_1 + 0x71c) =
           fVar4 * *(float *)(&DAT_003c055c + uVar7 * 4) * param_2 + *(float *)(param_1 + 0x71c);
    }
    if (*(float *)(param_1 + 0x71c) <= 1.0) {
      if (*(float *)(param_1 + 0x71c) < 0.0 != (*(float *)(param_1 + 0x71c) == 0.0)) {
        *(byte *)(param_1 + 0x261) = *(byte *)(param_1 + 0x261) & 0xbf;
        *(undefined4 *)(param_1 + 0x71c) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x71c) = 0x3f800000;
      if (bVar9 != 0) {
        *(byte *)(param_1 + 0x261) = *(byte *)(param_1 + 0x261) | 0x40;
        *(byte *)(param_1 + 0x261) = *(byte *)(param_1 + 0x261) & 0x7f;
      }
    }
  }
  bVar9 = *(byte *)(param_1 + 0x261) >> 6 & 1;
  if ((bVar2 >> 6 & 1) != bVar9) {
    if (bVar9 == 0) {
      *(byte *)(param_1 + 0x261) = *(byte *)(param_1 + 0x261) & 0xbf;
      *(byte *)(param_1 + 0x261) = *(byte *)(param_1 + 0x261) & 0x7f;
      *(undefined4 *)(param_1 + 0x71c) = 0;
      if (**(int **)(param_1 + 0x1fc) == 0x23) {
        FUN_0012eab0(1);
      }
      if (*(int *)(param_1 + 0x24c) != 0) {
        *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) | 0x40;
      }
      FUN_0012bfa0();
    }
    else {
      FUN_0012bc60(param_1);
      FUN_0012baf0(param_1,(1.0 - *(float *)(param_1 + 0x450)) * _DAT_003c0564,param_1 + 0x6f8,
                   param_1 + 0x6f8);
      *(float *)(param_1 + 0x6fc) = _DAT_003c0568 + *(float *)(param_1 + 0x6fc);
      *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_1 + 0x44c);
      *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x450);
      *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_1 + 0x454);
    }
  }
  if ((*(byte *)(param_1 + 0x261) & 0x40) == 0) {
    uVar7 = FUN_0012bfa0();
    return uVar7 & 0xffffff00;
  }
  if (*(int *)(param_1 + 0x790) != 0) {
    (**(code **)(*DAT_00469940 + 0x40))(*(int *)(param_1 + 0x790),param_1 + 0x458);
    (**(code **)(*DAT_00469940 + 0x44))
              (*(undefined4 *)((int)fStack_4 + 0x790),(int)fStack_4 + 0x470);
  }
  iVar10 = 0x798;
  do {
    if (*(int *)(iVar10 + param_1) != 0) {
      FUN_0021c380(0x3f800000);
    }
    iVar10 = iVar10 + 8;
  } while (iVar10 < 0x7a8);
  if (((*(byte *)(param_1 + 0x261) & 0x80) == 0) && (*(float *)(param_1 + 0x71c) < _DAT_003c057c)) {
    FUN_0012bfa0();
    *(byte *)(param_1 + 0x261) = *(byte *)(param_1 + 0x261) | 0x80;
    FUN_0012eab0(1);
  }
  FUN_0012baf0(param_1,(1.0 - *(float *)(param_1 + 0x450)) * _DAT_003c0570,&fStack_3c,&fStack_3c);
  pfVar8 = (float *)(param_1 + 0x6f8);
  fStack_3c = fStack_3c + *pfVar8;
  fStack_38 = _DAT_003c0574 * param_2 + fStack_38 + *(float *)(param_1 + 0x6fc);
  fStack_34 = fStack_34 + *(float *)(param_1 + 0x700);
  fVar4 = _DAT_003c056c * param_2;
  *pfVar8 = (fStack_3c - *pfVar8) * fVar4 + *pfVar8;
  *(float *)(param_1 + 0x6fc) =
       (fStack_38 - *(float *)(param_1 + 0x6fc)) * fVar4 + *(float *)(param_1 + 0x6fc);
  *(float *)(param_1 + 0x700) =
       (fStack_34 - *(float *)(param_1 + 0x700)) * fVar4 + *(float *)(param_1 + 0x700);
  fVar4 = *(float *)(param_1 + 0x700) * *(float *)(param_1 + 0x700) +
          *(float *)(param_1 + 0x6fc) * *(float *)(param_1 + 0x6fc) +
          *(float *)(param_1 + 0x6f8) * *(float *)(param_1 + 0x6f8);
  if (_DAT_003c0578 * _DAT_003c0578 < fVar4) {
    auVar12 = rsqrtss(in_XMM0,fVar4);
    fVar4 = auVar12._0_4_ * _DAT_003c0578;
    uVar1 = *(undefined8 *)(param_1 + 0x6fc);
    *(float *)(param_1 + 0x6f8) = *(float *)(param_1 + 0x6f8) * fVar4;
    *(float *)(param_1 + 0x6fc) = (float)uVar1 * fVar4;
    *(float *)(param_1 + 0x700) = (float)((ulonglong)uVar1 >> 0x20) * fVar4;
  }
  fStack_28 = param_2 * *(float *)(param_1 + 0x71c);
  fStack_30 = *(float *)(param_1 + 0x6f8) * fStack_28;
  fStack_2c = (float)*(undefined8 *)(param_1 + 0x6fc) * fStack_28;
  fStack_28 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x6fc) >> 0x20) * fStack_28;
  if (_DAT_003c057c <= *(float *)(param_1 + 0x71c)) {
    *param_3 = fStack_30;
    param_3[1] = fStack_2c;
    param_3[2] = fStack_28;
  }
  else {
    fStack_10 = *(float *)(param_1 + 0x700);
    fStack_14 = *(float *)(param_1 + 0x6fc);
    fStack_18 = *(float *)(param_1 + 0x6f8);
    fVar6 = (*(float *)(param_1 + 0x71c) - _DAT_003c057c) * _DAT_0046d2fc;
    FUN_00039410();
    fStack_4 = *(float *)(param_1 + 0x5dc);
    fStack_1c = *(float *)(param_1 + 0x5f0);
    fStack_c = *(float *)(param_1 + 0x5c4);
    uStack_20 = *(undefined4 *)(param_1 + 0x5ec);
    fStack_24 = *(float *)(param_1 + 0x5e8);
    FUN_00039410();
    fVar11 = (float10)fpatan((float10)fStack_c,(float10)fStack_4);
    fVar3 = (float10)fcos((float10)(float)fVar11);
    fVar11 = (float10)fsin((float10)(float)fVar11);
    fVar4 = fStack_14 * 0.0 +
            fStack_18 * (fStack_24 * (float)fVar3 + fStack_1c * (float)fVar11) +
            fStack_10 * (fStack_1c * (float)fVar3 - fStack_24 * (float)fVar11);
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar5 = fVar5 * fVar6;
    *param_3 = (*param_3 - fStack_30) * fVar5 + fStack_30;
    param_3[1] = (param_3[1] - fStack_2c) * fVar5 + fStack_2c;
    param_3[2] = (param_3[2] - fStack_28) * fVar5 + fStack_28;
  }
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_1 + 0x454);
  return CONCAT31((int3)((uint)(param_1 + 0x704) >> 8),1);
}
