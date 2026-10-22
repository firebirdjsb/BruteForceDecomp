/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F5512EC2BCB70E12344758E7530BE3EF704871D25E95155DF638BFF5BBF7CDB
 * Entry: 0x0031a8af, Ghidra index: 12267, label: FUN_0031a8af
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031a8af(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *local_c;
  int local_8;
  
  puVar6 = param_3;
  puVar5 = param_2;
  local_8 = -0x7fffbffb;
  if (param_2 == (undefined4 *)0x0) {
    if (param_3 == (undefined4 *)0x0) {
      return -0x7fffbffb;
    }
    uVar7 = *param_3;
    param_2 = (undefined4 *)param_3[1];
    FUN_00316656(param_3);
    iVar2 = param_1;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = param_1 + 0x24;
      RtlEnterCriticalSection(iVar1);
      param_1 = 0;
      iVar3 = FUN_0031a72f(&param_1);
      puVar5 = param_3;
      if (iVar3 == 0) {
        FUN_00316674(puVar6,0,0,0,0x80004005);
      }
      else {
        param_1 = param_1 * 0x30;
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x40) + 0x14 + param_1);
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
        *(undefined4 *)(*(int *)(iVar2 + 0x40) + 0x2c + param_1) = 0x8000000a;
        *(undefined4 *)(*(int *)(iVar2 + 0x40) + 8 + param_1) = *(undefined4 *)(iVar2 + 0x20);
        *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + param_3[1];
        local_8 = FUN_00314a61(uVar7,param_2,0,*(int *)(iVar2 + 0x40) + param_1);
        if (local_8 < 0) {
          FUN_00316674(puVar5,0,0,0,0x80004005);
          XAPILIB__SetEvent(*(undefined4 *)(*(int *)(iVar2 + 0x40) + 0x10 + param_1));
        }
      }
      RtlLeaveCriticalSection(iVar1);
      return local_8;
    }
    local_8 = FUN_00314a61(uVar7,param_2,&param_2,0);
    puVar5 = puVar6;
    if (local_8 < 0) {
      uVar7 = 0x80004005;
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar7 = 0;
      puVar6 = param_2;
    }
  }
  else {
    param_3 = (undefined4 *)*param_2;
    local_c = (undefined4 *)param_2[1];
    FUN_00316656(param_2);
    local_8 = FUN_00314af5(param_3,local_c,&local_c);
    if (local_8 < 0) {
      uVar7 = 0x80004005;
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar7 = 0;
      puVar6 = local_c;
    }
  }
  FUN_00316674(puVar5,puVar6,0,0,uVar7);
  return local_8;
}
