/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DD7A3C051BAF478BB6A11EF1DC23766522E8D2F88CD97B2BF4D926A72B0183F
 * Entry: 0x001265c0, Ghidra index: 3709, label: FUN_001265c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001265c0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float local_10;
  
  iVar3 = *(int *)(param_1 + 0x2e8);
  local_10 = 1.0;
  cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
  if ((((cVar2 != '\0') && (iVar3 = *(int *)(iVar3 + 0x164), iVar3 != 0)) &&
      (*(int *)(*(int *)(iVar3 + 0xc) + 4) == 0x14)) && (iVar3 != 0)) {
    iVar1 = *(int *)(iVar3 + 0x228);
    if (*(float *)(iVar1 + 0x14c) == 0.0) {
      iVar3 = FUN_0022da80();
      if (iVar3 != 0) {
        local_10 = (float)(int)*(short *)(iVar3 + 0x1a) / (float)*(int *)(iVar1 + 0xe4);
      }
    }
    else {
      local_10 = (float)(*(int *)(iVar3 + 0x1f8) * 5) / (float)*(int *)(iVar1 + 0xe4);
    }
  }
  fVar4 = local_10 * 0.2;
  if (local_10 * 0.2 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  return (float10)fVar4;
}
