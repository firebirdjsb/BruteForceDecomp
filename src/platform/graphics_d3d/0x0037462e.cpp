/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46BC93360788EAE43B6604882F24FFCB4D1F30295E338AF9926B82D0D6C05142
 * Entry: 0x0037462e, Ghidra index: 13427, label: FUN_0037462e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037462e(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int in_EAX;
  undefined1 uVar4;
  int in_ECX;
  uint uVar5;
  
  iVar3 = in_EAX * 0x300 + 0x1dc + in_ECX;
  iVar1 = iVar3 + 0x100;
  uVar5 = 0;
  do {
    puVar2 = (undefined1 *)(iVar1 + uVar5);
    uVar4 = (undefined1)uVar5;
    puVar2[iVar3 - iVar1] = uVar4;
    *puVar2 = uVar4;
    puVar2[(iVar3 - iVar1) + 0x200] = uVar4;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x100);
  return;
}
