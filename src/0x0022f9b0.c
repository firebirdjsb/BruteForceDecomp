/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DD927BAFBE877E1B76045D5CFA2540C5475FAA898D006E6DB0CA6E3E3C0084C
 * Entry: 0x0022f9b0, Ghidra index: 7743, label: FUN_0022f9b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022f9b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 local_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int local_2c;
  undefined4 local_28;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = 0;
  puVar2 = local_60;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_14 = 0;
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (iVar1 == 0) {
    local_2c = 0;
    if (*(int *)(param_1 + 0x184) == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(undefined4 *)(*(int *)(param_1 + 0x184) + 0x1c);
    }
  }
  else {
    if (*(int *)(iVar1 + 8) == 0) {
      if ((*(int *)(iVar1 + 0x10) == 0) ||
         (local_2c = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0),
         *(int *)(*(int *)(local_2c + 0xc) + 4) != 3)) {
        local_2c = 0;
      }
    }
    else {
      local_2c = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    if (*(int *)(iVar1 + 8) == 0) {
      if ((*(int *)(iVar1 + 0x10) == 0) ||
         (iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0), *(int *)(*(int *)(iVar1 + 0xc) + 4) != 3)
         ) {
        iVar1 = 0;
      }
      local_28 = (**(code **)(**(int **)(*(int *)(iVar1 + 8) + 0xbec) + 0xc))(iVar1);
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
      local_28 = (**(code **)(**(int **)(*(int *)(iVar1 + 8) + 0xbec) + 0xc))(iVar1);
    }
  }
  local_18 = 0;
  FUN_00232180(param_2);
  fStack_48 = -fStack_70;
  fStack_4c = -fStack_74;
  fStack_50 = -local_78;
  local_14 = 0x3f800000;
  FUN_0022bfc0(*(undefined4 *)(param_1 + 0xc),0x3f800000);
  FUN_0022cfc0(*(undefined4 *)(param_1 + 8));
  if (local_1c != 0) {
    FUN_0008f6e0(fStack_70,fStack_74);
  }
  return;
}
