/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A703AA42AFAD003B3A261BE23F93B121D10C6D1A5CE8EB397E972FAAC04639E
 * Entry: 0x00150f90, Ghidra index: 4410, label: FUN_00150f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699ac;
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699c0;
void FUN_00150f90(undefined4 param_1,float *param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = DAT_004699b4;
  pbVar3 = DAT_004699ac;
  iVar9 = 0;
  iVar8 = DAT_004699c0;
  if (0 < DAT_004699c0) {
    do {
      iVar5 = *(int *)(*(int *)(iVar4 + 4) + iVar9 * 4) * 0x54 + *(int *)(DAT_004699b0 + 4);
      *(float *)(*(int *)(pbVar3 + 0xc) + iVar9 * 4) =
           (param_3 * *(float *)(iVar5 + 0x24) + *param_2) * *(float *)(iVar5 + 0x30) +
           (param_3 * *(float *)(iVar5 + 0x28) + param_2[1]) * *(float *)(iVar5 + 0x34) +
           (param_3 * *(float *)(iVar5 + 0x2c) + param_2[2]) * *(float *)(iVar5 + 0x38);
      iVar6 = 0;
      iVar7 = iVar6;
      if (3 < iVar8) {
        do {
          pfVar2 = (float *)(*(int *)(*(int *)(iVar4 + 4) + iVar7 * 4) * 0x54 + 0x30 +
                            *(int *)(DAT_004699b0 + 4));
          *(float *)(*(int *)(pbVar3 + 4) + ((iVar9 << (*pbVar3 & 0x1f)) + iVar7) * 4) =
               *pfVar2 * *(float *)(iVar5 + 0x30) +
               pfVar2[1] * *(float *)(iVar5 + 0x34) + pfVar2[2] * *(float *)(iVar5 + 0x38);
          pfVar2 = (float *)(*(int *)(*(int *)(iVar4 + 4) + 4 + iVar7 * 4) * 0x54 + 0x30 +
                            *(int *)(DAT_004699b0 + 4));
          *(float *)(*(int *)(pbVar3 + 4) + 4 + ((iVar9 << (*pbVar3 & 0x1f)) + iVar7) * 4) =
               *pfVar2 * *(float *)(iVar5 + 0x30) +
               pfVar2[1] * *(float *)(iVar5 + 0x34) + pfVar2[2] * *(float *)(iVar5 + 0x38);
          pfVar2 = (float *)(*(int *)(*(int *)(iVar4 + 4) + 8 + iVar7 * 4) * 0x54 + 0x30 +
                            *(int *)(DAT_004699b0 + 4));
          *(float *)(*(int *)(pbVar3 + 4) + 8 + ((iVar9 << (*pbVar3 & 0x1f)) + iVar7) * 4) =
               *pfVar2 * *(float *)(iVar5 + 0x30) +
               pfVar2[1] * *(float *)(iVar5 + 0x34) + pfVar2[2] * *(float *)(iVar5 + 0x38);
          pfVar2 = (float *)(*(int *)(*(int *)(iVar4 + 4) + 0xc + iVar7 * 4) * 0x54 + 0x30 +
                            *(int *)(DAT_004699b0 + 4));
          iVar6 = iVar7 + 4;
          *(float *)(*(int *)(pbVar3 + 4) + 0xc + ((iVar9 << (*pbVar3 & 0x1f)) + iVar7) * 4) =
               *pfVar2 * *(float *)(iVar5 + 0x30) +
               pfVar2[1] * *(float *)(iVar5 + 0x34) + pfVar2[2] * *(float *)(iVar5 + 0x38);
          iVar1 = iVar7 + 7;
          iVar8 = DAT_004699c0;
          iVar7 = iVar6;
        } while (iVar1 < DAT_004699c0);
      }
      if (iVar6 < iVar8) {
        do {
          pfVar2 = (float *)(*(int *)(*(int *)(iVar4 + 4) + iVar6 * 4) * 0x54 + 0x30 +
                            *(int *)(DAT_004699b0 + 4));
          iVar8 = (iVar9 << (*pbVar3 & 0x1f)) + iVar6;
          iVar6 = iVar6 + 1;
          *(float *)(*(int *)(pbVar3 + 4) + iVar8 * 4) =
               *pfVar2 * *(float *)(iVar5 + 0x30) +
               pfVar2[1] * *(float *)(iVar5 + 0x34) + pfVar2[2] * *(float *)(iVar5 + 0x38);
          iVar8 = DAT_004699c0;
        } while (iVar6 < DAT_004699c0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  return;
}
