/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74696CBDCD2D4DA0D35FD0E21A9B6F3DFD64DA0C5E5ADBEE4095F8C6280405AF
 * Entry: 0x00295c60, Ghidra index: 9332, label: FUN_00295c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern uint32_t PTR_s_debug_003b95cc;
extern char s_invalid_pragma_format_0040446c[];
extern char s_too_many_nested__ifs_004044ac[];
extern char s_unknown_pragma_00404484[];
extern char s_unmatched__else_00404494[];
extern char s_unmatched__end_004044c8[];
void FUN_00295c60(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_58 [88];
  
  *(int *)param_1[6] = *(int *)param_1[6] + -1;
  piVar1 = (int *)param_1[6];
  if (*piVar1 < 0) {
    uVar2 = (*(code *)piVar1[2])(piVar1);
  }
  else {
    uVar2 = (uint)*(byte *)piVar1[1];
    piVar1[1] = (int)((byte *)piVar1[1] + 1);
  }
  *param_1 = uVar2;
  param_1[7] = param_1[7] + 1;
  if (uVar2 != 0x24) {
    return;
  }
  uVar2 = param_1[param_1[8] * 3 + 0xb];
  uVar6 = 0;
  *(int *)param_1[6] = *(int *)param_1[6] + -1;
  piVar1 = (int *)param_1[6];
  if (*piVar1 < 0) {
    uVar3 = (*(code *)piVar1[2])(piVar1);
  }
  else {
    uVar3 = (uint)*(byte *)piVar1[1];
    piVar1[1] = (int)((byte *)piVar1[1] + 1);
  }
  *param_1 = uVar3;
  FUN_00295ab0(local_58);
  uVar4 = FUN_002951e0(&PTR_s_debug_003b95cc);
  switch(uVar4) {
  case 0:
    if (uVar2 == 0) {
      *(undefined4 *)(DAT_00469888 + 0x34) = 1;
    }
    break;
  case 1:
    if (uVar2 == 0) {
      *(undefined4 *)(DAT_00469888 + 0x34) = 0;
    }
    break;
  case 2:
    if (uVar2 == 0) {
      *param_1 = 0xffffffff;
      param_1[8] = 0;
    }
    break;
  case 3:
    uVar2 = param_1[8];
    param_1[8] = uVar2 - 1;
    if (uVar2 != 0) break;
    pcVar7 = s_unmatched__end_004044c8;
    goto LAB_00295e58;
  case 4:
    uVar6 = 1;
  case 5:
    if (param_1[8] == 4) {
      FUN_002958c0(s_too_many_nested__ifs_004044ac);
    }
    FUN_00295ab0(local_58);
    uVar3 = param_1[8];
    param_1[8] = uVar3 + 1;
    param_1[(uVar3 + 1) * 3 + 9] = 0;
    iVar5 = FUN_00295a40();
    if (iVar5 != 0) {
      uVar6 = (uint)(uVar6 == 0);
    }
    param_1[param_1[8] * 3 + 10] = uVar6;
    if ((uVar2 == 0) && (param_1[param_1[8] * 3 + 10] != 0)) {
      param_1[param_1[8] * 3 + 0xb] = 0;
    }
    else {
      param_1[param_1[8] * 3 + 0xb] = 1;
    }
    break;
  case 6:
    if (param_1[(param_1[8] + 3) * 3] != 0) {
      FUN_002958c0(s_unmatched__else_00404494);
    }
    param_1[(param_1[8] + 3) * 3] = 1;
    uVar2 = param_1[8];
    if ((param_1[uVar2 * 3 + 8] == 0) && (param_1[uVar2 * 3 + 10] == 0)) {
      param_1[uVar2 * 3 + 0xb] = 0;
    }
    else {
      param_1[uVar2 * 3 + 0xb] = 1;
    }
    break;
  default:
    pcVar7 = s_unknown_pragma_00404484;
LAB_00295e58:
    FUN_002958c0(pcVar7);
  }
  FUN_00295a00();
  if (*param_1 != 10) {
    if (*param_1 != 0xffffffff) {
      FUN_002958c0(s_invalid_pragma_format_0040446c);
    }
    FUN_00295ba0();
    return;
  }
  FUN_00295c60(param_1);
  FUN_00295ba0();
  return;
}
