/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED1019C0397B497AC6C29B22C06389E6B236AFA9D43D10C31E9071AAD80B8B17
 * Entry: 0x001a75d0, Ghidra index: 5402, label: FUN_001a75d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a75d0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_001a7607;
  }
  FUN_001aacf0();
LAB_001a7607:
  FUN_001b1dc0(local_c,local_8,local_4);
  return *(int *)(in_EAX + 4) + iVar1 * 0xc;
}
