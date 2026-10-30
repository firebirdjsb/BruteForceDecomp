/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 660715928F0FA61631FFC265C8E261B4D81DE32C80235063D1401238AABA6E61
 * Entry: 0x00183760, Ghidra index: 5202, label: FUN_00183760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00183760(void)

{
  char in_AL;
  char cVar1;
  int in_ECX;
  undefined4 unaff_EDI;
  undefined1 uStack00000004;
  
  uStack00000004 = 0;
  FUN_00183420();
  *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) ^ (in_AL << 1 ^ *(byte *)(in_ECX + 0x1c)) & 2;
  cVar1 = FUN_00183570(in_ECX,unaff_EDI);
  if ((cVar1 != '\0') && (cVar1 = FUN_00183630(in_ECX), cVar1 != '\0')) {
    cVar1 = FUN_00183710(unaff_EDI);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return uStack00000004;
}
