/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F3CAECAF27727EDC1AB8E129FDCA7F43A2216873F9AD4D644C0EEC6072EA4AF
 * Entry: 0x001357b0, Ghidra index: 3881, label: FUN_001357b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_001357b0(int *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float guest_delta_y;
  uint32_t guest_delta_y_word;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_58;
  int *local_50;
  float local_48;
  int *local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int *local_30;
  int local_28;
  int *piStack_20;
  float fStack_1c;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  
  local_58 = *(int *)(param_4 + 4);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_50 = (int *)0x0;
  local_48 = 3.4028235e+38;
  if (local_58 != *(int *)(param_4 + 8)) {
    local_40 = param_3 & 3;
    do {
      piVar1 = *(int **)(local_58 + 4);
      if ((local_40 == 0) || (piVar1 != param_1)) {
        if ((param_3 & 0xc) != 0) {
          local_44 = (int *)FUN_0013f570();
          iVar6 = local_10;
          while (local_10 = iVar6, local_44 != (int *)0x0) {
            if (piVar1 == local_44) {
              if ((param_3 & 4) != 0) {
                local_30 = (int *)0x0;
                if ((piVar1 != (int *)0x0) && (local_30 = piVar1, ((uint)piVar1 & 1) == 0)) {
                  uVar4 = (int)piVar1 * 0x19660d + 0x3c6ef35fU >> 0x15;
                  local_34 = *(int *)(&DAT_00414da0 + uVar4 * 4);
                  *(int **)(&DAT_00414da0 + uVar4 * 4) = &local_34;
                }
                if ((local_14 == 0) ||
                   ((uint)(local_c - local_14 >> 3) <= (uint)(iVar6 - local_14 >> 3))) {
                  FUN_001f7620(local_18,iVar6,1,&local_34);
                }
                else {
                  FUN_0005ecb0(iVar6,1,&local_34,local_40);
                  local_10 = iVar6 + 8;
                }
                if ((local_30 != (int *)0x0) && (((uint)local_30 & 1) == 0)) {
                  iVar5 = (int)local_30 * 0x19660d;
                  local_30 = (int *)0x0;
                  iVar6 = *(int *)(&DAT_00414da0 + (iVar5 + 0x3c6ef35fU >> 0x15) * 4);
                  piVar7 = (int *)(&DAT_00414da0 + (iVar5 + 0x3c6ef35fU >> 0x15) * 4);
                  while (iVar6 != 0) {
                    piVar2 = (int *)*piVar7;
                    if (piVar2 == &local_34) {
                      *piVar7 = *(int *)*piVar7;
                      break;
                    }
                    piVar7 = piVar2;
                    iVar6 = *piVar2;
                  }
                }
              }
              FUN_00045180(&local_3c,local_58 + 8,*(undefined4 *)(param_4 + 8),local_58,local_40);
              FUN_0001d590(param_4,local_3c);
              *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + -8;
              iVar6 = local_10;
              if (*(undefined4 **)(param_2 + 0x18) == (undefined4 *)0x0) {
                *(undefined4 *)(param_2 + 0x20) = 0;
              }
              else {
                *(undefined4 *)(param_2 + 0x20) = **(undefined4 **)(param_2 + 0x18);
              }
            }
            else {
              local_44 = (int *)FUN_0013f570();
              iVar6 = local_10;
            }
          }
        }
        piVar7 = local_50;
        if ((param_3 & 0x10) != 0) {
          iVar6 = (**(code **)(*piVar1 + 0x40))();
          iVar5 = (**(code **)(*param_1 + 0x40))();
          fStack_1c = *(float *)(iVar5 + 0x2c) - *(float *)(iVar6 + 0x2c);
          /* FSTP DWORD [ESP+0x24] stores binary32 delta Y, not a pointer. */
          guest_delta_y = *(float *)(iVar5 + 0x28) - *(float *)(iVar6 + 0x28);
          fVar3 = *(float *)(iVar5 + 0x24) - *(float *)(iVar6 + 0x24);
          fVar3 = guest_delta_y * guest_delta_y + fStack_1c * fStack_1c + fVar3 * fVar3;
          /* MOV ECX,[ESP+0x24] / MOV [ESP+0x48],ECX forwards raw Y bits. */
          memcpy(&guest_delta_y_word, &guest_delta_y, sizeof guest_delta_y_word);
          piStack_20 = (int *)(uintptr_t)guest_delta_y_word;
          if (fVar3 < local_48) {
            local_48 = fVar3;
            if (local_50 == (int *)0x0) {
              piVar7 = (int *)FUN_0005eb60(&local_38,local_58);
              local_58 = *piVar7;
              local_50 = piVar1;
              goto LAB_00135b06;
            }
            piVar7 = piVar1;
            if (*(int **)(local_58 + 4) != local_50) {
              FUN_0008f6a0(local_50);
            }
          }
        }
        local_50 = piVar7;
        local_58 = local_58 + 8;
      }
      else {
        if ((param_3 & 1) != 0) {
          local_28 = 0;
          if (piVar1 != (int *)0x0) {
            FUN_0008f6a0(piVar1);
          }
          FUN_0005eab0();
          if (local_28 != 0) {
            FUN_0008f6e0();
          }
        }
        FUN_00045180(&local_44,local_58 + 8,*(undefined4 *)(param_4 + 8),local_58,local_40);
        FUN_0001d590(param_4,local_40);
        *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + -8;
      }
LAB_00135b06:
    } while (local_58 != *(int *)(param_4 + 8));
  }
  iVar6 = local_14;
  if ((*(int *)(param_4 + 4) == 0) || (*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 3 == 0)) {
    FUN_001379c0();
  }
  if (iVar6 == 0) {
    return;
  }
  FUN_0001d590(local_18,local_38);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar6);
}
