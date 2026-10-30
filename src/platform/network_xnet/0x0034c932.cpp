/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 260F0E537EB77CF7F467A3CC388098F938E2C8802D297738C7DED8784718BAFB
 * Entry: 0x0034c932, Ghidra index: 12975, label: FUN_0034c932
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034c932(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = in_ECX[2] & 7;
  iVar1 = ((uint)in_ECX[2] >> 0x12 & 0x3c) + 0x14 + *in_ECX;
  if (3 < uVar2) {
    return iVar1 + 0xc;
  }
  if ((uVar2 != 3) && (uVar2 != 6)) {
    if ((uVar2 == 2) || (uVar2 == 5)) {
      iVar1 = iVar1 + 0x14;
    }
    return iVar1;
  }
  return iVar1 + 8;
}
