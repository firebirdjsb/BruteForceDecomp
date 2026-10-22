/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4318BE57514DEE421754A3988C6B0601920004DB440FCC23AB784B943CF76383
 * Entry: 0x003861db, Ghidra index: 13690, label: FUN_003861db
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003861db(int param_1)

{
  undefined4 uVar1;
  int in_EDX;
  
  if (*(ushort *)(param_1 + 0x20) < 4) {
    if (*(int *)(in_EDX + 0x2c) == 0) {
      *(int *)(in_EDX + 0x28) = param_1;
    }
    else {
      *(int *)(*(int *)(in_EDX + 0x2c) + 0x24) = param_1;
    }
    *(int *)(in_EDX + 0x2c) = param_1;
    FUN_003860ee();
    uVar1 = 0x40000000;
  }
  else {
    uVar1 = 0x80000500;
  }
  return uVar1;
}
