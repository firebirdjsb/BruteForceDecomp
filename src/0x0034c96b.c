/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC7DD7D17B41F7981DDC45A47B75ECB4C505EE13AB1CDDDEF7FEC2E9DE3412FB
 * Entry: 0x0034c96b, Ghidra index: 12976, label: FUN_0034c96b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034c96b(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar1 = in_ECX[2];
  uVar3 = uVar1 >> 4 & 7;
  uVar2 = (uVar1 >> 0x10 & 3) * 2;
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  return ((uVar1 >> 0x12 & 0x3c) - uVar3) + *in_ECX + uVar2 + 0x20 + (uVar1 >> 5 & 0x7f8);
}
