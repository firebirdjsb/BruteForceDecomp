/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A3ACEC859CD47CB0C340C31FE83E986132AD28061F41A3A1DCD257EC11609D5
 * Entry: 0x001a8910, Ghidra index: 5445, label: FUN_001a8910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8910(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x5c;
    if (iVar1 != 0) goto LAB_001a894b;
  }
  FUN_001ae6f0(in_EAX);
LAB_001a894b:
  FUN_001b40b0(0);
  return iVar1 * 0x5c + *(int *)(in_ECX + 4);
}
