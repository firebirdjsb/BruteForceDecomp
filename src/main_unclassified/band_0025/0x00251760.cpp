/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C43C852AE428EF5BD5B3799E1EE9CA5B88968D1619E6ECF91A0F7C54F7B1F313
 * Entry: 0x00251760, Ghidra index: 8368, label: FUN_00251760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00251760(void)

{
  int in_EAX;
  undefined4 in_ECX;
  int iVar1;
  
  *(char *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = (char)((uint)in_ECX >> 8);
  iVar1 = *(int *)(in_EAX + 0x14) + 1;
  *(int *)(in_EAX + 0x14) = iVar1;
  *(char *)(iVar1 + *(int *)(in_EAX + 8)) = (char)in_ECX;
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  return;
}
