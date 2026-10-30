/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 811AB154D952193EABAEF75443CD09075B7945E230CD206BCD6B47356010937A
 * Entry: 0x00380e8a, Ghidra index: 13539, label: FUN_00380e8a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00380e8a(void)

{
  undefined1 *puVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(in_ECX + 0x79) * 0x20;
  puVar1 = (undefined1 *)(*(int *)(in_ECX + 0xe0) + 1 + iVar2);
  *(undefined1 *)(in_ECX + 0x79) = *puVar1;
  *puVar1 = 0x80;
  *(undefined1 *)(*(int *)(in_ECX + 0xe0) + 2 + iVar2) = 0x80;
  *(undefined1 *)(*(int *)(in_ECX + 0xe0) + 3 + iVar2) = 0x80;
  *(undefined4 *)(*(int *)(in_ECX + 0xe0) + 0x1c + iVar2) = 0;
  *(undefined1 *)(*(int *)(in_ECX + 0xe0) + 7 + iVar2) = 0xff;
  return *(int *)(in_ECX + 0xe0) + iVar2;
}
