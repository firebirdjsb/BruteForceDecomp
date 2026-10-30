/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6E368F2832B3AE39C1B6F077D2F8396CCF5DAABA517282735BA109FA08341D0
 * Entry: 0x00116480, Ghidra index: 3585, label: FUN_00116480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b10;
extern uint32_t DAT_00469b14;
extern uint32_t *DAT_00469b54;
void FUN_00116480(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float fVar11;
  undefined1 local_54 [12];
  float local_48;
  undefined4 *local_44;
  float guest_scalar_14; /* original XMM MINSS m32fp before stack-word pointer reuse */
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_3 == 2) && ((*param_2 & 2) == 0)) {
    return;
  }
  *(byte *)((int)param_1 + 0x71) = *(byte *)((int)param_1 + 0x71) | 0x80;
  iVar1 = param_1[0x1ca];
  iVar5 = param_1[2];
  *(int *)(iVar5 + 0xc08) = param_1[0x1c9];
  *(int *)(iVar5 + 0xc0c) = iVar1;
  *(int **)(param_2 + 0x990) = param_1;
  local_c = (float)param_1[0x1ce];
  if (*(int *)(param_2 + 0x8c) == param_1[0x179]) {
    fVar10 = (float10)local_c * (float10)(float)param_1[0x1cb];
  }
  else {
    fVar10 = (float10)FUN_00116340(param_1,param_2);
    fVar10 = fVar10 * (float10)local_c;
  }
  local_30 = *(undefined4 *)(param_2 + 0x90);
  *(float *)(param_2 + 0x90) = (float)fVar10;
  fVar10 = (float10)FUN_002109b0();
  local_10 = (float)(fVar10 * (float10)(float)param_1[0x1ce]);
  iVar5 = (**(code **)(*DAT_00469b54 + 0x48))();
  local_18 = *(float *)(iVar5 + 0x114);
  local_14 = *(float *)(iVar5 + 0x118);
  iVar1 = param_1[0x1b];
  local_28 = iVar5;
  pfVar6 = (float *)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0xc))();
  local_40 = pfVar6[2] - *(float *)(iVar1 + 0x40);
  fVar8 = pfVar6[1] - *(float *)(iVar1 + 0x3c);
  fVar11 = *pfVar6 - *(float *)(iVar1 + 0x38);
  local_1c = fVar11 * fVar11 + local_40 * local_40 + fVar8 * fVar8;
  local_c = SQRT(local_1c);
  if ((((((*(byte *)((int)param_1 + 0x71) & 4) == 0) || (local_10 <= 0.0)) || (local_14 <= local_c))
      || (((*param_2 & 2) == 0 || (*(int *)(*(int *)(param_2 + 0x8c) + 0xd8) != 0)))) ||
     (cVar4 = FUN_000ead80(*(undefined4 *)(*(int *)(param_2 + 0x80) + 0xb74),param_2,param_1),
     cVar4 == '\0')) {
    if (param_3 == 1) goto LAB_00116940;
  }
  else {
    if (param_3 != 1) {
      local_2c = *(undefined4 *)(param_2 + 0x2c);
      param_1[0x1d4] = *(int *)(param_2 + 0x20);
      iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x80) + 0xb74) + 0x5c);
      /* XBE 0x0011664F MOV EDX,[EAX+14], then 0x00116682 MOVSS
       * and 0x00116687 MINSS with the [EAX+18] float word.
       * Preserve original 32-bit float lanes, not pointer arithmetic. */
      guest_scalar_14 = *(float *)(iVar1 + 0x14);
      local_48 = *(float *)(iVar1 + 0x10);
      local_10 = 1.0 - (1.0 - *(float *)(param_2 + 0x2c)) * local_10;
      fVar8 = guest_scalar_14;
      if (*(float *)(iVar1 + 0x18) <= guest_scalar_14) {
        fVar8 = *(float *)(iVar1 + 0x18);
      }
      fVar11 = local_48;
      if (fVar8 <= local_48) {
        fVar11 = fVar8;
      }
      local_20 = 0.0;
      fVar8 = 1.0 - fVar11 * local_10;
      local_1c = (local_c - local_18 * fVar8) / ((local_14 - local_18) * fVar8);
      local_18 = local_1c;
      if (local_1c <= 0.0) {
        local_18 = 0.0;
      }
      if (1.0 <= local_18) {
        local_18 = 1.0;
      }
      local_24 = 1.0 - (1.0 - local_10) * (1.0 - local_18);
      if (local_24 < 1.0) {
        (**(code **)(*param_1 + 0xac))(local_54,&local_18);
        (**(code **)(*param_1 + 0x40))();
        FUN_00039510();
        *(float *)(param_2 + 0x2c) = local_24;
        FUN_000eb270(*(undefined4 *)(*(int *)(param_2 + 0x80) + 0xb74),param_2,param_1);
        fVar8 = *(float *)(*(int *)(*(int *)(param_2 + 0x80) + 0xb74) + 0x5c);
        local_c = *(float *)((int)fVar8 + 0xac);
        iVar1 = *(int *)(*(int *)(param_2 + 0x80) + 0xa40);
        local_1c = fVar8;
        if (iVar1 != 0) {
          FUN_001f6e10(iVar1);
        }
        local_44 = (undefined4 *)FUN_00061500(&local_48);
        local_40 = 0.0;
        local_20 = local_34;
        local_24 = local_38;
        FUN_0012ac90(local_c);
        puVar3 = local_44;
        *param_2 = *param_2 | 1;
        if (local_44 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          puVar9 = (undefined4 *)*local_44;
        }
        if (puVar9 != local_44) {
          local_24 = local_34;
          local_20 = local_38;
          do {
            piVar2 = (int *)puVar9[2];
            *(undefined4 *)(param_2 + 4) = local_3c;
            *(float *)(param_2 + 8) = local_20;
            *(float *)(param_2 + 0xc) = local_34;
            *(float *)(param_2 + 0x10) = local_c;
            (**(code **)(*piVar2 + 0x11c))(param_2);
            puVar9 = (undefined4 *)*puVar9;
            fVar8 = local_1c;
          } while (puVar9 != puVar3);
        }
        *param_2 = *param_2 & 0xfe;
        if (*(int *)((int)fVar8 + 0xc) != -1) {
          FUN_000a61d0(fVar8,0);
          *(undefined4 *)((int)fVar8 + 0xc) = 0xffffffff;
        }
        if (local_44 == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *local_44;
        }
        FUN_001298b0(&local_24,uVar7,local_44);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_44);
      }
      if (param_3 == 0) {
        *(float *)(param_2 + 0x2c) =
             1.0 - (1.0 - *(float *)(param_2 + 0x2c)) * (1.0 - *(float *)(iVar5 + 0x110));
        FUN_00210670(param_1[0x153],param_1[0x7d]);
        FUN_00116bb0(param_2);
      }
      *param_2 = *param_2 & 0xfb;
      param_2[0x24] = 0;
      param_2[0x25] = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      param_2[0x28] = 0;
      param_2[0x29] = 0;
      param_2[0x2a] = 0x80;
      param_2[0x2b] = 0x3f;
      *(undefined4 *)(param_2 + 0x2c) = local_2c;
      goto LAB_001169c5;
    }
LAB_00116940:
    if ((DAT_00469b10 != 0) || (DAT_00469b14 != 0)) {
      DAT_00469b10 = 0;
      DAT_00469b14 = 0;
    }
  }
  local_2c = *(undefined4 *)(param_2 + 0x2c);
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0x80;
  param_2[0x2f] = 0x3f;
  param_1[0x1d4] = 0;
  *param_2 = *param_2 | 4;
  (**(code **)(*param_1 + 0xd0))(0);
  FUN_00210670(param_1[0x153],param_1[0x7d]);
  FUN_00116bb0(param_2);
  *param_2 = *param_2 & 0xfb;
  *(undefined4 *)(param_2 + 0x2c) = local_2c;
LAB_001169c5:
  *(undefined4 *)(param_2 + 0x90) = local_30;
  param_1[0x150] = 0;
  iVar1 = param_1[2];
  *(undefined4 *)(iVar1 + 0xc08) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0c) = 0x3f800000;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
  return;
}
