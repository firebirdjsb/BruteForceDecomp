/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19E10CDBE1314B419000B490094E519035E8359C80BFF9DE8A141CA66A3441C6
 * Entry: 0x001a9780, Ghidra index: 5471, label: FUN_001a9780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9780(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x6c;
    if (iVar1 != 0) goto LAB_001a97b9;
  }
  FUN_001b0b00(in_EAX);
  in_EAX = 1;
LAB_001a97b9:
  FUN_001b0c40(iVar1 + in_EAX);
  return iVar1 * 0x6c + *(int *)(in_ECX + 4);
}
