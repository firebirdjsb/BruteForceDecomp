/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 819CBB06A546C41348885077B02CAEB76726242ED30A446FCE9AEB3CC5C8D57B
 * Entry: 0x0005e020, Ghidra index: 979, label: FUN_0005e020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0005e020(uint param_1)

{
  int iVar1;
  
  if (((param_1 & -(uint)((*(byte *)(param_1 + 0x26) & 0x40) != 0)) == 0) ||
     ((*(uint *)(*(int *)(param_1 + 0xc) + 0xa8) >> 0xb & 1) == 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    if ((iVar1 == 2) || ((iVar1 == 0x1a || (param_1 = iVar1 - 0x1f, param_1 == 0)))) {
      return 1;
    }
  }
  return param_1 & 0xffffff00;
}
