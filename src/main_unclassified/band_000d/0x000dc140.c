/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D05C90251EE01E8E1137C2502132DEB3F57847BC2F49B1760EE99FE490113E85
 * Entry: 0x000dc140, Ghidra index: 2702, label: FUN_000dc140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d5c8;
bool FUN_000dc140(int param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,undefined8 *param_8,int param_9,int param_10,
                 undefined4 param_11)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  int local_428;
  float local_424;
  undefined4 local_420;
  int local_41c;
  float local_418;
  undefined4 local_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400 [256];
  
  local_418 = 0.0;
  local_424 = 0.0;
  local_41c = 0;
  if ((param_9 == 0) || (param_10 == 0)) {
    if (DAT_0040d5c8 == '\0') {
      puVar3 = (undefined4 *)0x0;
      if (*(undefined4 **)(param_1 + 0x220) != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0x220);
      }
      puVar2 = *(undefined4 **)(param_1 + 0x220);
      for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
        bVar1 = *(byte *)(puVar3[2] + 0x94);
        if ((((bVar1 & 0x40) != 0) && ((bVar1 & 8) == 0)) && ((bVar1 & 0x10) != 0)) {
          FUN_000dbdc0(param_1,param_3,&local_418,param_5,&local_41c,param_2,param_6,&local_424,
                       param_8,puVar3[2],param_11);
        }
      }
      puVar3 = (undefined4 *)0x0;
      if (*(undefined4 **)(param_1 + 0x214) != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0x214);
      }
      puVar2 = *(undefined4 **)(param_1 + 0x214);
      for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
        bVar1 = *(byte *)(puVar3[2] + 0x94);
        if ((((bVar1 & 0x40) != 0) && ((bVar1 & 8) == 0)) && ((bVar1 & 0x10) != 0)) {
          FUN_000dbdc0(param_1,param_3,&local_418,param_5,&local_41c,param_2,param_6,&local_424,
                       param_8,puVar3[2],param_11);
        }
      }
    }
    else {
      local_414 = *(undefined4 *)(param_1 + 0xa40);
      local_420 = *(undefined4 *)(param_8 + 1);
      local_404 = *(undefined4 *)(param_1 + 0xa3c);
      local_410 = *param_8;
      local_428 = 0;
      local_408 = local_420;
      FUN_000e2600(local_400,&local_428,0x100,1);
      iVar4 = 0;
      if (0 < local_428) {
        do {
          FUN_000dbdc0(param_1,param_3,&local_418,param_5,&local_41c,param_2,param_6,&local_424,
                       param_8,local_400[iVar4],param_11);
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_428);
      }
    }
  }
  else {
    iVar4 = 0;
    if (0 < param_10) {
      do {
        FUN_000dbdc0(param_1,param_3,&local_418,param_5,&local_41c,param_2,param_6,&local_424,
                     param_8,*(undefined4 *)(param_9 + iVar4 * 4),param_11);
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_10);
    }
  }
  if (0.0 < *param_5) {
    fVar5 = 1.0 / *param_5;
    *param_4 = local_418 * fVar5;
    *param_7 = local_424 * fVar5;
    auVar6._0_4_ = fVar5 * *param_6;
    auVar6._4_4_ = fVar5 * 0.0;
    auVar6._8_4_ = fVar5 * (float)*(undefined8 *)(param_6 + 1);
    auVar6._12_4_ = fVar5 * (float)((ulonglong)*(undefined8 *)(param_6 + 1) >> 0x20);
    *param_6 = auVar6._0_4_;
    param_6[1] = auVar6._8_4_;
    param_6[2] = auVar6._12_4_;
    auVar6 = rsqrtss(auVar6,param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3)
    ;
    fVar5 = auVar6._0_4_;
    *param_3 = fVar5 * *param_3;
    param_3[1] = fVar5 * param_3[1];
    param_3[2] = fVar5 * param_3[2];
  }
  return 0 < local_41c;
}
