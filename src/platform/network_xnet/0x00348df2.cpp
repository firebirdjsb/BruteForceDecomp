/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC8733AEEA578D4D7FDC9E62581E101D4FDB5C8018E3B2281999B46FB521CE2B
 * Entry: 0x00348df2, Ghidra index: 12910, label: FUN_00348df2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00348df2(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar5 = param_2;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  if (param_1 == 0x100007f) {
    if (param_2 != (undefined4 *)0x0) {
      FUN_0034877b(param_2);
    }
    uVar1 = 0;
  }
  else {
    KeRaiseIrqlToDpcLevel();
    pbVar2 = (byte *)FUN_00348472(param_1);
    if (((pbVar2 == (byte *)0x0) || (pbVar2[2] == 1)) || ((*pbVar2 & 4) != 0)) {
      uVar1 = 0x2726;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        pbVar4 = pbVar2 + 0xc4;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_2 = *(undefined4 *)pbVar4;
          pbVar4 = pbVar4 + 4;
          param_2 = param_2 + 1;
        }
      }
      if (param_3 != (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)(pbVar2 + 0xc0);
        *param_3 = *puVar5;
        param_3[1] = puVar5[1];
      }
      uVar1 = 0;
    }
    KfLowerIrql();
  }
  return uVar1;
}
