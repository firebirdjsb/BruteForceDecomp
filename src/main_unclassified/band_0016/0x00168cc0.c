/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 612E04E245D6E1BB3B61275F55AD8A36118AF3833C7B9D1AB69B7978321DD879
 * Entry: 0x00168cc0, Ghidra index: 4742, label: FUN_00168cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00168cc0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int in_ECX;
  int in_EDX;
  int iVar4;
  float *unaff_EDI;
  
  *unaff_EDI = 1e+06;
  *param_1 = -1;
  if (1e-05 < *(float *)(*(int *)(in_ECX + 0xac) + in_EDX * 4)) {
    *param_1 = in_EDX;
    if (1e-05 <= ABS(*(float *)(*(int *)(in_ECX + 0xac) + in_EDX * 4))) {
      *unaff_EDI = (-1.0 / *(float *)(*(int *)(in_ECX + 0xac) + in_EDX * 4)) *
                   *(float *)(*(int *)(in_ECX + 0x7c) + in_EDX * 4);
    }
    else {
      *unaff_EDI = 0.0;
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x40)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x34) + iVar4 * 4);
      pfVar1 = (float *)(*(int *)(in_ECX + 0x9c) + iVar2 * 4);
      if (((*(float *)(*(int *)(in_ECX + 0x9c) + iVar2 * 4) < 0.0) && (1e-05 <= ABS(*pfVar1))) &&
         (fVar3 = (-1.0 / *pfVar1) * *(float *)(*(int *)(in_ECX + 0x1c) + iVar2 * 4),
         fVar3 < *unaff_EDI)) {
        *unaff_EDI = fVar3;
        *param_1 = iVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x40));
  }
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x54)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x48) + iVar4 * 4);
      pfVar1 = (float *)(*(int *)(in_ECX + 0xac) + iVar2 * 4);
      if (((*(float *)(*(int *)(in_ECX + 0xac) + iVar2 * 4) < 0.0) && (1e-05 <= ABS(*pfVar1))) &&
         (fVar3 = (-1.0 / *pfVar1) * *(float *)(*(int *)(in_ECX + 0x7c) + iVar2 * 4),
         fVar3 < *unaff_EDI)) {
        *unaff_EDI = fVar3;
        *param_1 = iVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x54));
  }
  return;
}
