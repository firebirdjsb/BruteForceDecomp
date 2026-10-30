/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 053A5AC2DDF34E37FE67806C650590BF66D41B797729468729A293DC6D8F9C90
 * Entry: 0x0027bf80, Ghidra index: 8969, label: FUN_0027bf80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0027bf80(void)

{
  undefined4 *in_EAX;
  int *piVar1;
  undefined4 local_14 [5];
  
  local_14[0] = *in_EAX;
  piVar1 = (int *)FUN_0027c1a0(local_14);
  return *piVar1 + 0x10;
}
