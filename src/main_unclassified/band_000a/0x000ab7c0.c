/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44C5682B46B37DF2DC0E94632456B2634D0CA3F963AFDC330AB726F1C4A3EF88
 * Entry: 0x000ab7c0, Ghidra index: 2048, label: FUN_000ab7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000ab7c0(void)

{
  byte *pbVar1;
  int iVar2;
  uint in_EAX;
  int iVar3;
  int in_EDX;
  
  if ((*(short *)(*(int *)(in_EDX + 0x34) + 0x20) < 600) ||
     (*(short *)(*(int *)(in_EDX + 0x34) + 0x22) < 400)) {
    pbVar1 = (byte *)(*(int *)(in_EDX + 0x68) + 0x13);
    *pbVar1 = *pbVar1 | 1;
  }
  else {
    iVar2 = *(int *)(in_EDX + 0x68);
    if ((*(byte *)(iVar2 + 0x38) & 1) != 0) {
      iVar3 = ((int)*(short *)(in_EDX + 0xe) - (int)*(short *)(iVar2 + 0xe)) / 2;
      *(short *)(iVar2 + 4) = (short)iVar3;
      iVar3 = iVar3 / 2;
      *(short *)(iVar2 + 6) = (short)iVar3;
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}
