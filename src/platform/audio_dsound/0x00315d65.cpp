/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A47FD9445730504BED17EF7CBF06C90C22159EE011CF324CD3F59ECCA0A8FF1
 * Entry: 0x00315d65, Ghidra index: 12119, label: FUN_00315d65
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00315d65(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  FUN_00315d02();
  puVar1 = (undefined4 *)(in_ECX + 0x6c0);
  local_8 = 3;
  do {
    puVar3 = (undefined4 *)*puVar1;
    while (puVar3 != puVar1) {
      (**(code **)(puVar3[-0x13] + 0x14))();
      *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + 1;
      puVar2 = (undefined4 *)*puVar3;
      if (puVar2 == puVar3) {
        puVar2 = (undefined4 *)*puVar1;
      }
      *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + -1;
      puVar3 = puVar2;
    }
    puVar1 = puVar1 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  while( true ) {
    *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + 1;
    puVar1 = (undefined4 *)FUN_003118c0(*(undefined4 *)(in_ECX + 0x6d8));
    *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + -1;
    if ((undefined4 *)(in_ECX + 0x6d8) == puVar1) break;
    (**(code **)(puVar1[-0x15] + 0x14))();
  }
  return;
}
