/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 330046F619799AED51E34BEEAA6A7E264F36B27C68EF7CD4FE0EC2C50C8B6F7A
 * Entry: 0x002be240, Ghidra index: 9970, label: FUN_002be240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002be240(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_EDX;
  
  iVar4 = *(ushort *)(in_EDX + 0xe) - 1;
  while (-1 < iVar4) {
    iVar4 = iVar4 + -1;
    iVar1 = *(int *)(*(int *)(in_EDX + 0x10) + 4 + iVar4 * 4);
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x108);
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10c);
    *(undefined4 *)(iVar1 + 0x178) = uVar2;
    *(undefined4 *)(iVar1 + 0x17c) = uVar3;
    *(undefined4 *)(iVar1 + 0x180) = uVar2;
    *(undefined4 *)(iVar1 + 0x184) = uVar3;
  }
  return;
}
