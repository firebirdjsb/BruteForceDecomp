/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4CCECDA1BB02039F56D8D0EC76DC3881B038AA6BF2D651BACCBE95A8958A169
 * Entry: 0x00343394, Ghidra index: 12709, label: FUN_00343394
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00343394(char param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < '0') || ('9' < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
