/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B39524E83F0047533F2CAA47CCEF2F8573A223A6BAE9E1F8DB328A4CA68C840
 * Entry: 0x001a7dd0, Ghidra index: 5419, label: FUN_001a7dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7dd0(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x18;
    if (iVar1 != 0) goto LAB_001a7e0e;
  }
  FUN_001acc00(param_1);
LAB_001a7e0e:
  FUN_001b3050(0);
  return *(int *)(in_EAX + 4) + iVar1 * 0x18;
}
