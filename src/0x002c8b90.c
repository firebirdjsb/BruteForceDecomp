/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B69FE8122F3E36D7D57662037968CDD1BA23BCA0DE76B338DDE8EB84BB04727E
 * Entry: 0x002c8b90, Ghidra index: 10129, label: FUN_002c8b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_____ERROR_____Excessive_sizeleve_004025f0[];
extern char s_____ERROR_______Mehr_als_27_Kind_004025a8[];
void FUN_002c8b90(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x180) + 0x10);
  if (0x28 < iVar3) {
    FID_conflict__wprintf(s_____ERROR_____Excessive_sizeleve_004025f0,iVar3);
  }
  puVar4 = *(uint **)(param_1 + 0x180);
  piVar6 = (int *)FUN_002ea01d(0x30);
  piVar11 = (int *)0x0;
  if (piVar6 != (int *)0x0) {
    *(undefined2 *)(piVar6 + 6) = 0;
    *(undefined2 *)((int)piVar6 + 0x1a) = 0;
    piVar6[7] = 0;
    *(undefined2 *)(piVar6 + 8) = 1;
    *(undefined2 *)(piVar6 + 9) = 0;
    *(undefined2 *)((int)piVar6 + 0x26) = 0;
    piVar6[10] = 0;
    *(undefined2 *)(piVar6 + 0xb) = 1;
    piVar6[5] = 0;
    piVar11 = piVar6;
  }
  uVar8 = *puVar4 & 0x80000001;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
  }
  uVar10 = puVar4[1] & 0x80000001;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
  }
  uVar9 = puVar4[2] & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  *piVar11 = (int)*puVar4 / 2;
  piVar11[1] = (int)puVar4[1] / 2;
  piVar11[2] = (int)puVar4[2] / 2;
  uVar5 = puVar4[3];
  piVar11[3] = uVar5 + 1;
  piVar11[4] = puVar4[4] + 1;
  fVar1 = *(float *)(param_1 + 0xa0 + (uVar5 + 1) * 4);
  fVar2 = *(float *)(param_1 + 0xa0 + param_2[3] * 4);
  if (uVar8 == 0xffffffff) {
    *piVar11 = *piVar11 + -1;
  }
  else if (uVar8 == 0) {
    if ((float)*param_2 * fVar2 < (float)*piVar11 * fVar1) {
      *piVar11 = *piVar11 + -1;
    }
  }
  if (uVar10 == 0xffffffff) {
    piVar11[1] = piVar11[1] + -1;
  }
  else if (uVar10 == 0) {
    if ((float)param_2[1] * fVar2 < (float)piVar11[1] * fVar1) {
      piVar11[1] = piVar11[1] + -1;
    }
  }
  if (uVar9 == 0xffffffff) {
    piVar11[2] = piVar11[2] + -1;
  }
  else if (uVar9 == 0) {
    if ((float)param_2[2] * fVar2 < (float)piVar11[2] * fVar1) {
      piVar11[2] = piVar11[2] + -1;
    }
  }
  if (0x1a < *(ushort *)((int)piVar11 + 0x1a)) {
    FID_conflict__wprintf(s_____ERROR_______Mehr_als_27_Kind_004025a8);
  }
  if (*(ushort *)(piVar11 + 6) <= *(ushort *)((int)piVar11 + 0x1a)) {
    FUN_002ccf80();
  }
  *(uint **)(piVar11[7] + (uint)*(ushort *)((int)piVar11 + 0x1a) * 4) = puVar4;
  *(short *)((int)piVar11 + 0x1a) = *(short *)((int)piVar11 + 0x1a) + 1;
  puVar4[5] = (uint)piVar11;
  uVar7 = FUN_002b2b80();
  FUN_002be9e0(piVar11,uVar7);
  *(int **)(param_1 + 0x180) = piVar11;
  return;
}
