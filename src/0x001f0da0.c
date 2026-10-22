/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43E3E5C2FC3B990E7BE1CA17F288A2FE6EBF8E443A8A3C3F61A64E9CCAE3A16D
 * Entry: 0x001f0da0, Ghidra index: 6982, label: FUN_001f0da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001f0da0(void)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  char *in_ECX;
  
  cVar2 = *in_ECX;
  while (cVar2 == ' ') {
    pcVar1 = in_ECX + 1;
    in_ECX = in_ECX + 1;
    in_EAX = in_EAX + -1;
    cVar2 = *pcVar1;
  }
  uVar3 = 0;
  for (; ((in_EAX != 0 && (cVar2 = *in_ECX, '/' < cVar2)) && (cVar2 < '8')); in_ECX = in_ECX + 1) {
    uVar3 = uVar3 << 3 | (int)cVar2 - 0x30U;
    in_EAX = in_EAX + -1;
  }
  return uVar3;
}
