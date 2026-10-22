/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC6B7218244D01B055A372DD4F5FB360D5FC27DC422EEDD47EB9FE8EC92F0EBF
 * Entry: 0x000bb8e0, Ghidra index: 2276, label: FUN_000bb8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bb8e0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int *unaff_EBX;
  
  cVar4 = FUN_000c9920();
  if (cVar4 != '\0') {
    fVar1 = (float)unaff_EBX[6];
    iVar3 = unaff_EBX[0xb];
    *(byte *)(unaff_EBX + 0x12) = *(byte *)(unaff_EBX + 0x12) & 0xe7;
    fVar2 = *(float *)(iVar3 + 0x40);
    *(float *)(iVar3 + 0x40) = fVar1;
    if (fVar1 != fVar2) {
      FUN_000c9890(iVar3);
    }
    (**(code **)(*unaff_EBX + 0x30))();
  }
  return;
}
