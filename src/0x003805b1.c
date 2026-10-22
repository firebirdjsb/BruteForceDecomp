/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95A5021F82C96928115CA88232036CE4528C9C59F14CC66B6E87B9CF87056487
 * Entry: 0x003805b1, Ghidra index: 13532, label: FUN_003805b1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003805b1(void)

{
  byte bVar1;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0xa2);
  if ((bVar1 & 4) == 0) {
    *(byte *)(in_ECX + 0xa2) = bVar1 | 4;
    FUN_003801d0(in_ECX + 0x82,in_ECX);
  }
  return;
}
