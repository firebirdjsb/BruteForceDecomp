/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 495B1ADA22FC04569985A37770533D6790D555EAE5CD3EDEFA6C01768BCC47D2
 * Entry: 0x002dc450, Ghidra index: 10300, label: FUN_002dc450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dc450(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float local_4;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar6 = iVar1 + -1;
  local_4 = 0.0;
  if (iVar6 < 0) {
LAB_002dc4ba:
    fVar2 = 1.0;
  }
  else {
    pfVar4 = (float *)((*(int *)(in_ECX + 8) * 4 + 4) * iVar6 + *(int *)(in_ECX + 0xc));
    iVar5 = iVar1;
    do {
      if (local_4 < *pfVar4) {
        local_4 = *pfVar4;
      }
      pfVar4 = pfVar4 + (-1 - *(int *)(in_ECX + 8));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (local_4 <= 1e-10) goto LAB_002dc4ba;
    fVar2 = 1.0 / local_4;
  }
  *(float *)(in_ECX + 0x18) = fVar2;
  fVar3 = 0.0;
  if (-1 < iVar6) {
    pfVar4 = (float *)(*(int *)(in_ECX + 0x10) + iVar6 * 4);
    iVar6 = iVar1;
    do {
      if (fVar3 < ABS(*pfVar4)) {
        fVar3 = ABS(*pfVar4);
      }
      pfVar4 = pfVar4 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (1e-10 < fVar3) {
      local_4 = 1.0 / fVar3;
      goto LAB_002dc51c;
    }
  }
  local_4 = 1.0;
  fVar3 = 1.0;
LAB_002dc51c:
  iVar6 = 0;
  *(float *)(in_ECX + 0x18) = fVar2 * fVar3;
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 8) * iVar6 * 4;
      iVar5 = 0;
      if (0 < *(int *)(in_ECX + 8)) {
        do {
          iVar5 = iVar5 + 1;
          *(float *)(iVar1 + -4 + iVar5 * 4) = fVar2 * *(float *)(iVar1 + -4 + iVar5 * 4);
        } while (iVar5 < *(int *)(in_ECX + 8));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 4));
  }
  iVar6 = *(int *)(in_ECX + 4);
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    *(float *)(*(int *)(in_ECX + 0x10) + iVar6 * 4) =
         local_4 * *(float *)(*(int *)(in_ECX + 0x10) + iVar6 * 4);
  }
  return;
}
