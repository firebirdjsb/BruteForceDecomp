/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA0FFFAD714F67895F67F6998FC9C43BC8E61F545051B3819DF5A83A65F6BC33
 * Entry: 0x00374130, Ghidra index: 13421, label: FUN_00374130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b790;
int FUN_00374130(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                uint *param_7,uint *param_8)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_EDX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_18;
  uint local_8;
  int local_4;
  
  iVar2 = param_5;
  param_5 = 0;
  uVar4 = (byte)(&DAT_0037b790)[param_3] & 0x3c;
  if (((((&DAT_0037b790)[param_3] & 1) == 0) && (param_3 != 0xc)) &&
     (((int)param_3 < 0xe || (0xf < (int)param_3)))) {
    uVar3 = 0;
    local_8 = 0;
    local_18 = 0;
    if (param_2 == 0) {
      param_2 = 1;
    }
    if (param_4 == 0) {
      param_4 = (uVar4 * in_EAX >> 3) + 0x3f & 0xffffffc0;
    }
    param_5 = in_EDX * param_4;
    local_4 = in_EDX;
  }
  else {
    local_18 = FUN_00373ab0();
    local_8 = FUN_00373ab0();
    uVar3 = FUN_00373ab0();
    bVar1 = 0;
    local_4 = 0;
    if ((param_3 == 0xc) || ((0xd < (int)param_3 && ((int)param_3 < 0x10)))) {
      bVar1 = 1;
    }
    uVar5 = -(uint)bVar1 & 2;
    uVar8 = local_18;
    param_1 = local_8;
    uVar10 = uVar3;
    uVar6 = param_2;
    if (param_2 == 0) {
      uVar6 = local_8;
      if (local_8 <= uVar3) {
        uVar6 = uVar3;
      }
      if (uVar6 < local_18) {
        param_2 = local_18 + 1;
        uVar6 = param_2;
      }
      else {
        param_2 = local_8;
        if (local_8 <= uVar3) {
          param_2 = uVar3;
        }
        param_2 = param_2 + 1;
        uVar6 = param_2;
      }
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar9 = uVar5;
      if (uVar5 < uVar8) {
        uVar9 = uVar8;
      }
      uVar7 = uVar5;
      if (uVar5 < param_1) {
        uVar7 = param_1;
      }
      param_5 = param_5 + ((1 << ((char)uVar7 + (char)uVar9 + (char)uVar10 & 0x1fU)) * uVar4 >> 3);
      if (uVar8 != 0) {
        uVar8 = uVar8 - 1;
      }
      if (param_1 != 0) {
        param_1 = param_1 - 1;
      }
      if (uVar10 != 0) {
        uVar10 = uVar10 - 1;
      }
    }
    in_EAX = 0;
    if (iVar2 != 0) {
      param_5 = (param_5 + 0x7fU & 0xffffff80) * 6;
    }
  }
  *param_7 = (((((uVar3 << 4 | local_8) << 4 | local_18) << 4 | param_2) << 8 | param_3) << 4 |
             (param_6 != 0) + 2) << 4 | -(uint)(iVar2 != 0) & 4 | 9;
  if (in_EAX == 0) {
    *param_8 = 0;
    return param_5;
  }
  *param_8 = (((param_4 >> 6) - 1) * 0x1000 | local_4 - 1U) << 0xc | in_EAX - 1U;
  return param_5;
}
