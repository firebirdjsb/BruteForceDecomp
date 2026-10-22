/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 449BE0C1D6E264E8DE43776FEBB0CFCB724279061A8D269B8A55489DFC507CD1
 * Entry: 0x0002e800, Ghidra index: 306, label: FUN_0002e800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004021b4;
extern uint32_t DAT_004021b5;
extern uint32_t _DAT_004021a8;
extern uint32_t _DAT_004021b0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0002e800(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  float10 fVar9;
  float fVar10;
  
  uVar8 = 0;
  if (param_2 != 0) {
    piVar1 = *(int **)(param_2 + 4);
    if (*(int *)(piVar1[3] + 4) == 3) {
      piVar5 = (int *)FUN_000120f0();
      iVar6 = (**(code **)(*piVar5 + 0x40))();
      iVar7 = (**(code **)(*piVar1 + 0x40))();
      fVar2 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar7 + 0x2c);
      fVar10 = *(float *)(iVar6 + 0x28) - *(float *)(iVar7 + 0x28);
      fVar3 = *(float *)(iVar6 + 0x24) - *(float *)(iVar7 + 0x24);
      fVar10 = SQRT(fVar3 * fVar3 + fVar10 * fVar10 + fVar2 * fVar2);
      fVar2 = fVar10;
      if (10.0 < ABS(*(float *)(iVar6 + 0x28) - *(float *)(iVar7 + 0x28))) {
        fVar2 = fVar10 * 1.2;
      }
      if (10.0 <= fVar10) {
        if (25.0 <= fVar10) {
          if (50.0 <= fVar10) {
            fVar2 = fVar2 * 1.5;
          }
          else {
            fVar2 = fVar2 * 1.75;
          }
        }
        else {
          fVar2 = fVar2 + fVar2;
        }
      }
      else {
        fVar2 = fVar2 * 2.5;
      }
      _DAT_004021a8 = fVar2;
      FUN_0011dfa0();
      FUN_000120f0();
      FUN_0011dfa0();
      cVar4 = FUN_000416a0(param_1 + 0x930,0);
      uVar8 = 0;
      if (cVar4 != '\0') {
        fVar9 = (float10)FUN_00023460(param_1 + 0x930);
        if (fVar9 < (float10)fVar2) {
          FUN_00025730(param_1 + 0x930,1,1);
          FUN_000124f0(0x40800000);
          uVar8 = 1;
        }
      }
      _DAT_004021b0 = 0;
      _DAT_004021a8 = -1.0;
      DAT_004021b4 = 0;
      DAT_004021b5 = 0;
    }
  }
  return uVar8;
}
