/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6D63A9D93C60F35ED5C0E48040BF1CC96BAE93166254E94A98337B5F5F4D98E
 * Entry: 0x002bb050, Ghidra index: 9897, label: FUN_002bb050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb050(void)

{
  int iVar1;
  int in_EAX;
  
  *(undefined1 *)(in_EAX + 100) = 8;
  *(undefined4 *)(in_EAX + 0xb4) = 0;
  *(undefined4 *)(in_EAX + 0xb0) = 0;
  *(undefined4 *)(in_EAX + 0xac) = 0;
  *(undefined4 *)(in_EAX + 0xa4) = 0;
  *(undefined4 *)(in_EAX + 0xa0) = 0;
  *(undefined4 *)(in_EAX + 0x9c) = 0;
  *(undefined4 *)(in_EAX + 0x94) = 0;
  *(undefined4 *)(in_EAX + 0x90) = 0;
  *(undefined4 *)(in_EAX + 0x8c) = 0;
  *(undefined4 *)(in_EAX + 0x84) = 0;
  *(undefined4 *)(in_EAX + 0x80) = 0;
  *(undefined4 *)(in_EAX + 0x7c) = 0;
  *(undefined4 *)(in_EAX + 0xd4) = 0;
  *(undefined4 *)(in_EAX + 0xd0) = 0;
  *(undefined4 *)(in_EAX + 0xcc) = 0;
  iVar1 = *(int *)(in_EAX + 0xc);
  FUN_002bafd0(*(undefined4 *)(iVar1 + 0xb4),*(undefined4 *)(iVar1 + 0xb8),iVar1);
  return;
}
