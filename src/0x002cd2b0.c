/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C028D0C3EFA30CA8C2F104DDD2BCDF9A132C1E73BB429530EF96A4334198421F
 * Entry: 0x002cd2b0, Ghidra index: 10166, label: FUN_002cd2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7ed3;
extern uint32_t DAT_003b7ed4;
extern uint32_t DAT_003b7ed5;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002cd2b0(float *param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint in_EAX;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  int *in_EDX;
  float *pfVar8;
  float *pfVar9;
  int unaff_ESI;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar5 = in_EAX & 0xfffffff0;
  iVar2 = *in_EDX;
  pfVar8 = (float *)((*(uint *)(uVar5 + 4) & 0xffff) * 0x10 + iVar2 + (int)in_EDX);
  pfVar6 = (float *)((*(uint *)(uVar5 + 0xc) & 0xffff) * 0x10 + iVar2 + (int)in_EDX);
  uVar7 = (int)in_EAX >> 2 & 3;
  pfVar9 = (float *)((*(uint *)(uVar5 + 8) & 0xffff) * 0x10 + iVar2 + (int)in_EDX);
  uVar1 = *(undefined8 *)(pfVar8 + 1);
  fVar10 = *pfVar8 - *pfVar9;
  fVar14 = (float)uVar1 - (float)*(undefined8 *)(pfVar9 + 1);
  fVar17 = (float)((ulonglong)uVar1 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
  uVar1 = *(undefined8 *)(pfVar6 + 1);
  fVar11 = *pfVar6 - *pfVar9;
  fVar15 = (float)uVar1 - (float)*(undefined8 *)(pfVar9 + 1);
  fVar18 = (float)((ulonglong)uVar1 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
  fVar12 = fVar14 * fVar14 + fVar17 * fVar17 + fVar10 * fVar10;
  fVar13 = fVar15 * fVar15 + fVar18 * fVar18 + fVar11 * fVar11;
  fVar16 = (float)*(undefined8 *)(param_1 + 1) - (float)*(undefined8 *)(pfVar9 + 1);
  fVar19 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
  fVar3 = fVar10 * fVar11 + fVar14 * fVar15 + fVar17 * fVar18;
  fVar4 = fVar13 * fVar12 - fVar3 * fVar3;
  fVar14 = (*param_1 - *pfVar9) * fVar10 + fVar16 * fVar14 + fVar19 * fVar17;
  fVar11 = (*param_1 - *pfVar9) * fVar11 + fVar16 * fVar15 + fVar19 * fVar18;
  fVar10 = fVar13 * fVar14 - fVar11 * fVar3;
  fVar3 = fVar12 * fVar11 - fVar14 * fVar3;
  *(float *)(unaff_ESI + 0xc) = fVar4;
  *(float *)((char)(&DAT_003b7ed3)[uVar7] + unaff_ESI) = fVar3;
  *(float *)((char)(&DAT_003b7ed4)[uVar7] + unaff_ESI) = (fVar4 - fVar10) - fVar3;
  *(float *)((char)(&DAT_003b7ed5)[uVar7] + unaff_ESI) = fVar10;
  return;
}
