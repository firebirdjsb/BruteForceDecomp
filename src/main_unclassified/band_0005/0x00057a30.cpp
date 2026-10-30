/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D9E06E9AC7FD1CB0A94122530347B15C4A6D3A008C3B7002DD8598CE91C0158
 * Entry: 0x00057a30, Ghidra index: 855, label: FUN_00057a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern float10 FUN_00057890(int param_1);

extern uint32_t DAT_0046cfd8;
void FUN_00057a30(uint param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar3 = param_1;
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_10 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
  }
  if (uVar5 < *(uint *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  local_8 = *(uint *)(param_1 + 0x20);
  local_4 = 0;
  iVar8 = local_8 * 0x1c;
  uVar5 = local_8;
  do {
    while( true ) {
      uVar6 = uVar5;
      iVar4 = iVar8;
      iVar8 = *(int *)(param_1 + 4);
      if ((iVar8 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar8) / 0x1c) <= uVar6)) {
        piVar1 = (int *)(param_1 + 0x20);
        param_1 = 0;
        if (0 < *piVar1) {
          local_4 = local_10 * 0x1c;
          local_c = 0;
          do {
            iVar8 = *(int *)(iVar3 + 4) + local_c;
            fVar2 = *(float *)(*(int *)(iVar3 + 4) + 0x18 + local_c) - param_2;
            *(float *)(iVar8 + 0x18) = fVar2;
            if (iVar9 < 5) {
              if (fVar2 < 0.0 == (fVar2 == 0.0)) {
                if (fVar2 < *(float *)(*(int *)(iVar3 + 4) + 0x18 + local_4)) {
                  local_10 = param_1;
                  local_4 = local_c;
                }
              }
              else {
                iVar9 = iVar9 + 1;
                fVar10 = (float10)FUN_00057890(iVar3);
                *(float *)(iVar8 + 0x18) = (float)fVar10;
                DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
                *(float *)(iVar8 + 0x18) =
                     ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * (float)iVar9 * 0.086666666 +
                     *(float *)(iVar8 + 0x18);
                FUN_000577c0(iVar3,param_2,iVar8);
                local_8 = param_1 + 1;
              }
            }
            param_1 = param_1 + 1;
            local_c = local_c + 0x1c;
          } while ((int)param_1 < *(int *)(iVar3 + 0x20));
        }
        *(uint *)(iVar3 + 0x20) = local_8;
        if (((iVar9 == 0) && (iVar9 = *(int *)(iVar3 + 4), iVar9 != 0)) &&
           ((*(int *)(iVar3 + 8) - iVar9) / 0x1c != 0)) {
          iVar9 = local_10 * 0x1c + iVar9;
          fVar10 = (float10)FUN_00057890(iVar3);
          *(float *)(iVar9 + 0x18) = (float)fVar10;
          DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
          *(float *)(iVar9 + 0x18) =
               ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 0.086666666 +
               *(float *)(iVar9 + 0x18);
          FUN_000577c0(iVar3,param_2,iVar9);
        }
        return;
      }
      iVar7 = iVar8 + iVar4;
      fVar2 = *(float *)(iVar8 + 0x18 + iVar4) - param_2;
      *(float *)(iVar7 + 0x18) = fVar2;
      if (iVar9 < 5) break;
LAB_00057b7f:
      iVar8 = iVar4 + 0x1c;
      uVar5 = uVar6 + 1;
    }
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      if (*(float *)(*(int *)(param_1 + 4) + 0x18 + local_4) <= fVar2) goto LAB_00057b7f;
      iVar8 = iVar4 + 0x1c;
      uVar5 = uVar6 + 1;
      local_10 = uVar6;
      local_4 = iVar4;
    }
    else {
      iVar9 = iVar9 + 1;
      fVar10 = (float10)FUN_00057890(param_1);
      *(float *)(iVar7 + 0x18) = (float)fVar10;
      DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
      *(float *)(iVar7 + 0x18) =
           ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * (float)iVar9 * 0.086666666 +
           *(float *)(iVar7 + 0x18);
      FUN_000577c0(param_1,param_2,iVar7);
      local_8 = uVar6 + 1;
      iVar8 = iVar4 + 0x1c;
      uVar5 = uVar6 + 1;
    }
  } while( true );
}
