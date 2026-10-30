/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 694EF31EB5C3FBCB128277EEF52FBB9863B11F67AE67E8817E074BD077ABAFF9
 * Entry: 0x002d51b0, Ghidra index: 10218, label: FUN_002d51b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d51b0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(in_EAX + 0x30);
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0x50);
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0x70);
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0x90);
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EAX + 0xb0) = 0;
  *(undefined4 *)(in_EAX + 0xc0) = 0;
  *(undefined4 *)(in_EAX + 0xd0) = 0;
  *(undefined4 *)(in_EAX + 0xe8) = 0;
  return;
}
