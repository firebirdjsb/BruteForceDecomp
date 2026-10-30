/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A847E0816F6AD29D7B898D9BEA7350936AEB956649341683F9F8B7F439432F39
 * Entry: 0x002dbfd0, Ghidra index: 10295, label: FUN_002dbfd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dbfd0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  iVar5 = *(int *)(in_ECX + 0x28) + -1;
  while (-1 < iVar5) {
    fVar2 = 0.0;
    iVar3 = *(int *)(in_ECX + 0x28) + -1;
    if (iVar5 < iVar3) {
      pfVar7 = (float *)(*(int *)(in_ECX + 0x1c) + iVar3 * 4);
      iVar4 = iVar3 - iVar5;
      pfVar6 = (float *)(*(int *)(in_ECX + 8) + (*(int *)(in_ECX + 0x24) * iVar5 + iVar3) * 4);
      do {
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + -1;
        iVar4 = iVar4 + -1;
        fVar2 = fVar1 * *pfVar6 + fVar2;
        pfVar6 = pfVar6 + -1;
      } while (iVar4 != 0);
    }
    fVar2 = *(float *)(*(int *)(in_ECX + 0x1c) + iVar5 * 4) - fVar2;
    iVar3 = iVar5 * 4;
    iVar5 = iVar5 + -1;
    *(float *)(*(int *)(in_ECX + 0x1c) + iVar3) = fVar2;
    *(float *)(*(int *)(in_ECX + 0x18) + 4 + iVar5 * 4) = fVar2;
  }
  return;
}
