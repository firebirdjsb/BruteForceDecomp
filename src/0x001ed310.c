/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8186B14B83D893F56501518480F20B5EE9C73986E15D699325DB65D096D38FD7
 * Entry: 0x001ed310, Ghidra index: 6927, label: FUN_001ed310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ed310(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined1 *)(in_EAX + 0x5631);
  iVar2 = 4;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    puVar1 = puVar1 + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = (undefined4 *)(in_EAX + 0x5690);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  }
  return;
}
