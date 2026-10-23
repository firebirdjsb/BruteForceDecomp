/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E686D8D5041666E5BC64DECFF0816306041C7517402506F8B859636855FBFAFC
 * Entry: 0x001a6b60, Ghidra index: 5375, label: FUN_001a6b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6b60(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x34;
    if (iVar1 != 0) goto LAB_001a6b96;
  }
  FUN_001b0ca0();
LAB_001a6b96:
  FUN_0016d420();
  return iVar1 * 0x34 + *(int *)(in_EAX + 4);
}
