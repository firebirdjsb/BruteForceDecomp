/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 967800B534B1BE53EA193B930B5256DA566D0343055C47CE2C82D77D6B959955
 * Entry: 0x001d32a0, Ghidra index: 6312, label: FUN_001d32a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d32a0(void)

{
  undefined1 *in_EAX;
  undefined1 *in_ECX;
  
  *in_EAX = *in_ECX;
  *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(in_EAX + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  *(undefined4 *)(in_EAX + 0x34) = *(undefined4 *)(in_ECX + 0x34);
  *(undefined4 *)(in_EAX + 0x38) = *(undefined4 *)(in_ECX + 0x38);
  return;
}
