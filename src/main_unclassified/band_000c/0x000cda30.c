/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F60BFDE2669E6C003420388CAB33B098414937F23ABFCDBCD192B0A6AE3AC2E5
 * Entry: 0x000cda30, Ghidra index: 2538, label: FUN_000cda30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cda30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar1;
  }
  if (puVar3 == puVar1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_001298b0(&param_1,0,0);
      return;
    }
    FUN_001298b0(&param_1,*puVar1,puVar1);
    return;
  }
  iVar2 = puVar3[2];
  puVar1 = *(undefined4 **)(iVar2 + 0x28);
  if (puVar1 == (undefined4 *)0x0) {
    if (*(int *)(iVar2 + 0x24) != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  FUN_00234470();
  *puVar1 = 0;
  if (puVar1[4] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar1[4]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(puVar1);
}
