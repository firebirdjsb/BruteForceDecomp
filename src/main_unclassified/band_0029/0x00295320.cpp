/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30528D74FE8219C80E0D2A367F0A854451787504382FAA7A0A2FF2F99485E03F
 * Entry: 0x00295320, Ghidra index: 9313, label: FUN_00295320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00295320(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_0028a210();
  iVar1 = 0;
  if (0 < param_2) {
    do {
      FUN_00289c10();
      FUN_00289860();
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}
