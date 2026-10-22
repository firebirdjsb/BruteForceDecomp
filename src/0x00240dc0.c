/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDFFB2DFB7BD9DEA7DB6C6B3A58AFE5A109AC79145200E6C421AB67F9B182397
 * Entry: 0x00240dc0, Ghidra index: 7991, label: FUN_00240dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00240dc0(void)

{
  int in_EAX;
  undefined4 in_ECX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 4;
    if (iVar1 != 0) goto LAB_00240de8;
  }
  FUN_00241930(in_ECX);
LAB_00240de8:
  FUN_001b57a0(0,0,0,0);
  return iVar1 * 0x10 + *(int *)(in_EAX + 4);
}
