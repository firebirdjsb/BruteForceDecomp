/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8BF10BED32C599940651A803FC6530510D98A11152FBB40BF14F4D25FA12635
 * Entry: 0x003603c0, Ghidra index: 13226, label: FUN_003603c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00414b10;
extern uint32_t *DAT_00414b20;
extern uint32_t DAT_00414b2c;
extern uint32_t DAT_00414b30;
extern uint32_t *DAT_00414b34;
extern uint32_t *DAT_00414b38;
extern uint32_t DAT_00414b3c;
extern uint32_t *DAT_00414b40;
extern uint32_t DAT_004be760;
extern uint32_t DAT_004be764;
extern uint32_t DAT_004be768;
extern uint32_t DAT_004be76c;
extern uint32_t DAT_004be770;
extern uint32_t DAT_004be774;
extern uint32_t DAT_004be778;
extern uint32_t DAT_004be77c;
extern uint32_t DAT_004c07e0;
extern uint32_t _DAT_004be7a8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003603c0(uint param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,int param_11,int *param_12)

{
  undefined8 uVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint in_ECX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar2 = param_4;
  uVar5 = param_10 & 0x70000000;
  uVar8 = param_9;
  if (uVar5 == 0x60000000) {
    param_8 = param_8 >> 1;
    param_4 = param_4 * 2;
    in_ECX = in_ECX >> 1;
    uVar8 = param_9 >> 1;
    in_EAX = in_EAX * 2;
  }
  _DAT_004be7a8 = param_1;
  iVar6 = *param_12;
  if (iVar6 == 2) {
    if (((byte)param_1 & 3) == 2) {
      param_2 = param_2 + 1;
      param_1 = param_1 & 0xfffffffc;
    }
  }
  else if (iVar6 == 3) {
    if ((param_1 + 1 & 3) == 0) {
      param_2 = param_2 + 1;
      param_1 = param_1 - 3;
    }
    else if ((param_1 - 2 & 3) == 0) {
      param_2 = param_2 + 2;
      param_1 = param_1 - 6;
    }
    else if ((param_1 - 1 & 3) == 0) {
      param_2 = param_2 + 3;
      param_1 = param_1 - 9;
    }
  }
  DAT_004be760 = iVar2 * param_3 + param_1 + iVar6 * param_2;
  if ((uVar5 == 0x20000000) || (uVar5 == 0x50000000)) {
    param_4 = param_4 * 2;
  }
  FUN_0035ff40(param_10,&param_4,param_7,param_8,&param_3);
  DAT_004be764 = DAT_004be760 + param_4;
  DAT_004be768 = param_5 + in_ECX * in_EAX + param_6;
  DAT_004be76c = DAT_004be768 + in_EAX;
  DAT_004be778 = in_ECX * in_EAX + param_6 + param_11;
  DAT_004be77c = DAT_004be778 + in_EAX;
  iVar2 = in_EAX - param_7;
  uVar5 = in_EAX >> 1;
  param_12 = (int *)(uVar5 - (param_7 >> 1));
  if (((param_7 & 1) != 0) && ((param_6 & 1) != 0)) {
    param_12 = (int *)((int)param_12 + -1);
  }
  if ((param_10 & 0x10000) == 0) {
    iVar9 = in_EAX * uVar8 + param_5;
    iVar6 = (uVar8 >> 1) * uVar5 + iVar9;
  }
  else {
    iVar6 = in_EAX * uVar8 + param_5;
    iVar9 = (uVar8 >> 1) * uVar5 + iVar6;
  }
  iVar3 = (param_6 >> 1) + (in_ECX >> 1) * uVar5;
  DAT_004be770 = iVar6 + iVar3;
  DAT_004be774 = iVar9 + iVar3;
  uVar8 = (in_ECX - 1) + param_8;
  if (((in_ECX & 1) != 0) && ((int)in_ECX <= (int)uVar8)) {
    (*DAT_00414b40)(param_6,param_7);
    DAT_004be768 = DAT_004be768 + iVar2;
    DAT_004be76c = DAT_004be768 + in_EAX;
    DAT_004be778 = DAT_004be778 + iVar2;
    DAT_004be77c = DAT_004be778 + in_EAX;
    DAT_004be770 = DAT_004be770 + (int)param_12;
    DAT_004be774 = DAT_004be774 + (int)param_12;
    DAT_004be760 = DAT_004be760 + param_3;
    DAT_004be764 = DAT_004be760 + param_4;
    in_ECX = in_ECX + 1;
    param_5 = in_ECX;
  }
  puVar4 = DAT_00414b34;
  param_10 = -param_2 & 3;
  if (param_7 < param_10) {
    param_10 = param_7;
  }
  uVar5 = param_6 & 1;
  if (param_7 < (param_6 & 1)) {
    uVar5 = param_7;
  }
  uVar7 = *DAT_00414b34;
  if ((uVar7 & 1) == 0) {
    if (uVar7 != 0) goto LAB_00360666;
  }
  else if (uVar7 < 0x2001) {
    *DAT_00414b34 = uVar7 + param_8 * 4;
    goto LAB_00360666;
  }
  *DAT_00414b34 = 0x80;
LAB_00360666:
  iVar6 = in_ECX - uVar8;
  if ((int)in_ECX < (int)uVar8) {
    param_11 = ((uVar8 - in_ECX) - 1 >> 1) + 1;
    param_5 = in_ECX + param_11 * 2;
    do {
      uVar7 = *puVar4;
      param_8 = param_6;
      if ((DAT_00414b30 == 0) && (param_10 != uVar5)) {
        uVar10 = param_10;
        if (DAT_004c07e0 == 1) {
          if ((uVar7 & 1) == 0) {
            *puVar4 = uVar7 | 4;
            uVar1 = rdtsc();
            DAT_00414b2c = (undefined4)uVar1;
          }
          goto LAB_003606d0;
        }
      }
      else {
LAB_003606d0:
        uVar10 = uVar5;
        if ((uVar7 & 2) == 0) {
          uVar10 = param_10;
        }
      }
      uVar7 = param_7;
      if (uVar10 != 0) {
        param_8 = (*DAT_00414b20)(uVar10,param_6);
        uVar7 = param_7 - uVar10;
      }
      uVar10 = (~DAT_00414b3c & uVar7) >> 2;
      iVar6 = uVar7 + uVar10 * -4;
      if (uVar10 != 0) {
        if ((param_8 & 1) == 0) {
          (*DAT_00414b38)(uVar10);
        }
        else {
          (*DAT_00414b10)();
        }
      }
      if (iVar6 != 0) {
        (*DAT_00414b20)(iVar6,param_8 + uVar10 * 4);
      }
      FUN_00360330();
      DAT_004be768 = DAT_004be76c + iVar2;
      DAT_004be76c = DAT_004be768 + in_EAX;
      DAT_004be778 = DAT_004be77c + iVar2;
      DAT_004be77c = DAT_004be778 + in_EAX;
      DAT_004be774 = DAT_004be774 + (int)param_12;
      DAT_004be770 = DAT_004be770 + (int)param_12;
      DAT_004be760 = DAT_004be764 + param_3;
      DAT_004be764 = DAT_004be760 + param_4;
      param_11 = param_11 + -1;
      puVar4 = DAT_00414b34;
    } while (param_11 != 0);
    iVar6 = param_5 - uVar8;
    param_11 = 0;
    in_ECX = param_5;
  }
  if (in_ECX == uVar8 || SBORROW4(in_ECX,uVar8) != iVar6 < 0) {
    (*DAT_00414b40)(param_6,param_7);
  }
  return;
}
