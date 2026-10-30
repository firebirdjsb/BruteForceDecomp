/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 836C1BB4899E083E5F2193CF08B86B8E173D4EB75AFC044BA5351228B8883191
 * Entry: 0x00294fd0, Ghidra index: 9307, label: FUN_00294fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00294fd0(void)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if (uVar1 == 0xfffffff9) {
    uVar1 = *(uint *)(in_ECX[2] + 0x10);
  }
  else {
    if (uVar1 == 0xfffffffd) {
      return *(uint *)(in_ECX[2] + 0x14);
    }
    if (uVar1 == 0) {
      return *(uint *)(in_ECX[2] + 0x10) & (-1 < (int)*(uint *)(in_ECX[2] + 0x10)) - 1;
    }
  }
  return uVar1;
}
