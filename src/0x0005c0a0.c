/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B14FE9355989D11F6E72BC782B0E6D474DF87C6A37A66D2F4378A70B4B96583
 * Entry: 0x0005c0a0, Ghidra index: 942, label: FUN_0005c0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0005c0a0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 != 0) goto LAB_0005c0b2;
    iVar3 = 0;
    while( true ) {
      if (*(int *)(iVar3 + 0x14) != 0) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) break;
LAB_0005c0b2:
      iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar2 * 4);
    }
  }
  return uVar2 & 0xffffff00;
}
