/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 236D69747F17F6A0B158F0F3E54A282F7C11D5B148E0E54E2DF2B1E42FBA9BD5
 * Entry: 0x000e2070, Ghidra index: 2786, label: FUN_000e2070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e2070(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_ECX;
  
  FUN_000e20c0();
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(in_EAX + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(in_EAX + 100);
  uVar1 = *(undefined4 *)(in_EAX + 0x6c);
  uVar2 = *(undefined4 *)(in_EAX + 0x68);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(in_EAX + 0x70);
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  *(undefined4 *)(in_ECX + 0x6c) = uVar1;
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(in_EAX + 0x74);
  return;
}
