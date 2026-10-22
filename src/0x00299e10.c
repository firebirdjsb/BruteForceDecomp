/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39CFEB6804C7E3F2D34D4C2758C1C57CE8BFA2B031A9CDF48ACCC17FFFD558A3
 * Entry: 0x00299e10, Ghidra index: 9396, label: FUN_00299e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00299e10(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int iVar2;
  
  iVar1 = (*(int *)(*(int *)(in_EAX + 8) + 8) - in_EDX) + 2;
  if (iVar1 < 0x100) {
    iVar2 = 2;
  }
  else {
    iVar2 = (uint)(0xffff < iVar1) * 2 + 3;
  }
  FUN_00299580(param_1,iVar2 + -2 + iVar1,0);
  return;
}
