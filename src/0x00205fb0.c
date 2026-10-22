/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B441EFB66A950644DB22B69F809D01B7AB53AA9803DF4136D721FCC4697D8A8
 * Entry: 0x00205fb0, Ghidra index: 7294, label: FUN_00205fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00205fb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_001fb020();
  if (piVar2 == (int *)0x0) {
    local_10 = *(undefined4 *)(unaff_EBX + 0x88);
    uVar1 = 0;
    local_14 = *(undefined4 *)(unaff_EBX + 0x84);
    local_18 = *(undefined4 *)(unaff_EBX + 0x80);
    local_4 = 0;
    local_8 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x40))();
    local_10 = *(undefined4 *)(iVar3 + 0x2c);
    local_14 = *(undefined4 *)(iVar3 + 0x28);
    local_18 = *(undefined4 *)(iVar3 + 0x24);
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x54))();
    uVar1 = *puVar4;
    local_4 = puVar4[2];
    local_8 = puVar4[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_18;
    param_1[1] = local_14;
    param_1[2] = local_10;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar1;
    param_2[1] = local_8;
    param_2[2] = local_4;
    return;
  }
  return;
}
