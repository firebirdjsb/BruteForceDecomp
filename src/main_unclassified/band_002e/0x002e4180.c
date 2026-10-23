/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FC842E14B740E950D1A75EB0AD8D7F387BD91D621ED0F1DF048A4582A89FAF3
 * Entry: 0x002e4180, Ghidra index: 10433, label: FUN_002e4180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e4180(void)

{
  int iVar1;
  byte *in_ECX;
  int iVar2;
  byte bVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*in_ECX != 0) {
    bVar3 = 0;
    do {
      iVar1 = iVar1 + ((in_ECX[1] >> (bVar3 & 0x1f) & 3) << 8 | (uint)in_ECX[iVar2 + 2]);
      iVar2 = iVar2 + 1;
      bVar3 = bVar3 + 2;
    } while (iVar2 < (int)(uint)*in_ECX);
  }
  return iVar1;
}
