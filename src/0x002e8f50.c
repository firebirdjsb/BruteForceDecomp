/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C99224290DDE2E03411D8E82FC041D52012946EBA569EA7611D18853083864B3
 * Entry: 0x002e8f50, Ghidra index: 10548, label: FUN_002e8f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e8f50(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  int *in_ECX;
  byte unaff_retaddr;
  
  puVar1 = param_1;
  if (in_ECX[1] != 0) {
    *param_1 = 0;
    iVar2 = (**(code **)(*in_ECX + 0x18))(&param_1);
    if ((-1 < iVar2) && ((char)unaff_retaddr < '\0')) {
      *puVar1 = (unaff_retaddr & 0x7f) << 8;
      (**(code **)(*in_ECX + 0x18))(&stack0x00000000);
    }
    *puVar1 = *puVar1 | (ushort)unaff_retaddr;
    return;
  }
  if (0x7f < *param_1) {
    param_1 = (ushort *)(CONCAT31(param_1._1_3_,(char)(*param_1 >> 8)) | 0x80);
    iVar2 = (**(code **)(*in_ECX + 0x18))(&param_1);
    if (iVar2 < 0) {
      return;
    }
  }
  param_1 = (ushort *)CONCAT31(param_1._1_3_,(char)*puVar1);
  (**(code **)(*in_ECX + 0x18))(&param_1);
  return;
}
