/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0DA2684D2A9025A53AA7465A509C1E3A9DC7A610737254DACA6599318C8BFDE
 * Entry: 0x00347aa1, Ghidra index: 12872, label: FUN_00347aa1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00347aa1(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = 0;
  uVar1 = FUN_003498be(param_1,&local_8,param_2);
  if (local_8 != 0) {
    FUN_003479b2(1,0);
  }
  return uVar1;
}
