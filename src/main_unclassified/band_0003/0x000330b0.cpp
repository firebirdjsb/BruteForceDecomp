/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEA2683E6E913FB8E089EA0726C6B535C6CADB4D33C395C4BAC409293EAFCBA7
 * Entry: 0x000330b0, Ghidra index: 333, label: FUN_000330b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_normalize3.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* 0x3318d-331c8, 0x331e3-3321e, 0x33239-33274: the three
 * stored floats occupy XMM lanes 0, 2, 3. Memory-source MOVSS clears
 * lane 1 of XMM0; MOVHPS fills lanes 2 and 3. The shuffle selects lanes 3, 2,
 * then 0 for the length sum. Inherited XMM1 low lanes do not feed that sum
 * or the three stored results. Packed FP exception state is unverified.
 */

extern undefined4 FUN_000233a0(void);

undefined1 FUN_000330b0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int in_EAX;
  float *unaff_EDI;
  float first[3];
  float second[3];
  float third[3];
  undefined1 local_6;
  
  local_6 = 0;
  if ((((unaff_EDI != (float *)0x0) && (param_2 != (float *)0x0)) && (-1 < in_EAX)) &&
     (cVar9 = FUN_000233a0(), cVar9 != '\0')) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(iVar1 + 0x14 + in_EAX * 0x18);
    if (((iVar2 != 0) && (cVar9 = FUN_000233a0(), cVar9 != '\0')) &&
       (iVar1 = *(int *)(iVar1 + in_EAX * 0x18 + 0x2c), iVar1 != 0)) {
      fVar3 = param_2[2] - unaff_EDI[2];
      fVar4 = *param_2 - *unaff_EDI;
      fVar5 = *(float *)(iVar2 + 0x1c) - unaff_EDI[2];
      fVar6 = *(float *)(iVar2 + 0x14) - *unaff_EDI;
      fVar7 = *(float *)(iVar1 + 0x1c) - unaff_EDI[2];
      fVar8 = *(float *)(iVar1 + 0x14) - *unaff_EDI;
      first[0] = fVar4; first[1] = 0.0f; first[2] = fVar3;
      second[0] = fVar6; second[1] = 0.0f; second[2] = fVar5;
      third[0] = fVar8; third[1] = 0.0f; third[2] = fVar7;
      if (bf_x86_normalize3(first) && bf_x86_normalize3(second) &&
          bf_x86_normalize3(third)) {
        /* 0x3327f-332ab forms (z + x) + y for each x87 dot product;
         * exact x87 extended-precision behavior remains unverified. */
        if ((second[2] * first[2] + second[0] * first[0]) + second[1] * first[1] <
            (third[2] * first[2] + third[0] * first[0]) + third[1] * first[1]) {
          local_6 = 1;
        }
      }
    }
  }
  return local_6;
}
