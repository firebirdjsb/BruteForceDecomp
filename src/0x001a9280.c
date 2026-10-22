/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FAC1DAE9B7D6436ECB886ECB60E9E106164E52A87C9F8B188DD790124770CDD
 * Entry: 0x001a9280, Ghidra index: 5460, label: FUN_001a9280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9280(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_001a92b4;
  }
  FUN_001b12c0();
LAB_001a92b4:
  FUN_001b5af0(0,0,0);
  return *(int *)(in_EAX + 4) + iVar1 * 0xc;
}
