/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AA20775246E5388E8B40058D285D7115627CC88FCD9D808D6252FC7E51C6356
 * Entry: 0x002ea78d, Ghidra index: 10589, label: FUN_002ea78d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8d60;
void FUN_002ea78d(byte *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  if ((pbVar2 == param_1 + 1) || (param_1[1] != 0x3a)) {
    pbVar2 = param_1;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      FUN_002ed127(param_2,param_1,2);
      param_2[2] = 0;
    }
    pbVar2 = param_1 + 2;
  }
  param_1 = (byte *)0x0;
  local_c = pbVar2;
  if (*pbVar2 != 0) {
    do {
      bVar1 = *local_c;
      if ((*(byte *)((int)&DAT_004a8d60 + bVar1 + 1) & 4) == 0) {
        if ((bVar1 == 0x2f) || (bVar1 == 0x5c)) {
          param_1 = local_c + 1;
        }
        else if (bVar1 == 0x2e) {
          local_8 = local_c;
        }
      }
      else {
        local_c = local_c + 1;
      }
      local_c = local_c + 1;
    } while (*local_c != 0);
    if (param_1 != (byte *)0x0) {
      if (param_3 != (undefined1 *)0x0) {
        uVar3 = (int)param_1 - (int)pbVar2;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        FUN_002ed127(param_3,pbVar2,uVar3);
        param_3[uVar3] = 0;
      }
      goto LAB_002ea85c;
    }
  }
  param_1 = pbVar2;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
LAB_002ea85c:
  if ((local_8 == (byte *)0x0) || (local_8 < param_1)) {
    if (param_4 != 0) {
      uVar3 = 0xff;
      if ((uint)((int)local_c - (int)param_1) < 0xff) {
        uVar3 = (int)local_c - (int)param_1;
      }
      FUN_002ed127(param_4,param_1,uVar3);
      *(undefined1 *)(uVar3 + param_4) = 0;
    }
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if (param_4 != 0) {
      uVar3 = (int)local_8 - (int)param_1;
      if (0xfe < uVar3) {
        uVar3 = 0xff;
      }
      FUN_002ed127(param_4,param_1,uVar3);
      *(undefined1 *)(uVar3 + param_4) = 0;
    }
    if (param_5 != (undefined1 *)0x0) {
      uVar3 = 0xff;
      if ((uint)((int)local_c - (int)local_8) < 0xff) {
        uVar3 = (int)local_c - (int)local_8;
      }
      FUN_002ed127(param_5,local_8,uVar3);
      param_5[uVar3] = 0;
    }
  }
  return;
}
