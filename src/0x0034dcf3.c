/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB0C4A58CF2BC955AB8D0C790C2E94B4CAC9E41BEE1C8A068BEB8A7195FADB18
 * Entry: 0x0034dcf3, Ghidra index: 13010, label: FUN_0034dcf3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034dcf3(void)

{
  byte bVar1;
  int iVar2;
  byte *in_ECX;
  
  iVar2 = 1;
  for (; bVar1 = *in_ECX, bVar1 != 0; in_ECX = in_ECX + bVar1 + 1) {
    iVar2 = iVar2 + 1 + (uint)bVar1;
  }
  return iVar2;
}
