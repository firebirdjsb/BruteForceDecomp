/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 060352C1444EAD81B71A9B09806E1333CD18951217771E903464BAEA194FD924
 * Entry: 0x00126460, Ghidra index: 3707, label: FUN_00126460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00126460(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  local_c = 0;
  piVar1 = (int *)FUN_00135410(local_10);
  *(undefined4 *)(*piVar1 + 0x10) = param_1;
  return;
}
