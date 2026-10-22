/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BC9AF49E91115DF9088F2E0B51816770FB121A5D28B5216A979569F6062F565
 * Entry: 0x001ed400, Ghidra index: 6930, label: FUN_001ed400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ed400(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined1 *)(in_EAX + 0x5632);
  iVar2 = 4;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
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
