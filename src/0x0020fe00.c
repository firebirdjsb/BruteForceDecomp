/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA10F02FCFF847060AF283750DC38C7BEBFE94C9BB7A797A044CAA4205DB8981
 * Entry: 0x0020fe00, Ghidra index: 7414, label: FUN_0020fe00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020fe00(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_EAX + 0xa8) + 1;
  iVar2 = iVar2 * iVar2;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      *(undefined1 *)(*(int *)(in_EAX + 0x80) + 0xe + iVar1) = *(undefined1 *)(in_EAX + 0x8c);
      *(undefined1 *)(*(int *)(in_EAX + 0x80) + 0xd + iVar1) = *(undefined1 *)(in_EAX + 0x8d);
      *(undefined1 *)(*(int *)(in_EAX + 0x80) + 0xc + iVar1) = *(undefined1 *)(in_EAX + 0x8e);
      *(undefined1 *)(*(int *)(in_EAX + 0x80) + 0xf + iVar1) = *(undefined1 *)(in_EAX + 0x8f);
      iVar1 = iVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
