/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23F14EB459A147A134C1E055B3D705CB911B7DDE5B0FE6CD683AFE701673DBE5
 * Entry: 0x00152d20, Ghidra index: 4423, label: FUN_00152d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699bc;
extern uint32_t DAT_004699c0;
extern uint32_t _DAT_003c0280;
extern uint32_t _DAT_0046d2f0;
extern uint32_t _DAT_0046d2f4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00152d20(byte *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int local_44;
  int local_40;
  float local_20;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar8 = 0;
  DAT_004699c0 = 0;
  local_40 = 0;
  iVar6 = 0;
  if (0 < DAT_004699bc) {
    local_44 = 0;
    do {
      fVar5 = *(float *)(*(int *)(DAT_004699b0 + 4) + 0x28 + local_44);
      pfVar7 = (float *)(*(int *)(DAT_004699b0 + 4) + local_44);
      if ((_DAT_0046d2f0 <= fVar5) || (fVar5 <= _DAT_0046d2f4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      local_20 = param_3[1];
      if (!bVar2) {
        local_20 = local_20 + *(float *)(param_1 + 0x10);
      }
      if (0.0 <= (*param_3 - *pfVar7) * pfVar7[9] +
                 (local_20 - pfVar7[1]) * pfVar7[10] + (param_3[2] - pfVar7[2]) * pfVar7[0xb]) {
        bVar1 = *param_2 * pfVar7[0xc] + pfVar7[0xd] * param_2[1] + pfVar7[0xe] * param_2[2] <
                _DAT_003c0280;
        if ((bVar2) && ((*param_1 & 1) == 0)) {
          local_14 = 0.4;
        }
        else {
          local_14 = 0.1;
        }
        local_c = *param_3;
        local_4 = param_3[2];
        fVar5 = (*(float *)(param_1 + 0xc) - local_14) * 0.5;
        local_18 = *param_4;
        local_8 = fVar5 + param_3[1] + local_14;
        local_10 = param_4[2];
        local_14 = fVar5 + (float)param_4[1] + local_14;
        cVar4 = FUN_00167a80(pfVar7,pfVar7 + 3,pfVar7 + 6,&local_c,&local_18,
                             *(undefined4 *)(param_1 + 8),fVar5);
        if (cVar4 != '\0') {
          fVar5 = (float)FUN_00167610();
          iVar3 = DAT_004699b4;
          pfVar7[0x12] = fVar5;
          iVar6 = DAT_004699c0 * 4;
          DAT_004699c0 = DAT_004699c0 + 1;
          *(int *)(iVar6 + *(int *)(iVar3 + 4)) = iVar8;
          if (bVar1) {
            local_40 = local_40 + 1;
          }
        }
      }
      iVar8 = iVar8 + 1;
      local_44 = local_44 + 0x54;
      iVar6 = local_40;
    } while (iVar8 < DAT_004699bc);
  }
  return iVar6;
}
