/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F3DE90E2F1452B5F0476F23552D325CCE69DF7A6A24FF8C542013676D7B6774
 * Entry: 0x0005c730, Ghidra index: 955, label: FUN_0005c730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_0005d2b0(void);
extern undefined4 FUN_0005be70(void);
extern int FUN_000b1bb0(byte param_1,char param_2);
extern void FUN_000b1d70(float param_1,byte param_2);
extern void FUN_000b2610(void);
extern int FUN_00140a60(int param_1,int *param_2);

void FUN_0005c730(int param_1,float param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  int in_EAX;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *local_14;
  undefined4 *local_10;
  float local_c;
  float local_4;
  
  if (in_EAX == 0) {
    if (param_2 <= 0.0) {
      if (param_2 < 0.0) {
        *(float *)(param_1 + 0x30) = param_2 + *(float *)(param_1 + 0x30);
      }
    }
    else {
      *(float *)(param_1 + 0x2c) = param_2 + *(float *)(param_1 + 0x2c);
    }
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    uVar10 = *(uint *)(*(int *)(in_EAX + 0xc) + 0x120);
    cVar1 = *(char *)((int)puVar2[1] + 0x1d);
    local_14 = puVar2;
    puVar9 = (undefined4 *)puVar2[1];
    while (cVar1 == '\0') {
      if ((uint)puVar9[3] < uVar10) {
        puVar5 = (undefined4 *)puVar9[2];
        puVar9 = local_14;
      }
      else {
        puVar5 = (undefined4 *)*puVar9;
      }
      local_14 = puVar9;
      puVar9 = puVar5;
      cVar1 = *(char *)((int)puVar5 + 0x1d);
    }
    if ((local_14 == puVar2) || (uVar10 < (uint)local_14[3])) {
      local_10 = puVar2;
      ppuVar6 = &local_10;
    }
    else {
      ppuVar6 = &local_14;
    }
    puVar2 = *ppuVar6;
    if (puVar2 == *(undefined4 **)(param_1 + 0x38)) {
      local_10 = *(undefined4 **)(*(int *)(in_EAX + 0xc) + 0x120);
      local_c = param_2;
      local_4 = (float)((uint)local_4 & 0xffffff00);
      pfVar7 = (float *)FUN_0005d2b0();
      *pfVar7 = local_c;
      pfVar7[1] = 1.4013e-45;
      pfVar7[2] = local_4;
    }
    else {
      puVar2[5] = puVar2[5] + 1;
      puVar2[4] = param_2 + (float)puVar2[4];
    }
  }
  bVar4 = false;
  if ((param_3 == 0) || (iVar8 = FUN_0005be70(), iVar8 == 0)) {
    bVar4 = true;
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 4) == 0) goto LAB_0005c8b1;
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 8) + uVar10 * 4);
      if ((((iVar8 != 0) && (iVar3 = *(int *)(iVar8 + 4), iVar3 != 0)) &&
          (*(int *)(iVar8 + 0x14) != 0)) && ((bVar4 || (param_3 == iVar3)))) {
        /* 0x0005C879 sete cl; 0x0005C87E mov [esp+0x18],cl;
         * 0x0005C884 mov ebx,[esp+0x18] loads the full original
         * DWORD, including its unknown upper 24 bits. Do not zero
         * or manufacture these bits just to obtain C11 syntax. */
        ((uint8_t *)&local_10)[0] = (uint8_t)(param_3 == iVar3);
        puVar2 = local_10;
        if (*(int *)(*(int *)(*(int *)(iVar8 + 0x14) + 0x30) + 0x58) != 0) {
          FUN_000b1bb0(local_10,1);
          FUN_000b1d70(param_2,puVar2);
          FUN_000b2610();
        }
      }
LAB_0005c8b1:
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 4));
  }
  if (param_3 != 0) {
    if (0.0 < param_2) {
      FUN_00140a60(*(undefined4 *)(*(int *)(param_3 + 8) + 0xbe8),param_3,0xe5da4e68,0);
      return;
    }
    if (param_2 < 0.0) {
      FUN_00140a60(*(undefined4 *)(*(int *)(param_3 + 8) + 0xbe8),param_3,0xecfe4e4,0);
    }
  }
  return;
}
