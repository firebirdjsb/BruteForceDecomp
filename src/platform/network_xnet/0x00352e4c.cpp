/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57DA68851A682D1E567955388D70EE904F6717639A8BDA6A2B3E63508DEC5664
 * Entry: 0x00352e4c, Ghidra index: 13070, label: FUN_00352e4c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00352e4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = KeQueryPerformanceCounter();
  *param_1 = uVar1;
  return;
}
