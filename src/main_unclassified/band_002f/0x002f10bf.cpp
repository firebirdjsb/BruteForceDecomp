/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF887C4635D3952BEBE9E15F1A5C4A1A93CD28080F38BF864C93D8DAF24A7FF9
 * Entry: 0x002f10bf, Ghidra index: 10773, label: __ShrMan
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __ShrMan
   
   Library: Visual Studio 2003 Release */

void __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint local_8;
  
  bVar3 = (byte)(param_2 % 0x20);
  iVar2 = 0;
  local_8 = 0;
  do {
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
    *(uint *)(param_1 + iVar2 * 4) = uVar1 >> (bVar3 & 0x1f) | local_8;
    local_8 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 2;
  puVar4 = (undefined4 *)(param_1 + (2 - param_2 / 0x20) * 4);
  do {
    if (iVar2 < param_2 / 0x20) {
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar2 * 4) = *puVar4;
    }
    iVar2 = iVar2 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar2);
  return;
}
