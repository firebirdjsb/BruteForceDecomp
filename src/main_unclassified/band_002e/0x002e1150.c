/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9E81280BA7CA7C87D2A8AD28FE0B83B658C7E47D25B61366A059E48A77F2BF0
 * Entry: 0x002e1150, Ghidra index: 10363, label: FUN_002e1150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e1150(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(int *)(in_ECX + 0x54) != 0) {
    puVar2 = (undefined4 *)(in_ECX + 0x58);
    do {
      (*(code *)**(undefined4 **)*puVar2)(param_1,param_2,param_3);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x54));
  }
  return 0;
}
