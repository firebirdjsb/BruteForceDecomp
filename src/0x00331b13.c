/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C202D91CBF2402877CEA14C0239CE6292F80892174739B9F4C86082DFBF448D7
 * Entry: 0x00331b13, Ghidra index: 12399, label: FUN_00331b13
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b75f0;
extern uint32_t DAT_004b04e8;
extern uint32_t DAT_004b0550;
int FUN_00331b13(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 local_7c4 [1472];
  undefined1 local_204 [260];
  undefined4 local_100 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_90 [10];
  undefined1 local_86 [30];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte local_3c [20];
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_8 = 0x5c0;
  iVar3 = FUN_00330194(&local_68);
  if (((byte)*XboxHardwareInfo_exref & 2) == 0 && -1 < iVar3) {
    iVar3 = 4;
    bVar10 = true;
    pcVar7 = XboxHDKey_exref;
    piVar8 = &DAT_004b0550;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar10 = *(int *)pcVar7 == *piVar8;
      pcVar7 = pcVar7 + 4;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if ((bVar10) ||
       (iVar3 = ExQueryNonVolatileSetting(0x102,local_14,&local_54,0x10,local_18), iVar3 != 0))
    goto LAB_00331c40;
    XcHMAC(&DAT_004b04e8,0x10,XboxHDKey_exref,0x10,0,0,local_3c);
    XcRC4Key(local_204,0x14,local_3c);
    XcRC4Crypt(local_204,0x10,&local_54);
  }
  else {
LAB_00331c40:
    if (XBE_CERTIFICATE_HEADER_00010180.OnlineServiceID == 0) {
      puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
      *puVar1 = *puVar1 | 2;
      return -0x7feae6fb;
    }
    FUN_0034506e(local_90);
    XcHMAC("999999999999",0xc,local_86,6,0,0,local_3c);
    uVar6 = 0;
    do {
      *(byte *)((int)&local_68 + uVar6) = local_3c[uVar6] % 10 + 0x30;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xc);
    local_60 = CONCAT22(local_60._2_2_,0x3900);
    local_60 = CONCAT31(local_60._1_3_,0x39);
    local_54 = 0x92d274b2;
    uStack_50 = 0x17a016fe;
    uStack_4c = 0x61db7058;
    uStack_48 = 0xadd0027b;
  }
  puVar9 = local_100;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_100[3] = local_68;
  uStack_f0 = uStack_64;
  uStack_ec = local_60;
  local_b0 = local_54;
  uStack_ac = uStack_50;
  uStack_a8 = uStack_4c;
  uStack_a4 = uStack_48;
  local_c8 = 0x5343414d;
  uStack_c4 = 0x4f42582e;
  uStack_c0 = 0x4f432e58;
  uStack_bc = 0x4d;
  if (*(int *)(param_1 + 0x664) == 0) {
    iVar3 = FUN_0033ea0c(0x568,0x2014);
    *(int *)(param_1 + 0x664) = iVar3;
    if (iVar3 == 0) goto LAB_00331c2a;
  }
  iVar3 = FUN_00340983(0,local_100,local_7c4,&local_8,*(undefined4 *)(param_1 + 0x664));
  if (-1 < iVar3) {
    local_28 = 2;
    local_24 = *(undefined4 *)
                (*(int *)(param_1 + 0x4c) + 8 +
                (*(uint *)(param_1 + 0x18) % *(uint *)(*(int *)(param_1 + 0x4c) + 4)) * 4);
    local_26 = FUN_00345df1(0x58);
    local_10 = local_8;
    local_c = local_7c4;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 8);
    iVar4 = FUN_0034515b(*(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x4c),&local_10,1,&local_8,0,
                         &local_28,0x10,param_1 + 0x50,0);
    iVar2 = *(int *)(in_ECX + 0xb8);
    if (iVar4 == -1) {
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xfffffe7f | 0x200;
      uVar5 = XAPILIB__GetLastError();
      *(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x34) = uVar5;
      return -0x7feae6fa;
    }
    *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xfffffcff | 0x80;
    iVar2 = *(int *)(param_1 + 0x18);
    iVar4 = XAPILIB__GetTickCount();
    *(int *)(param_1 + 0x1c) = iVar4 + *(int *)(&DAT_003b75f0 + iVar2 * 4);
    FUN_003476db(param_1 + 0x20,*(undefined4 *)(param_1 + 8),*(int *)(&DAT_003b75f0 + iVar2 * 4));
    return iVar3;
  }
LAB_00331c2a:
  puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
  *puVar1 = *puVar1 | 8;
  return -0x7feafff8;
}
