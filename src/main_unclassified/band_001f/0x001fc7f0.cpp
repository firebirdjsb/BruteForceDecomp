/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 404C4BB8719D144A0E350B0A3EF0CCDD7CB2E4DB09D301321DF08DE3C37BAD57
 * Entry: 0x001fc7f0, Ghidra index: 7168, label: FUN_001fc7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fc7f0(void)

{
  byte bVar1;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = *unaff_EBX;
  if ((unaff_EDI + 1 != unaff_EBX + 1) && (unaff_EDI[2] != unaff_EBX[2])) {
    FUN_0008f6a0(unaff_EBX[2]);
  }
  if (unaff_EDI[4] != unaff_EBX[4]) {
    FUN_0008f6a0(unaff_EBX[4]);
  }
  unaff_EDI[0xc] = unaff_EBX[0xc];
  *(byte *)(unaff_EDI + 0xf) =
       *(byte *)(unaff_EDI + 0xf) ^ (*(byte *)(unaff_EDI + 0xf) ^ *(byte *)(unaff_EBX + 0xf)) & 1;
  unaff_EDI[0xe] = unaff_EBX[0xe];
  unaff_EDI[0xd] = unaff_EBX[0xd];
  bVar1 = *(byte *)(unaff_EDI + 0xf) ^ (*(byte *)(unaff_EDI + 0xf) ^ *(byte *)(unaff_EBX + 0xf)) & 2
  ;
  *(byte *)(unaff_EDI + 0xf) = bVar1;
  *(byte *)(unaff_EDI + 0xf) = (*(byte *)(unaff_EBX + 0xf) ^ bVar1) & 4 ^ bVar1;
  return;
}
