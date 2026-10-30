/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E886770C71E7CED27C6ADEB2DF469BB886CAF88DB2F496398D7C0C1AB24C9DC9
 * Entry: 0x00127ff0, Ghidra index: 3734, label: FUN_00127ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
void FUN_00127ff0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  float local_18;
  float local_14 [2];
  float local_c;
  float local_8;
  float local_4;
  
  if ((((*(int *)(DAT_0046995c + 0x1c) == 0) && (unaff_EBX != 0)) &&
      (*(int *)(unaff_EBX + 0x20) != 0)) &&
     ((iVar7 = *(int *)(unaff_EBX + 4), iVar7 != 4 && (iVar7 != 5)))) {
    for (piVar5 = *(int **)(param_1 + 0x4d8); piVar5 != *(int **)(param_1 + 0x4dc);
        piVar5 = piVar5 + 1) {
      if (*(int *)(*piVar5 + 8) == *(int *)(unaff_EBX + 0x20)) {
        fVar1 = *(float *)(*piVar5 + 0xc);
        if (fVar1 == 0.0) {
          return;
        }
        if (fVar1 == -NAN) {
          return;
        }
        local_18 = 0.34906584;
        if (fVar1 != *(float *)(param_1 + 1000)) {
          local_18 = 0.2617994;
        }
        if (iVar7 == 2) {
          local_18 = local_18 * 0.25;
        }
        iVar7 = *(int *)(param_1 + 0x4cc);
        local_14[0] = fVar1;
        piVar5 = (int *)FUN_0012af50(*(undefined4 *)(param_1 + 0x4c8),iVar7,local_14);
        if (*piVar5 == iVar7) {
          return;
        }
        if (*(int *)((int)fVar1 + 0x10) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)((int)fVar1 + 0x10) + 100);
          if ((iVar7 != 0) && (iVar7 != -1)) {
            fVar2 = *(float *)((int)fVar1 + 0x40) - *(float *)(iVar7 + 0x40);
            fVar3 = *(float *)((int)fVar1 + 0x3c) - *(float *)(iVar7 + 0x3c);
            fVar4 = *(float *)((int)fVar1 + 0x38) - *(float *)(iVar7 + 0x38);
            local_4 = fVar4 * *(float *)(unaff_EBX + 0x28) - fVar3 * *(float *)(unaff_EBX + 0x24);
            local_14[0] = fVar2 * *(float *)(unaff_EBX + 0x24) -
                          fVar4 * *(float *)(unaff_EBX + 0x2c);
            local_c = fVar3 * *(float *)(unaff_EBX + 0x2c) - fVar2 * *(float *)(unaff_EBX + 0x28);
            if (1.1920929e-07 < local_c * local_c + local_14[0] * local_14[0] + local_4 * local_4) {
              local_8 = local_14[0];
              FUN_00126ef0(param_1,fVar1,local_18,0x3e800000);
            }
          }
        }
        if (*(int *)(iVar7 + 0x10) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(iVar7 + 0x10) + 100);
        }
        if (iVar7 == -1) {
          return;
        }
        fVar1 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
        fVar2 = *(float *)(iVar7 + 0x3c) - *(float *)(iVar6 + 0x3c);
        fVar3 = *(float *)(iVar7 + 0x38) - *(float *)(iVar6 + 0x38);
        local_4 = fVar3 * *(float *)(unaff_EBX + 0x28) - fVar2 * *(float *)(unaff_EBX + 0x24);
        local_14[0] = fVar1 * *(float *)(unaff_EBX + 0x24) - fVar3 * *(float *)(unaff_EBX + 0x2c);
        local_c = fVar2 * *(float *)(unaff_EBX + 0x2c) - fVar1 * *(float *)(unaff_EBX + 0x28);
        if (local_c * local_c + local_14[0] * local_14[0] + local_4 * local_4 <= 1.1920929e-07) {
          return;
        }
        local_8 = local_14[0];
        FUN_00126ef0(param_1,iVar7,local_18,0x3e4ccccd);
        return;
      }
    }
  }
  return;
}
