/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C69370D23088986C1D429BC2153707B16CEF06036E4359DE04E1DC4BCF504FB
 * Entry: 0x001a83e0, Ghidra index: 5436, label: FUN_001a83e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a83e0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 4;
    if (iVar1 != 0) goto LAB_001a840a;
  }
  FUN_001ad960();
LAB_001a840a:
  FUN_001b3850(local_10,local_c,local_8,local_4);
  return iVar1 * 0x10 + *(int *)(in_EAX + 4);
}
