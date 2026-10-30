/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD96BF0F092F44911E28C89A7A5745EA82DDC756ABF463156A24CC227BB5DB7E
 * Entry: 0x0005e220, Ghidra index: 981, label: FUN_0005e220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0005e220(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = *(int *)(in_ECX + 4);
  iVar3 = 4;
  iVar4 = iVar2;
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar4 + 4) == unaff_EDI) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar1);
    if (iVar4 != iVar1) {
      iVar3 = iVar4 - iVar2 >> 3;
    }
  }
  return iVar3;
}
