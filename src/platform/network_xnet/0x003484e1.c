/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F505151AFCA4F7F0E7FBA9F71F0D8825F857C97C3BBBF3A3A918A104716F242
 * Entry: 0x003484e1, Ghidra index: 12897, label: FUN_003484e1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003569d0;
extern uint32_t DAT_00356a30;
void FUN_003484e1(byte *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,int *param_7,int param_8)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  char local_78 [36];
  undefined4 auStack_54 [15];
  byte local_18 [8];
  byte local_10 [12];
  
  pbVar2 = param_1;
  if ((*param_1 & 2) == 0) {
    iVar3 = 0x18;
    bVar9 = true;
    piVar4 = param_7;
    piVar7 = &DAT_00356a30;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *piVar4 == *piVar7;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      pcVar8 = local_78;
      for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pcVar8 = *param_6;
        param_6 = param_6 + 1;
        pcVar8 = pcVar8 + 4;
      }
    }
    else {
      XcModExp(local_78,param_7,param_5,&DAT_003569d0);
    }
    param_1 = (byte *)0x60;
  }
  else {
    puVar6 = (undefined4 *)((int)auStack_54 + (-(uint)(param_8 != 0) & 0xffffffdc));
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
    pbVar5 = param_1 + 0xc4;
    pcVar8 = local_78 + (-(uint)(param_8 != 0) & 0x24);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pcVar8 = pcVar8 + 4;
    }
    param_1 = (byte *)0x48;
  }
  pbVar5 = pbVar2 + 0x86;
  if (param_8 == 0) {
    pbVar5 = pbVar2 + 0x54;
  }
  param_7 = (int *)0x0;
  do {
    XcHMAC(param_3,param_4,local_78,param_1,pbVar2 + 0x44,0x10,pbVar5);
    pbVar5 = pbVar5 + 0x14;
    local_78[0] = local_78[0] + '\x01';
    if (param_7 == (int *)0x3) {
      pbVar5 = local_18;
    }
    else if ((((uint)param_7 & 1) != 0) && (pbVar5 = pbVar2 + 0x54, param_8 == 0)) {
      pbVar5 = pbVar2 + 0x86;
    }
    param_7 = (int *)((int)param_7 + 1);
  } while ((int)param_7 < 5);
  XcDESKeyParity(pbVar2 + 0x96,0x18);
  XcDESKeyParity(pbVar2 + 100,0x18);
  pbVar5 = local_18;
  if (param_8 == 0) {
    pbVar5 = local_10;
  }
  uVar1 = *(undefined4 *)pbVar5;
  *(undefined4 *)(pbVar2 + 0xb2) = *(undefined4 *)(pbVar5 + 4);
  *(undefined4 *)(pbVar2 + 0xae) = uVar1;
  pbVar5 = local_10;
  if (param_8 == 0) {
    pbVar5 = local_18;
  }
  uVar1 = *(undefined4 *)(pbVar5 + 4);
  *(undefined4 *)(pbVar2 + 0x7c) = *(undefined4 *)pbVar5;
  *(undefined4 *)(pbVar2 + 0x80) = uVar1;
  return;
}
