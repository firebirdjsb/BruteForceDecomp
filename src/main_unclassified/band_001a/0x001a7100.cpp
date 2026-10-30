/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A11C88EA3F4CA6A013358A61A68527C6F744C26593C6914CCBB94FA9EAE5655C
 * Entry: 0x001a7100, Ghidra index: 5389, label: FUN_001a7100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7100(int param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x1c;
    if (iVar1 != 0) goto LAB_001a7140;
  }
  FUN_001aabb0(param_1);
  param_1 = 1;
LAB_001a7140:
  FUN_001b1d00(iVar1 + param_1);
  return iVar1 * 0x1c + *(int *)(in_EAX + 4);
}
