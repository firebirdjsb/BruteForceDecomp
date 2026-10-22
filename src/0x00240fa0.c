/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0082C53C3F609324C0DDFE14071A6D15257B2CB2C26601A97072D6270FBF5E27
 * Entry: 0x00240fa0, Ghidra index: 7995, label: FUN_00240fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00240fa0(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x30;
    if (iVar1 != 0) goto LAB_00240fd9;
  }
  FUN_00241b90(in_EAX);
LAB_00240fd9:
  FUN_002431f0(0);
  return iVar1 * 0x30 + *(int *)(in_ECX + 4);
}
