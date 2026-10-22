/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9813EFE77A85DB8388B3F2A5B1E21A9B20547E0D12292732076A2EFF10D407B7
 * Entry: 0x00348661, Ghidra index: 12899, label: FUN_00348661
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00348661(int *param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  local_18 = FUN_00348472(param_2);
  if ((local_18 == 0) || (*(byte *)(local_18 + 2) < 6)) {
    return 0;
  }
  iVar3 = FUN_0034c855();
  puVar1 = (undefined2 *)((*(ushort *)(param_1 + 1) - 0xc) + *param_1);
  FUN_0034c1fc(&param_2,local_28,&local_10,local_c,&local_14,0,0);
  iVar2 = local_18;
  local_1c = CONCAT22(*(undefined2 *)((int)param_1 + 6),*puVar1);
  local_24 = iVar3 + 0xc;
  local_34 = *(undefined4 *)(puVar1 + 1);
  uStack_30 = *(undefined4 *)(puVar1 + 3);
  uStack_2c = puVar1[5];
  puVar1[1] = *(undefined2 *)((int)param_1 + 6);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(puVar1 + 4) = 0;
  iVar3 = FUN_0034c4a1(local_18 + 0x86,0x10,local_24 + param_2,
                       (local_c[0] - local_10) + 0xb + local_14 & 0xfffffffc,local_24,param_2,
                       &local_34,10);
  if (iVar3 == 0) {
LAB_0034872a:
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      if ((param_2 & 7) != 0) goto LAB_0034872a;
      FUN_00347cda(iVar2 + 0xae,local_1c,local_20);
      FUN_00347c42(0,iVar2 + 0x96,*(undefined2 *)(iVar2 + 0xb6),local_20,local_24,param_2);
    }
    uVar4 = 1;
  }
  return uVar4;
}
