/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F94687A150A07718882B12BA64586D7A8CE23889251B332FBDAFE9EFDC0C856
 * Entry: 0x00112790, Ghidra index: 3558, label: FUN_00112790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00112790(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint unaff_EBX;
  
  iVar2 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))();
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
     ((*(byte *)(*(int *)(iVar2 + 0x24) + 0x14) & 2) != 0)) {
    FUN_0008b790();
    cVar1 = FUN_00072b60();
    if (cVar1 != '\0') {
      uVar3 = FUN_0008b880();
      return uVar3;
    }
    return unaff_EBX >> 0x18;
  }
  return 0;
}
