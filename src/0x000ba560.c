/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41E63C27FB1EFF8328F8EC00CB2C9E94B27F09A942CC4EC31ACADD1E0110ED17
 * Entry: 0x000ba560, Ghidra index: 2260, label: FUN_000ba560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ba560(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x38);
  uVar2 = *(undefined4 *)(in_ECX + 0x34);
  *in_EAX = *(undefined4 *)(in_ECX + 0x30);
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  return;
}
