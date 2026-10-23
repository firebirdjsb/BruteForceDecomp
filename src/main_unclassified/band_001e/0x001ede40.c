/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACD5673E201825CBCB87B97967B03CA4199324E8C3D9488583E3870F1EC2A12F
 * Entry: 0x001ede40, Ghidra index: 6950, label: FUN_001ede40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001ede40(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x21c);
  if ((uVar1 & 1) == 0) {
    *(uint *)(in_ECX + 0x21c) = uVar1 | 1;
    return 1;
  }
  if ((uVar1 & 2) == 0) {
    *(uint *)(in_ECX + 0x21c) = uVar1 | 2;
    return 2;
  }
  if ((uVar1 & 4) == 0) {
    *(uint *)(in_ECX + 0x21c) = uVar1 | 4;
    return 3;
  }
  return 0xffffffff;
}
