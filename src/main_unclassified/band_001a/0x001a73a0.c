/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5E0682AC0B53C9FA4A0B76E88E911812DA3A2CF168E374872C5A8B8101F4CCE
 * Entry: 0x001a73a0, Ghidra index: 5395, label: FUN_001a73a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a73a0(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_001a73d8;
  }
  FUN_001ab420(in_EAX);
LAB_001a73d8:
  FUN_001b21e0();
  return *(int *)(in_ECX + 4) + iVar1 * 0xc;
}
