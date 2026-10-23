/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 275C767E7CD664C09183D73F16C3DCCA32C46A38E7BBD6F63707CD450B2FE7E5
 * Entry: 0x001e73b0, Ghidra index: 6805, label: FUN_001e73b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396cd4;
void FUN_001e73b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  FUN_001e67c0(param_1);
  FUN_001e6d80(param_1);
  piVar3 = (int *)(param_1 + 0x2b4);
  iVar2 = 8;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
      *piVar3 = 0;
    }
    puVar1 = (undefined4 *)FUN_002ea01d(0x40);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_00396cd4;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[1] = 0;
      puVar1[6] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[7] = 0;
      puVar1[0xc] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) & 0xe0;
      puVar1[0xe] = 0x3f800000;
      puVar1[0xf] = 0x3f800000;
    }
    *piVar3 = (int)puVar1;
    FUN_001e57d0(param_1,param_2);
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_001e5fc0(param_1);
  return;
}
