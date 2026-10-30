/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC301BA7AE1C7F0AC661DE8511AA0E0D88DCD1C836A996C7F2FE9BFF02BED2C0
 * Entry: 0x0006d240, Ghidra index: 1231, label: FUN_0006d240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d034;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float10 FUN_0006d240(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [128];
  
  piVar1 = (int *)(param_1 + 0x48);
  fVar5 = (float10)(**(code **)(*(int *)(param_1 + 0x48) + 0x28))();
  fVar9 = (float)fVar5;
  fVar5 = (float10)(**(code **)(*piVar1 + 0x24))(fVar9);
  fVar8 = (float)fVar5;
  fVar5 = (float10)(**(code **)(*piVar1 + 0x2c))(fVar8);
  fVar7 = (float)fVar5;
  fVar5 = (float10)(**(code **)(*piVar1 + 0x20))(fVar7);
  FUN_0006ee30((float)fVar5,fVar7,fVar8,fVar9);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x48) + 0x14))();
  iVar3 = FUN_002338c0(auStack_80,&DAT_0046d034,uVar2);
  FUN_0003d6c0(auStack_b0,iVar3,iVar3 + 0x24);
  FUN_0006ec90();
  FUN_0006ec10();
  pfVar4 = (float *)FUN_0006ec10();
  fVar6 = *pfVar4 * (1.0 / pfVar4[3]);
  fVar8 = pfVar4[1] * (1.0 / pfVar4[3]);
  pfVar4 = (float *)FUN_0006ec10();
  fVar7 = *pfVar4 * (1.0 / pfVar4[3]);
  fVar9 = pfVar4[1] * (1.0 / pfVar4[3]);
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar7 <= -1.0) {
    fVar7 = -1.0;
  }
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar9 <= -1.0) {
    fVar9 = -1.0;
  }
  fVar9 = (fVar6 - fVar7) * (fVar8 - fVar9) * 0.25;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  return (float10)fVar9;
}
