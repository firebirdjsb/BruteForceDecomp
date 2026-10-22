/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA12C47A5523058C1175271B23F5C18F0F4EF0FC5546457725471452774870FB
 * Entry: 0x0014a150, Ghidra index: 4285, label: FUN_0014a150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014a150(void)

{
  int in_EAX;
  
  *(byte *)(in_EAX + 0x1bc) = *(byte *)(in_EAX + 0x1bc) | 2;
  *(undefined1 *)(in_EAX + 0x79) = 0;
  (**(code **)(**(int **)(*(int *)(in_EAX + 0xc) + 0x15c) + 0x10))();
  return;
}
