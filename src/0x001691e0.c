/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4DA6321CFDC739FDB80167B02D24D0972359CB2C0C637AE2D188233AC8578C3
 * Entry: 0x001691e0, Ghidra index: 4746, label: FUN_001691e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001691e0(void)

{
  uint in_EAX;
  int iVar1;
  
  if ((*(byte *)(*(int **)(in_EAX + 4) + 0x6b) & 3) == 0) {
    iVar1 = (**(code **)(**(int **)(in_EAX + 4) + 0x20))();
    in_EAX = 0;
    if ((iVar1 == 0) || (in_EAX = *(uint *)(iVar1 + 0xc), *(int *)(in_EAX + 4) != 3)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}
