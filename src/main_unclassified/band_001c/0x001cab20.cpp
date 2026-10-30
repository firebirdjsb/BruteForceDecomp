/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9DAABEAC7230B27A46D57D9CC0A70FE1B673F3BABCC0BDED8889D247C734824
 * Entry: 0x001cab20, Ghidra index: 5852, label: FUN_001cab20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cab20(void)

{
  int iVar1;
  undefined1 *in_EAX;
  undefined1 *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  *in_EAX = *in_ECX;
  puVar2 = (undefined4 *)(in_EAX + 4);
  iVar1 = 4 - (int)puVar2;
  iVar3 = 2;
  do {
    *puVar2 = *(undefined4 *)(in_ECX + iVar1 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (undefined4 *)(in_EAX + 0xc);
  iVar1 = 0xc - (int)puVar2;
  iVar3 = 6;
  do {
    *puVar2 = *(undefined4 *)(in_ECX + iVar1 + (int)puVar2);
    puVar2[1] = *(undefined4 *)(in_ECX + iVar1 + 4 + (int)puVar2);
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
