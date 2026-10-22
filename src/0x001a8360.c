/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F06D81CA67470BD23C9D3D0094C308954732A9C709BC7F51CD11CD3124C913DA
 * Entry: 0x001a8360, Ghidra index: 5435, label: FUN_001a8360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8360(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x3c;
    if (iVar1 != 0) goto LAB_001a83a0;
  }
  FUN_001ad820(param_1);
LAB_001a83a0:
  FUN_001b3730(0);
  return iVar1 * 0x3c + *(int *)(in_EAX + 4);
}
