/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F91712ECE4D5F9FB32762BFF32F18C135BC1B2A1374920D4DE22FAAE5026E1B
 * Entry: 0x002e7460, Ghidra index: 10507, label: FUN_002e7460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e7460(int param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_48 [9];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(in_ECX + 0x4898) == 5) {
    if (*(int *)(in_ECX + 0x28) == 2) {
      if (*(char *)(in_ECX + 0x4890) != '\0') {
        iVar2 = *(int *)(in_ECX + 0x4894);
        *(undefined1 *)(in_ECX + 0x4890) = 0;
        *(undefined4 *)(in_ECX + 0x4894) = 0;
        if (iVar2 < 0) {
          return;
        }
      }
    }
    else {
      if (*(int *)(in_ECX + 0x28) != 1) goto LAB_002e74b9;
      local_10 = 0;
      local_14 = 0x2e74af;
      (**(code **)**(undefined4 **)(in_ECX + 0x20))();
    }
    *(undefined4 *)(in_ECX + 0x4898) = 0;
  }
LAB_002e74b9:
  local_10 = 0x2e74c4;
  cVar1 = FUN_002e44a0();
  if (cVar1 != '\0') {
    local_10 = 0x2e74d4;
    local_10 = FUN_002e44c0();
    local_14 = 0x2e74dc;
    FUN_002e77b0();
    local_10 = 0x2e74e8;
    local_10 = FUN_002e44d0();
    local_14 = 0x2e74f0;
    FUN_002e77c0();
  }
  local_1c = *(undefined4 *)(param_1 + 0x34);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  local_14 = *(undefined4 *)(param_1 + 0x3c);
  local_10 = *(undefined4 *)(param_1 + 0x40);
  uStack_24 = *(undefined4 *)(param_1 + 0x2c);
  uStack_20 = *(undefined4 *)(param_1 + 0x30);
  puVar3 = (undefined4 *)(param_1 + 8);
  puVar4 = auStack_48;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_002e70f0();
  return;
}
