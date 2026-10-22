/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 835366EBF61CF781E8B98CB256F4A1BC86DC8F541EB8EEEE4C599C1B63D6409B
 * Entry: 0x0020efb0, Ghidra index: 7409, label: FUN_0020efb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020efb0(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  
  iVar6 = *(int *)(param_1 + 0xa8) + 1;
  iVar6 = iVar6 * iVar6;
  if (0 < iVar6) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      fVar2 = *(float *)(param_1 + 0x94);
      pfVar7 = (float *)(*(int *)(param_1 + 0x84) + iVar4);
      uVar1 = *(undefined8 *)(pfVar7 + 1);
      pfVar3 = (float *)(*(int *)(param_1 + 0x80) + iVar5);
      *pfVar3 = fVar2 * *pfVar7;
      pfVar3[1] = fVar2 * (float)uVar1;
      iVar4 = iVar4 + 0xc;
      iVar5 = iVar5 + 0x18;
      iVar6 = iVar6 + -1;
      pfVar3[2] = fVar2 * (float)((ulonglong)uVar1 >> 0x20);
    } while (iVar6 != 0);
  }
  return;
}
