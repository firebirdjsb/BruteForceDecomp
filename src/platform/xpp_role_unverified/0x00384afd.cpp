/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D43E50CC298D80557C4461E549321C548D127E8EB10E77119D41C6F63D57A108
 * Entry: 0x00384afd, Ghidra index: 13657, label: FUN_00384afd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00384afd(void)

{
  int iVar1;
  int in_ECX;
  uint in_EDX;
  uint uVar2;
  
  iVar1 = 0;
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    uVar2 = in_EDX & 1;
    in_EDX = in_EDX >> 1;
    iVar1 = uVar2 + iVar1 * 2;
  }
  return iVar1;
}
