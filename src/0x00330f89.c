/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5B1B0D4DCE61E9BB023F2F4441256171AEF7ECE51C0016A7CD426ED5832F8BB
 * Entry: 0x00330f89, Ghidra index: 12386, label: FUN_00330f89
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00330f89(undefined4 *param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = 0;
  if (in_ECX == 0) {
    uVar4 = 0x80150005;
  }
  else if (*(int *)(in_ECX + 0xbc) == 0) {
    uVar4 = 0x80150002;
  }
  else {
    puVar6 = param_1;
    for (iVar2 = 0x7d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined1 *)param_1 = 0x4c;
    *(undefined1 *)((int)param_1 + 1) = 1;
    *(undefined2 *)((int)param_1 + 2) = 500;
    puVar5 = (undefined4 *)(*(int *)(in_ECX + 0xbc) + 0xbc);
    puVar6 = param_1;
    for (iVar2 = 0x70; puVar6 = puVar6 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
    }
    piVar1 = param_1 + 0x71;
    uVar3 = 0;
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0xbc) + 0x27c + uVar3);
      if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) {
        *piVar1 = iVar2;
        piVar1 = piVar1 + 1;
      }
      uVar3 = uVar3 + 0x14;
    } while (uVar3 < 0xf0);
  }
  return uVar4;
}
