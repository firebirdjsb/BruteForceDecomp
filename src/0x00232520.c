/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA200A0EA06FF6C0992A597A9D5FE44DDDF25B90035A42A0ED8F0410382F8986
 * Entry: 0x00232520, Ghidra index: 7764, label: FUN_00232520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00232520(void)

{
  int iVar1;
  int unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_002324c0();
  iVar1 = *(int *)(unaff_ESI + 0x228);
  if (*(int *)(iVar1 + 0x40) != 2) {
    if ((*(float *)(iVar1 + 0xd8) == 0.0) && (1 < *(int *)(iVar1 + 0xdc))) {
      fVar2 = fVar2 * (float10)0.9;
    }
    return fVar2;
  }
  fVar3 = (float10)*(float *)(iVar1 + 0x58) * (float10)*(float *)(iVar1 + 0x38);
  if (*(int *)(iVar1 + 0xb4) == 2) {
    return fVar2 + (float10)*(float *)(iVar1 + 0x3c) + fVar3;
  }
  if (*(int *)(iVar1 + 0xb4) == 1) {
    return (float10)*(float *)(iVar1 + 0x3c) * (float10)0.75 + fVar2 + fVar3;
  }
  return fVar3 + fVar2;
}
