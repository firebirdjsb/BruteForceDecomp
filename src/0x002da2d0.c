/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF4F7978DABEA70B88E4E53A5DF0BE4FB5005C88784DC9A96B22D5E8C41C8ADA
 * Entry: 0x002da2d0, Ghidra index: 10266, label: FUN_002da2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002da2d0(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  iVar3 = *(int *)(in_EDX + 0x3c);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      fVar1 = 0.0;
      if (-1 < iVar3 + -1) {
        pfVar2 = (float *)(*(int *)(in_EDX + 0x1c) + (iVar3 + -1) * 4);
        do {
          iVar3 = iVar3 + -1;
          fVar1 = *(float *)(((*(int *)(in_EDX + 0x10) + *(int *)(in_EDX + 0x40) * iVar4 * 4) -
                             *(int *)(in_EDX + 0x1c)) + (int)pfVar2) * *pfVar2 + fVar1;
          pfVar2 = pfVar2 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(float *)(*(int *)(in_EDX + 0x18) + -4 + iVar4 * 4) =
           fVar1 - *(float *)(*(int *)(in_EDX + 0x14) + iVar3);
      iVar3 = *(int *)(in_EDX + 0x3c);
    } while (iVar4 < iVar3);
  }
  return;
}
