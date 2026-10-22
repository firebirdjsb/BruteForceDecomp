/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 699095811CD46981F3123C25A39B82C0B0BB0BCAB8344C4173D8C69247A1F257
 * Entry: 0x001a8600, Ghidra index: 5442, label: FUN_001a8600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8600(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x2c;
    if (iVar1 != 0) goto LAB_001a8639;
  }
  FUN_001adb90(in_EAX);
LAB_001a8639:
  FUN_001b3a40(0);
  return iVar1 * 0x2c + *(int *)(in_ECX + 4);
}
