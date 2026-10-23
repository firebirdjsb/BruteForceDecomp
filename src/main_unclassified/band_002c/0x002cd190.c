/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C990140417E4E4679846F7A39CD81CC58CE4EF51BD6701A3C73F93245F4494F0
 * Entry: 0x002cd190, Ghidra index: 10165, label: FUN_002cd190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
void FUN_002cd190(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *in_EAX;
  float *pfVar7;
  int *in_ECX;
  float *unaff_ESI;
  float *pfVar8;
  float fVar9;
  float fVar10;
  
  pfVar8 = (float *)((*in_EAX & 0xffff) * 0x10 + *in_ECX + (int)in_ECX);
  pfVar7 = (float *)((*(uint *)((int)in_EAX + *(int *)(&DAT_003b86e0 + ((uint)in_EAX & 0xc))) &
                     0xffff) * 0x10 + *in_ECX + (int)in_ECX);
  fVar1 = *pfVar7;
  fVar2 = *pfVar8;
  fVar9 = (float)*(undefined8 *)(pfVar7 + 1) - (float)*(undefined8 *)(pfVar8 + 1);
  fVar10 = (float)((ulonglong)*(undefined8 *)(pfVar7 + 1) >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
  fVar3 = *pfVar7;
  uVar5 = *(undefined8 *)(pfVar7 + 1);
  fVar4 = *param_1;
  uVar6 = *(undefined8 *)(param_1 + 1);
  *unaff_ESI = -((*pfVar8 - *param_1) * (fVar1 - fVar2) +
                ((float)*(undefined8 *)(pfVar8 + 1) - (float)*(undefined8 *)(param_1 + 1)) * fVar9 +
                ((float)((ulonglong)*(undefined8 *)(pfVar8 + 1) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20)) * fVar10);
  unaff_ESI[1] = (fVar3 - fVar4) * (fVar1 - fVar2) +
                 ((float)uVar5 - (float)uVar6) * fVar9 +
                 ((float)((ulonglong)uVar5 >> 0x20) - (float)((ulonglong)uVar6 >> 0x20)) * fVar10;
  return;
}
