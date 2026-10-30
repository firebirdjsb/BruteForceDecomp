/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EE363BC9276F6380757905288E8441661A7EFE1CFC5EF28F1A88679D5CC7742
 * Entry: 0x002f5ed2, Ghidra index: 10910, label: FUN_002f5ed2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f5ed2(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x38);
  do {
    puVar3 = puVar2;
    puVar2 = (undefined4 *)*puVar3;
    if (puVar2 == (undefined4 *)0x0) {
LAB_002f5f1f:
      puVar2 = (undefined4 *)FUN_002f5d91(param_1);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = param_2;
        puVar2[2] = param_3;
        *puVar2 = *puVar3;
        *puVar3 = puVar2;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        if (*(uint *)(param_1 + 0x1c) <= param_3) {
          *(uint *)(param_1 + 0x1c) = param_3;
        }
      }
      return;
    }
    uVar1 = puVar2[1];
    if (param_2 < uVar1) {
      if (param_2 + param_3 == puVar2[1]) {
        puVar2[2] = puVar2[2] + param_3;
        puVar2[1] = param_2;
        if ((uint)puVar2[2] <= *(uint *)(param_1 + 0x1c)) {
          return;
        }
        *(undefined4 *)(param_1 + 0x1c) = puVar2[2];
        return;
      }
      goto LAB_002f5f1f;
    }
    if (puVar2[2] + uVar1 == param_2) {
      param_3 = param_3 + puVar2[2];
      *puVar3 = *puVar2;
      FUN_002f5eb1(param_1,puVar2);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      puVar2 = puVar3;
      param_2 = uVar1;
      if (*(uint *)(param_1 + 0x1c) < param_3) {
        *(uint *)(param_1 + 0x1c) = param_3;
      }
    }
  } while( true );
}
