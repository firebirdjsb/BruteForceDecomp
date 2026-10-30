/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3298EBF889ADE96ABF52750505BC0C2C4DBF22DED9C59F1DF003569D2C7DA0E
 * Entry: 0x00334dca, Ghidra index: 12420, label: FUN_00334dca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00334dca(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  int local_20 [2];
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  uint local_8;
  
  if ((*(int *)(param_1 + 0x154) == 1) || (*(int *)(param_1 + 0x154) == 5)) {
    iVar1 = FUN_00330c3e(*(undefined4 *)(param_1 + 0x14c));
    if (iVar1 == 0x1500f0) {
      if (*(int *)(param_1 + 0x154) == 1) {
        *(undefined4 *)(param_1 + 0x154) = 2;
      }
      else if (*(int *)(param_1 + 0x154) == 5) {
        *(undefined4 *)(param_1 + 0x154) = 6;
        goto LAB_00334e23;
      }
    }
    else {
LAB_00334e23:
      if (iVar1 < 0) goto LAB_00334f70;
    }
  }
  if (((*(int *)(param_1 + 0x148) != 0) && (0 < *(int *)(param_1 + 0x15c))) &&
     (*(int *)(param_1 + 0x15c) < 4)) {
    iVar1 = FUN_00330c3e(*(int *)(param_1 + 0x148));
    if (iVar1 == 0x1510f0) {
      if (*(int *)(param_1 + 0x15c) == 1) {
        *(undefined4 *)(param_1 + 0x15c) = 2;
      }
    }
    else if (iVar1 < 0) goto LAB_00334f70;
  }
  while (iVar1 = *(int *)(param_1 + 0x15c), iVar1 == 0) {
    if (*(int *)(param_1 + 0x154) != 2) goto LAB_00334f66;
    puVar2 = &local_3c;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_3c = *(undefined4 *)(param_1 + 0x268);
    local_38 = *(undefined1 *)(param_1 + 0x27c);
    local_20[0] = 0;
    local_20[1] = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    local_18 = &local_3c;
    iVar1 = FUN_0033d2ef(*(undefined4 *)(param_1 + 0x150),local_20);
    if (iVar1 < 0) goto LAB_00334f70;
    if (local_20[0] == 0) {
      *(undefined4 *)(param_1 + 0x274) = 0x9bbd8600;
      *(undefined4 *)(param_1 + 0x278) = 0x1c16d68;
    }
    else {
      XAPILIB__GetSystemTimeAsFileTime(&local_c);
      if ((local_8 < local_24) || ((local_8 <= local_24 && (local_c < local_28)))) {
        iVar1 = 0x153102;
        goto LAB_00334f70;
      }
      *(undefined4 *)(param_1 + 0x274) = local_30;
      *(undefined4 *)(param_1 + 0x278) = local_2c;
      *(undefined4 *)(param_1 + 0x158) = 1;
    }
    *(uint *)(param_1 + 0x15c) = (*(int *)(param_1 + 0x148) == 0) + 1;
  }
  if (iVar1 == 2) {
    iVar1 = FUN_00338406(4,"/xbos/ContentAvailable.ashx",param_1 + 0x168,0x100,0,0,param_1 + 0x268,
                         0x15,10000,*(undefined4 *)(param_1 + 8),param_1 + 0x10,0);
    if (iVar1 < 0) goto LAB_00334f70;
    *(undefined4 *)(param_1 + 0x15c) = 3;
LAB_00334f66:
    iVar1 = *(int *)(param_1 + 0x160);
  }
  else {
    if (iVar1 != 3) {
      if ((iVar1 == 4) && (*(int *)(param_1 + 0x154) == 6)) {
        *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x164);
      }
      goto LAB_00334f66;
    }
    iVar1 = FUN_00330c3e(param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00334f66;
    if (iVar1 == 0x153101) {
      if (*(int *)(param_1 + 0x158) == 0) goto LAB_00334f70;
      local_20[0] = 0;
      local_20[1] = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      *(undefined4 *)(param_1 + 0x164) = 0x153101;
      puVar2 = &local_3c;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      local_3c = *(undefined4 *)(param_1 + 0x268);
      local_38 = *(undefined1 *)(param_1 + 0x27c);
      local_18 = &local_3c;
      FUN_0033d350(*(undefined4 *)(param_1 + 0x150),local_20);
      iVar1 = FUN_0033d2b6(*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x14c));
      if (iVar1 < 0) goto LAB_00334f70;
      *(undefined4 *)(param_1 + 0x154) = 5;
      *(undefined4 *)(param_1 + 0x15c) = 4;
      goto LAB_00334f66;
    }
  }
  if (iVar1 == 0) {
    return;
  }
LAB_00334f70:
  *(int *)(param_1 + 0x160) = iVar1;
  *(undefined4 *)(param_1 + 0x15c) = 5;
  return;
}
