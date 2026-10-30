/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 985EFA385362A9D492CEBA5371D14C6A9300606FC2A401E7C28E7E2B4A6CB0E8
 * Entry: 0x001a6b00, Ghidra index: 5374, label: FUN_001a6b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6b00(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18;
    if (iVar1 != 0) goto LAB_001a6b39;
  }
  FUN_001aa480(in_EAX);
LAB_001a6b39:
  FUN_001b1960(0);
  return *(int *)(in_ECX + 4) + iVar1 * 0x18;
}
