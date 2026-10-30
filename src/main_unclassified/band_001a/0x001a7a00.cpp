/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0EB1CE9DD880810F0C12CE4C95672808D9B6C5F89C7B16AEBB88879683DDD58
 * Entry: 0x001a7a00, Ghidra index: 5413, label: FUN_001a7a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7a00(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_001a7a34;
  }
  FUN_0017e6a0();
LAB_001a7a34:
  FUN_001b2a50();
  return *(int *)(in_EAX + 4) + iVar1 * 0xc;
}
