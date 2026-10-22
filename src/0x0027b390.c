/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C71679D07EA7FBBF25E08979501EE1170113C8229DEDAE92CB7EB3BBD80C061
 * Entry: 0x0027b390, Ghidra index: 8963, label: FUN_0027b390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_CLOSED_00404fd0[];
void FUN_0027b390(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  uint local_50;
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  uint local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 local_c;
  
  uVar5 = 0;
  if (param_2 == (char *)0x0) {
    return;
  }
  local_48 = param_2;
  local_24 = local_24 & 0xffffff00;
  local_20 = (undefined4 *)FUN_002ad910(&local_24);
  *(undefined1 *)((int)local_20 + 0x1d) = 1;
  local_20[1] = local_20;
  *local_20 = local_20;
  local_20[2] = local_20;
  local_1c = 0;
  _strncmp(param_2,s_CLOSED_00404fd0,6);
  do {
    cVar2 = FUN_0027b100(param_1 + -8,&local_48,&local_30);
    if (cVar2 != '\0') {
      local_44 = local_1c;
      local_14 = local_24;
      local_10 = local_20;
      local_c = local_1c;
      local_18 = uVar5;
      piVar3 = (int *)FUN_0027c0e0(&local_18);
      iVar1 = *piVar3;
      local_3c = local_28;
      *(undefined4 *)(iVar1 + 0x10) = local_30;
      local_40 = local_2c;
      *(undefined4 *)(iVar1 + 0x14) = local_2c;
      *(undefined4 **)(iVar1 + 0x18) = local_28;
      uVar5 = uVar5 + 1;
    }
  } while (local_48 != (char *)0x0);
  if (1 < uVar5) {
    pcVar4 = (char *)thunk_FUN_002ea01d(uVar5 * 0xc);
    if (pcVar4 == (char *)0x0) {
      local_48 = (char *)0x0;
    }
    else {
      FUN_0001fe40(pcVar4,0xc,uVar5,FUN_000a3d50);
      local_48 = pcVar4;
    }
    local_50 = 0;
    if (uVar5 != 0) {
      local_40 = local_1c;
      local_3c = local_20;
      pcVar4 = local_48 + 8;
      do {
        local_14 = local_24;
        local_18 = local_50;
        local_10 = local_3c;
        local_c = local_40;
        piVar3 = (int *)FUN_0027c0e0(&local_18);
        iVar1 = *piVar3;
        local_44 = *(undefined4 *)(iVar1 + 0x14);
        local_38[0] = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(pcVar4 + -8) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(pcVar4 + -4) = local_44;
        local_50 = local_50 + 1;
        *(undefined4 *)pcVar4 = local_38[0];
        pcVar4 = pcVar4 + 0xc;
      } while (local_50 < uVar5);
    }
    (**(code **)(*(int *)(param_1 + -8) + 0x10))(param_1 + -8,local_48,uVar5);
    FUN_0028c910();
  }
  FUN_0027c4a0(local_38,*local_20,local_20);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_20);
}
