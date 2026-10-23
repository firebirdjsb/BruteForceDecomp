/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0158CA6ACF92FD52876234E6FBA0BBBF0D208CC699A0C4ED5A645749B6825E40
 * Entry: 0x0013bfe0, Ghidra index: 4000, label: FUN_0013bfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013bfe0(void)

{
  byte *pbVar1;
  char cVar2;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x1c) & 1) == 0) || (*(int *)(in_ECX + 0x18) == 0)) {
    cVar2 = FUN_0010e470();
  }
  else {
    cVar2 = FUN_0010e3e0();
  }
  if (cVar2 != '\0') {
    pbVar1 = (byte *)(*(int *)(in_ECX + 0x18) + 0x260);
    *pbVar1 = *pbVar1 | 2;
  }
  return 0;
}
