/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFD006944C647C74C35F9A1655A4965D0C59A1960E1AD7EA91204CFE599D40F6
 * Entry: 0x002c0220, Ghidra index: 10010, label: FUN_002c0220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469e18;
extern uint32_t DAT_00469e20;
extern uint32_t DAT_004a5b28;
extern uint32_t _DAT_00469f2c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c0220(int param_1,int param_2,int param_3)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_10;
  double local_8;
  
  iVar3 = *(int *)(*(int *)((*(uint *)(param_1 + 0x14) >> 8 & 3) * 0x1c + 0x28 + param_1) + 0x90);
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x14);
  iVar5 = *(int *)(*(int *)(((*(uint *)(param_1 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x28 + param_1)
                  + 0x90);
  fVar8 = *(float *)(iVar5 + 0x150) + *(float *)(iVar3 + 0x150) +
          *(float *)(iVar3 + 0x158) + *(float *)(iVar5 + 0x158);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002d5de0();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  fVar2 = *(float *)(&DAT_00469e20 + (*(uint *)(param_1 + 0x14) >> 0x16 & 0xff) * 4);
  if (fVar8 * *(float *)(iVar4 + 0xb4) * 2.1 + fVar2 < *(float *)(param_1 + 0x54)) {
    if (param_2 == 0) {
      return;
    }
    FUN_002c0b70();
    FUN_002c0cf0(*(float *)(param_1 + 0x54) - fVar2);
    return;
  }
  fVar2 = *(float *)(iVar3 + 0x140) * *(float *)(param_1 + 0x60) +
          *(float *)(iVar3 + 0x144) * *(float *)(param_1 + 100) +
          *(float *)(iVar3 + 0x148) * *(float *)(param_1 + 0x68);
  fVar9 = *(float *)(iVar5 + 0x140) * *(float *)(param_1 + 0x60) +
          *(float *)(iVar5 + 0x144) * *(float *)(param_1 + 100) +
          *(float *)(iVar5 + 0x148) * *(float *)(param_1 + 0x68);
  fVar9 = SQRT(1.001 - fVar9 * fVar9) * *(float *)(iVar5 + 0x158) +
          SQRT(1.001 - fVar2 * fVar2) * *(float *)(iVar3 + 0x158) +
          ((*(float *)(param_1 + 0x60) * *(float *)(iVar5 + 0xac) +
           *(float *)(param_1 + 100) * *(float *)(iVar5 + 0xb0) +
           *(float *)(param_1 + 0x68) * *(float *)(iVar5 + 0xb4)) -
          (*(float *)(param_1 + 0x60) * *(float *)(iVar3 + 0xac) +
          *(float *)(param_1 + 100) * *(float *)(iVar3 + 0xb0) +
          *(float *)(param_1 + 0x68) * *(float *)(iVar3 + 0xb4)));
  pdVar1 = (double *)(iVar4 + 0x108);
  dVar13 = *pdVar1;
  dVar12 = *pdVar1;
  fVar2 = *(float *)(param_1 + 0x54);
  if ((fVar9 < _DAT_00469f2c) && (fVar9 < 1e-10)) {
    return;
  }
  dVar10 = (*(double *)(iVar4 + 0x110) - *pdVar1) * (double)fVar9 +
           (double)*(float *)(&DAT_00469e20 + (*(uint *)(param_1 + 0x14) >> 0x16 & 0xff) * 4);
  dVar11 = (double)fVar2;
  if (dVar10 < dVar11 != (dVar10 == dVar11)) {
    return;
  }
  if ((*(uint *)(param_1 + 0x14) & 0x3000) == 0x1000) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x14);
  if (((uVar6 >> 0x16 & 0xff) != 0) &&
     (bVar7 = 2 < DAT_004a5b28, DAT_004a5b28 = DAT_004a5b28 + 1, bVar7)) {
    *(uint *)(param_1 + 0x14) = (((uVar6 >> 0x16) - 1) * 0x400000 ^ uVar6) & 0x3fc00000 ^ uVar6;
    DAT_004a5b28 = 0;
  }
  FUN_002bf0b0();
  if (local_10 == 0) {
    return;
  }
  if ((9.999999974752427e-07 <= local_8 - dVar12) || (local_8 = dVar13, param_3 == 0))
  goto LAB_002c061f;
  fVar2 = fVar2 - DAT_00469e18;
  if ((param_3 == 2) || ((local_10 & 0xf) != 0)) {
    if (fVar2 < 1e-06) {
      fVar8 = *(float *)(iVar4 + 0xb4) * 0.001;
      goto LAB_002c05da;
    }
    local_40 = *(undefined4 *)(iVar4 + 0x108);
    uStack_3c = *(undefined4 *)(iVar4 + 0x10c);
    fVar8 = *(float *)(iVar4 + 0xb4) * 0.0001 + fVar2 / fVar8;
  }
  else if (fVar2 < 1e-06) {
    local_40 = *(undefined4 *)(iVar4 + 0x108);
    uStack_3c = *(undefined4 *)(iVar4 + 0x10c);
    fVar8 = *(float *)(iVar4 + 0xb4) * 1e-05;
  }
  else {
    fVar8 = *(float *)(iVar4 + 0xb4) * 1e-07 + (fVar2 / fVar8) * 0.1;
LAB_002c05da:
    uStack_3c = *(undefined4 *)(iVar4 + 0x10c);
    local_40 = *(undefined4 *)(iVar4 + 0x108);
  }
  local_8 = (double)(fVar8 + (float)(double)CONCAT44(uStack_3c,local_40));
  if (0.0 <= local_8 - *(double *)(iVar4 + 0x110)) {
    return;
  }
LAB_002c061f:
  uVar14 = FUN_002d5d50(param_1,(float)((float10)local_8 -
                                       (float10)*(double *)(*(int *)(iVar4 + 4) + 0x18)));
  *(undefined4 *)(param_1 + 4) = uVar14;
  *(undefined1 *)(param_1 + 0x14) = (undefined1)local_10;
  return;
}
