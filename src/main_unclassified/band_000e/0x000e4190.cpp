/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B9992956E21F45FBF170F4A72BCA3E3970914F968836C7E194F6C8CC3D94B0C
 * Entry: 0x000e4190, Ghidra index: 2839, label: FUN_000e4190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc930;
undefined4 FUN_000e4190(int param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if ((float)param_2[3] < *(float *)(param_1 + 0x50) ==
      ((float)param_2[3] == *(float *)(param_1 + 0x50))) {
    puVar4 = (undefined4 *)FUN_000e44b0();
    puVar7 = param_2;
    puVar3 = puVar4;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar3 = puVar3 + 1;
    }
    if (puVar4[7] != 0) {
      piVar1 = (int *)param_2[7];
      uVar5 = (**(code **)(*piVar1 + 0xc))();
      (**(code **)(*piVar1 + 8))(uVar5);
      puVar4[7] = uVar5;
    }
    FUN_000e3d60(puVar4);
  }
  else {
    cVar2 = FUN_000e4230();
    if (cVar2 != '\x01') {
      if (DAT_003bc930 == '\0') {
        puVar3 = (undefined4 *)FUN_000e44b0();
        puVar7 = puVar3;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *param_2;
          param_2 = param_2 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_000e3d60(puVar3);
      }
      return 0;
    }
  }
  return 1;
}
