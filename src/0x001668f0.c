/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A46A6DE49FA124E6FAAF5382C20E65E42F6EE68682C5A16DD4ABAACDDCBA3A5
 * Entry: 0x001668f0, Ghidra index: 4722, label: FUN_001668f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001668f0(int param_1,int param_2)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  while (param_1 < in_EAX) {
    in_EAX = (in_EAX + -1) / 2;
    if (param_2 <= *(int *)(in_EAX * 0x520 + in_ECX)) break;
    FUN_001666b0(in_EAX * 0x520 + in_ECX);
  }
  FUN_001666b0(&param_2);
  iVar1 = 0x13;
  do {
    FUN_00068c90();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
