/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DDB6898F6691C7E219D3D4F56DB0A62C7F1CBE1387C092E47CB8EE59FB5C5E3
 * Entry: 0x000c46d0, Ghidra index: 2407, label: FUN_000c46d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000c46d0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(in_ECX + 0x30) + 0x28);
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar3 + -0x2c;
  }
  uVar2 = *(uint *)(iVar4 + 0x68);
  if (((0 < (int)uVar2) && ((int)uVar2 < 5)) &&
     (*(int *)(*(int *)(*(int *)(iVar4 + 100) + 0x70) + 0x34 + uVar2 * 8) != 0)) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -0x2c;
    }
    uVar2 = *(uint *)(iVar3 + 100);
    if ((*(byte *)(uVar2 + 0x74) & 1) == 0) {
      cVar1 = FUN_00126810();
      if ((cVar1 != '\0') && (iVar3 = FUN_000c4250(), (*(byte *)(iVar3 + 0x70) & 1) == 0)) {
        return 1;
      }
      return 0;
    }
  }
  return uVar2 & 0xffffff00;
}
