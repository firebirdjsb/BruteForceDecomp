/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D95EA4F23156C3C822A39BE3CE7F4BA187EB09D4D8DC5F051254C63B254635D0
 * Entry: 0x002dbf80, Ghidra index: 10294, label: FUN_002dbf80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dbf80(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar4 = *(int *)(unaff_EDI + 0x28) + -1;
  while (-1 < iVar4) {
    fVar1 = 0.0;
    iVar3 = *(int *)(unaff_EDI + 0x28);
    if (-1 < iVar3 + -1) {
      pfVar2 = (float *)(*(int *)(unaff_EDI + 0x20) + (iVar3 + -1) * 4);
      do {
        iVar3 = iVar3 + -1;
        fVar1 = *(float *)(((*(int *)(unaff_EDI + 4) + *(int *)(unaff_EDI + 0x24) * iVar4 * 4) -
                           *(int *)(unaff_EDI + 0x20)) + (int)pfVar2) * *pfVar2 + fVar1;
        pfVar2 = pfVar2 + -1;
      } while (iVar3 != 0);
    }
    iVar4 = iVar4 + -1;
    *(float *)(*(int *)(unaff_EDI + 0x1c) + 4 + iVar4 * 4) = fVar1;
  }
  return;
}
