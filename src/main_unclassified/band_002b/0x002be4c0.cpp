/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57C6A5263FE953A8CE836F21329EEF22AC359F44AC8EC575A21FDF6AE3C76876
 * Entry: 0x002be4c0, Ghidra index: 9973, label: FUN_002be4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* 0x002be7e3 calls DWORD [0x00469830].
 * ABI_UNVERIFIED: host pointer width and callee prototype remain unknown. */
extern code *DAT_00469830;
extern uint32_t PTR_FUN_003bc654;
void FUN_002be4c0(uint *param_1,int param_2,ushort *param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  
  *(uint **)(param_2 + 0xc) = param_1;
  psVar1 = (short *)(*(int *)(*(int *)(param_2 + 8) + 0xac) + 0x10);
  *psVar1 = *psVar1 + 1;
  uVar7 = (uint)*(ushort *)((int)param_1 + 0x22);
  uVar9 = (uint)*(ushort *)((int)param_1 + 0xe);
  uVar8 = 0;
  while (uVar9 = uVar9 - 1, 0 < (int)uVar9) {
    iVar6 = *(int *)(param_1[4] + uVar9 * 4);
    FUN_002be430();
    FUN_002baf20(iVar6);
    fVar11 = (float)*(undefined8 *)(iVar6 + 0xb0);
    fVar12 = (float)((ulonglong)*(undefined8 *)(iVar6 + 0xb0) >> 0x20);
    *(undefined1 *)(iVar6 + 0x65) = 0;
    *(undefined2 *)(iVar6 + 0x68) = 0;
    uVar8 = uVar8 | (uint)(1.0 - (fVar11 * fVar11 + fVar12 * fVar12 +
                                 *(float *)(iVar6 + 0xac) * *(float *)(iVar6 + 0xac)));
  }
  iVar6 = *(int *)param_1[4];
  FUN_002be430();
  FUN_002baf20(iVar6);
  fVar11 = (float)*(undefined8 *)(iVar6 + 0xb0);
  fVar12 = (float)((ulonglong)*(undefined8 *)(iVar6 + 0xb0) >> 0x20);
  *(undefined1 *)(iVar6 + 0x65) = 0;
  *(undefined2 *)(iVar6 + 0x68) = 0;
  if ((int)((uint)(1.0 - (fVar11 * fVar11 + fVar12 * fVar12 +
                         *(float *)(iVar6 + 0xac) * *(float *)(iVar6 + 0xac))) | uVar8) < 0) {
    *param_1 = *param_1 & 0xfffff7ff | 0x400;
  }
  else {
    uVar8 = *param_1;
    *param_1 = ((int)(uVar8 << 0x14) >> 0x12 ^ uVar8) & 0x3000 ^ uVar8;
    if ((*param_1 & 0x3000) != 0) {
      FUN_002be240();
    }
    *param_1 = *param_1 & 0xfffff3ff;
    iVar6 = *(int *)(param_2 + 8);
    *(short *)(iVar6 + 0x128) = *(short *)(iVar6 + 0x128) + -1;
    if (*(short *)(iVar6 + 0x128) == 0) {
      fVar10 = (float10)(*DAT_00469830)();
      *(short *)(iVar6 + 0x128) = (short)(int)(fVar10 * (float10)5.0) + 0xf;
      bVar5 = true;
      goto joined_r0x002be637;
    }
  }
  bVar5 = false;
joined_r0x002be637:
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    puVar2 = *(undefined4 **)(param_1[9] + uVar7 * 4);
    (**(code **)(*(int *)*puVar2 + 0x10))(param_2,puVar2 + 1);
  }
  uVar8 = (uint)*(ushort *)((int)param_1 + 0xe);
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    uVar3 = *(undefined4 *)(param_1[4] + uVar8 * 4);
    if (*param_3 <= param_3[1]) {
      FUN_002ccf80();
    }
    *(undefined4 *)(*(int *)(param_3 + 2) + (uint)param_3[1] * 4) = uVar3;
    param_3[1] = param_3[1] + 1;
  }
  if (bVar5) {
    FUN_002be350(*(undefined4 *)(param_2 + 8));
  }
  uVar8 = (uint)*(ushort *)((int)param_1 + 0xe);
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    iVar6 = *(int *)(param_1[4] + uVar8 * 4);
    uVar9 = (uint)*(ushort *)(iVar6 + 0x52);
    while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
      FUN_002b3220(*(undefined4 *)(*(int *)(iVar6 + 0x54) + uVar9 * 4));
    }
  }
  if ((*param_1 & 0x300) != 0) {
    FUN_002bda00();
    FUN_002bd5c0();
    iVar6 = FUN_002bd910(param_1);
    if (iVar6 != 0) {
      FUN_002bda00();
      FUN_002bd7a0(param_1,iVar6);
      FUN_002bd5c0();
    }
    *param_1 = *param_1 & 0xfffffcff;
  }
  piVar4 = *(int **)(*(int *)(param_2 + 8) + 0xac);
  iVar6 = piVar4[1];
  *(short *)(piVar4 + 4) = (short)piVar4[4] + -1;
  if ((iVar6 != 0) && (iVar6 != *piVar4)) {
    (*(code *)PTR_FUN_003bc654)(iVar6);
    return;
  }
  uVar8 = *piVar4 + 0x23U & 0xffffffe0;
  piVar4[2] = uVar8;
  uVar9 = (uint)*(ushort *)((int)piVar4 + 0x12);
  if (*(ushort *)((int)piVar4 + 0x12) == 0) {
    uVar9 = 0x7fe0;
  }
  piVar4[3] = uVar8 + uVar9;
  piVar4[1] = *piVar4;
  return;
}
