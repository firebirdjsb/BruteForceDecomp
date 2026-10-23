/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2A74C04CD4829BC01C5E5D1A5B636F8977EADFA2C171283731CFCDD69D172E0
 * Entry: 0x001a8190, Ghidra index: 5431, label: FUN_001a8190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8190(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x38;
    if (iVar1 != 0) goto LAB_001a81d0;
  }
  FUN_001ad300(param_1);
LAB_001a81d0:
  FUN_001b33a0(0);
  return iVar1 * 0x38 + *(int *)(in_EAX + 4);
}
