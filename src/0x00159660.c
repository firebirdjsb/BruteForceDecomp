/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13D69B6987E9C1C9F3CD5F61E370DE270BCD96D1188EAA1796516E36D66F0261
 * Entry: 0x00159660, Ghidra index: 4504, label: FUN_00159660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00159660(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int *unaff_EBX;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar3 = (int *)unaff_EBX[0x5e];
  if (piVar3 != (int *)unaff_EBX[0x5f]) {
    local_18 = 0;
    do {
      iVar1 = *piVar3;
      FUN_002339d0(&local_34);
      local_20 = *(undefined4 *)(extraout_ECX + 0x28);
      iVar1 = *(int *)(iVar1 + 4);
      local_8 = local_34;
      local_14 = local_30;
      local_10 = local_2c;
      local_24 = *(undefined4 *)(extraout_ECX + 0x24);
      local_1c = *(undefined4 *)(extraout_ECX + 0x2c);
      local_c = local_28;
      FUN_002b39f0(0);
      iVar2 = *(int *)(unaff_EBX[3] + 4);
      if ((((iVar2 != 2) && (iVar2 != 0x1a)) && (iVar2 != 0x1f)) &&
         (((byte)**(undefined4 **)(iVar1 + 0x90) & 0xc) != 4)) {
        FUN_002b3c60();
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)unaff_EBX[0x5f]);
  }
  puVar4 = (undefined4 *)unaff_EBX[0x5a];
  if (puVar4 != (undefined4 *)unaff_EBX[0x5b]) {
    do {
      piVar3 = (int *)*puVar4;
      puVar4 = puVar4 + 1;
      (**(code **)(*piVar3 + 8))();
    } while (puVar4 != (undefined4 *)unaff_EBX[0x5b]);
  }
  if ((unaff_EBX[0x69] != 0) && (*(int *)(unaff_EBX[0x69] + 0x3c) != 0)) {
    (**(code **)(*unaff_EBX + 0x40))();
    FUN_002339d0(&local_14);
    local_18 = local_14;
    local_24 = local_10;
    local_20 = local_c;
    local_14 = *(undefined4 *)(extraout_ECX_00 + 0x24);
    local_1c = local_8;
    local_c = *(undefined4 *)(extraout_ECX_00 + 0x2c);
    local_8 = 0;
    local_10 = *(undefined4 *)(extraout_ECX_00 + 0x28);
    FUN_002b39f0(0);
  }
  return;
}
