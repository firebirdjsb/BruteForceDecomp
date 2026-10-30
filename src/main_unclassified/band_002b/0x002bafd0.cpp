/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF4B2EE024C405145669970D1A1E189C0BAC0553DA75DE31A76D3C0D32CA22CC
 * Entry: 0x002bafd0, Ghidra index: 9896, label: FUN_002bafd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bafd0(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_EAX + 0x78) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_EAX + 0xec) = *(undefined4 *)(in_EAX + 0xdc);
  *(undefined4 *)(in_EAX + 0xf0) = *(undefined4 *)(in_EAX + 0xe0);
  *(undefined4 *)(in_EAX + 0xf4) = *(undefined4 *)(in_EAX + 0xe4);
  *(undefined4 *)(in_EAX + 0xf8) = *(undefined4 *)(in_EAX + 0xe8);
  *(undefined4 *)(in_EAX + 0x154) = 0;
  *(undefined4 *)(in_EAX + 0xb4) = 0;
  *(undefined4 *)(in_EAX + 0xb0) = 0;
  *(undefined4 *)(in_EAX + 0xac) = 0;
  *(undefined4 *)(in_EAX + 0xd4) = 0;
  *(undefined4 *)(in_EAX + 0xd0) = 0;
  *(undefined4 *)(in_EAX + 0xcc) = 0;
  *(undefined4 *)(in_EAX + 0x150) = 0;
  *(undefined4 *)(in_EAX + 0x158) = 0;
  *(undefined4 *)(in_EAX + 0x140) = 0x3f800000;
  *(undefined4 *)(in_EAX + 0x144) = 0;
  *(undefined4 *)(in_EAX + 0x148) = 0;
  return;
}
