/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE1A35C7A483CC1743BA377CCD8B2963207136B6A18C37C73BD65617D041FA23
 * Entry: 0x002ba100, Ghidra index: 9879, label: FUN_002ba100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ba100(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  puVar1 = (undefined4 *)(in_EAX + 0x7c);
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0x9c);
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0xbc);
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(in_EAX + 0x4c) = 0;
  *(undefined2 *)(in_EAX + 0x4a) = 0;
  *(uint *)(in_EAX + 0x4c) = *(uint *)(in_EAX + 0x4c) & 0xfffffcff;
  return;
}
