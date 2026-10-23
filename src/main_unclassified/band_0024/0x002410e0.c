/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7D64ECCB302CF934495F56379BA7E19913652B016B00D31438F57D65DCF2CCA
 * Entry: 0x002410e0, Ghidra index: 7998, label: FUN_002410e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002410e0(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x24;
    if (iVar1 != 0) goto LAB_00241118;
  }
  FUN_00241f40();
LAB_00241118:
  FUN_00243480(0);
  return *(int *)(in_EAX + 4) + iVar1 * 0x24;
}
