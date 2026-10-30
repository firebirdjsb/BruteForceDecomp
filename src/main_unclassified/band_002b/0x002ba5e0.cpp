/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40269E19C7837464ECD0CA0498F73E508D2DEDA1C976F79C12A8CB3F918F5F38
 * Entry: 0x002ba5e0, Ghidra index: 9884, label: FUN_002ba5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002ba5e0(byte *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  int local_d4;
  undefined1 local_d0 [48];
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [20];
  float fStack_7c;
  
  psVar1 = (short *)(*(int *)(*(int *)(param_1 + 0xc) + 0xac) + 0x10);
  *psVar1 = *psVar1 + 1;
  FUN_002bb410(param_1);
  psVar1 = (short *)(*(int *)(*(int *)(param_1 + 0xc) + 0xac) + 0x10);
  *psVar1 = *psVar1 + -1;
  FUN_002bbdd0();
  if ((*param_1 & 0xc) == 0) {
    if ('\b' < (char)param_1[100]) {
      param_1[100] = 8;
    }
    bVar7 = param_1[100];
  }
  else {
    bVar7 = 0x10;
    param_1[100] = 8;
  }
  iVar5 = *(ushort *)(param_1 + 0x52) - 1;
  while (-1 < iVar5) {
    iVar5 = iVar5 + -1;
    *(byte *)(*(int *)(*(int *)(param_1 + 0x54) + 4 + iVar5 * 4) + 0x70) = bVar7;
  }
  if ((*param_1 & 0xc) != 0) {
    FUN_002bb050();
    FUN_002ba3b0(param_1);
    uVar6 = (uint)*(ushort *)(param_1 + 0x52);
    if (-1 < (int)(uVar6 - 1)) {
      piVar8 = (int *)(*(int *)(param_1 + 0x54) + (uVar6 - 1) * 4);
      do {
        for (puVar4 = *(undefined4 **)(*piVar8 + 0x24); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
        }
        piVar8 = piVar8 + -1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    return;
  }
  if (param_1[100] == 8) {
    FUN_002be1c0(*(undefined4 *)(param_1 + 0xc));
  }
  else {
    FUN_002be240();
  }
  psVar1 = (short *)(*(int *)(*(int *)(param_1 + 0xc) + 0xac) + 0x10);
  *psVar1 = *psVar1 + 1;
  uVar6 = (uint)*(ushort *)(param_1 + 0x52);
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
    piVar8 = *(int **)(*(int *)(*(int *)(param_1 + 0x54) + uVar6 * 4) + 0x24);
    if (piVar8 != (int *)0x0) {
      local_d4 = *(int *)((short)piVar8[3] + 0x70 + (int)piVar8);
      do {
        iVar5 = *(int *)((short)piVar8[3] + 0x70 + (int)piVar8);
        iVar10 = (int)(short)piVar8[3] + (int)piVar8;
        if (iVar5 != local_d4) {
          FUN_002c4880(local_d4,iVar5);
        }
        FUN_002ba100();
        FUN_002d29f0(iVar10);
        iVar5 = *(int *)(iVar10 + 0x10);
        uVar2 = *(undefined4 *)(iVar10 + 0x24);
        FUN_002d4e50(local_90);
        local_98 = *(undefined4 *)(iVar10 + 0x18);
        local_94 = *(undefined4 *)(iVar10 + 0x2c);
        piVar3 = *(int **)(*(int *)(iVar5 + 0x14) + 0xa4);
        local_a0 = iVar5;
        local_9c = uVar2;
        fVar11 = (float10)(**(code **)(*piVar3 + 8))(local_d0);
        fStack_7c = (float)fVar11;
        fVar11 = (float10)(**(code **)(*piVar3 + 4))(&local_d4);
        *(float *)(iVar10 + 0x44) = (float)fVar11;
        FUN_002c5ce0();
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)0x0);
    }
  }
  piVar8 = *(int **)(*(int *)(param_1 + 0xc) + 0xac);
  iVar5 = piVar8[1];
  *(short *)(piVar8 + 4) = (short)piVar8[4] + -1;
  if ((iVar5 != 0) && (iVar5 != *piVar8)) {
    (*(code *)PTR_FUN_003bc654)(iVar5);
    return;
  }
  uVar6 = *piVar8 + 0x23U & 0xffffffe0;
  piVar8[2] = uVar6;
  uVar9 = (uint)*(ushort *)((int)piVar8 + 0x12);
  if (*(ushort *)((int)piVar8 + 0x12) == 0) {
    uVar9 = 0x7fe0;
  }
  piVar8[3] = uVar6 + uVar9;
  piVar8[1] = *piVar8;
  return;
}
