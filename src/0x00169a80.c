/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0962A2058050C5C3375A5850625C1DE80B631670E991A298B358C3F29F51A5CF
 * Entry: 0x00169a80, Ghidra index: 4758, label: FUN_00169a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00169a80(void)

{
  byte *pbVar1;
  int in_EAX;
  uint uVar2;
  int in_ECX;
  undefined3 uVar3;
  
  uVar2 = *(uint *)(in_EAX + 4);
  if (uVar2 != *(uint *)(in_ECX + 4)) {
    pbVar1 = (byte *)(uVar2 + 0x7d8);
    uVar3 = (undefined3)(uVar2 >> 8);
    uVar2 = CONCAT31(uVar3,*pbVar1);
    if (((*pbVar1 & 3) == 0) && ((*(byte *)(*(uint *)(in_ECX + 4) + 0x7d8) & 3) == 0)) {
      return CONCAT31(uVar3,1);
    }
  }
  return uVar2 & 0xffffff00;
}
