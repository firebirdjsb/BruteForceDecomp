/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35250BFE198F1CD78E71C94A7905E67E0C05C9056AC30DA702141601724E89D4
 * Entry: 0x001f6eb0, Ghidra index: 7044, label: FUN_001f6eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7f1c;
extern uint32_t DAT_0046d004;
void FUN_001f6eb0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int unaff_EBP;
  int iVar12;
  undefined4 unaff_retaddr;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  float local_8c;
  undefined *local_88;
  int *local_84;
  int local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  float local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  if (*(int *)(*(int *)(param_2 + 0x8c) + 0xd8) == 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    iVar10 = piVar1[4];
    if ((*(int *)(iVar10 + 0x18) != 0) &&
       ((*(int *)(iVar10 + 0x1c) - *(int *)(iVar10 + 0x18)) / 0x2c != 0)) {
      local_9c = *(undefined4 *)(iVar10 + 0x18);
      local_44 = *(float *)(param_2 + 0x14);
      local_38 = *(float *)(param_2 + 0x20);
      local_4 = CONCAT31(local_4._1_3_,1);
      local_1c = 1;
      local_78 = &local_30;
      local_58 = local_58 & 0xfe;
      local_8c = *(float *)(param_2 + 0x1c);
      local_7c = &local_18;
      local_90 = *(undefined4 *)(param_2 + 0x18);
      local_18 = 0;
      local_14 = 0xef44f398;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_30 = 0;
      local_2c = 0x65;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_88 = &DAT_0046d004;
      local_84 = (int *)0x0;
      local_80 = 0;
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      local_54 = (float)(*piVar1 * 8 + 1);
      local_50 = 1.0 / (float)(*piVar1 * 8 + 1);
      local_4c = piVar1[2];
      fVar3 = (float)(*piVar1 * 8 + 1);
      local_48 = 1.0 / (fVar3 + fVar3);
      fVar6 = local_44 - local_38;
      fVar3 = local_44 + local_38;
      fVar4 = local_8c - local_38;
      fVar5 = local_8c + local_38;
      local_40 = local_90;
      local_3c = local_8c;
      cVar7 = FUN_001f4740(param_1,&local_b8,&local_b4,fVar6,fVar4);
      if (cVar7 == '\0') {
        iVar10 = **(int **)(param_1 + 0x20);
        if (local_b8 < iVar10) {
          if (local_b8 < 0) {
            local_b8 = 0;
          }
        }
        else {
          local_b8 = iVar10 + -1;
        }
        iVar10 = (*(int **)(param_1 + 0x20))[1];
        if (local_b4 < iVar10) {
          if (local_b4 < 0) {
            local_b4 = 0;
          }
        }
        else {
          local_b4 = iVar10 + -1;
        }
      }
      cVar7 = FUN_001f4740(param_1,&local_a8,&local_ac,fVar6,fVar5);
      if (cVar7 == '\0') {
        iVar10 = **(int **)(param_1 + 0x20);
        if (local_a8 < iVar10) {
          if (local_a8 < 0) {
            local_a8 = 0;
          }
        }
        else {
          local_a8 = iVar10 + -1;
        }
        iVar10 = (*(int **)(param_1 + 0x20))[1];
        if (local_ac < iVar10) {
          if (local_ac < 0) {
            local_ac = 0;
          }
        }
        else {
          local_ac = iVar10 + -1;
        }
      }
      cVar7 = FUN_001f4740(param_1,&local_b0,&local_a4,fVar3,fVar4);
      if (cVar7 == '\0') {
        iVar10 = **(int **)(param_1 + 0x20);
        if (local_b0 < iVar10) {
          if (local_b0 < 0) {
            local_b0 = 0;
          }
        }
        else {
          local_b0 = iVar10 + -1;
        }
        iVar10 = (*(int **)(param_1 + 0x20))[1];
        if (local_a4 < iVar10) {
          if (local_a4 < 0) {
            local_a4 = 0;
          }
        }
        else {
          local_a4 = iVar10 + -1;
        }
      }
      iVar10 = local_b0;
      if (local_b8 <= local_b0) {
        iVar10 = local_b8;
      }
      if (local_ac < local_b4) {
        local_a0 = local_b4;
      }
      else {
        local_a0 = local_ac;
      }
      local_98 = *(undefined4 *)(param_2 + 0x8c);
      piVar1 = *(int **)(*(int *)(*(int *)(param_2 + 0x80) + 0xb74) + 0x5c);
      (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
      for (; iVar10 <= (int)fVar6; iVar10 = iVar10 + 1) {
        iVar11 = unaff_EBP;
        if (unaff_EBP <= local_a8) {
          do {
            iVar12 = (**(int **)(param_1 + 0x20) * iVar11 + iVar10) * 0x40 +
                     *(int *)(param_1 + 0x18);
            if (((iVar12 != 0) && (-1 < *(int *)(iVar12 + 0x3c))) &&
               (uVar8 = FUN_0006e6b0(DAT_003f7f1c,&LAB_001f3710,iVar12), param_1 = local_4,
               (uVar8 & 1) != 0)) {
              piVar9 = (int *)(*(int *)(iVar12 + 0x3c) * 0x30 + *(int *)(local_a4 + 0x1c));
              *local_84 = (int)(piVar9 + 8);
              *(int *)(local_80 + 0xc) = piVar9[0xb];
              iVar2 = piVar9[1];
              if ((piVar9[4] != 0) && (iVar2 != 0)) {
                local_3c = **(float **)(iVar12 + 0x38);
                local_84[4] = piVar9[4];
                *(int *)(local_80 + 0x10) = iVar2;
                (**(code **)(*piVar1 + 0x20))
                          (piVar1,&local_90,(*piVar9 == 0x1d62e437) + '\x05',0,local_84[4],0,
                           *(undefined4 *)(local_80 + 0x10),0,unaff_retaddr);
                param_1 = local_4;
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 <= local_a8);
        }
      }
      (**(code **)(*piVar1 + 0x24))(piVar1,unaff_retaddr);
    }
  }
  return;
}
