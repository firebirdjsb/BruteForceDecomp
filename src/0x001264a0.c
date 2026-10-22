/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87EF863B39039FDAB61B91305640359BB86096473920B8C1FDB1844B379DAF8A
 * Entry: 0x001264a0, Ghidra index: 3708, label: FUN_001264a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001264a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  float fVar7;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  fVar1 = *(float *)(param_1 + 0x54);
  fVar2 = *(float *)(param_1 + 0x50);
  iVar5 = *(int *)(param_1 + 0x2e8);
  local_1c = 0.75;
  fVar3 = *(float *)(param_1 + 0x490);
  fVar4 = *(float *)(param_1 + 0x494);
  cVar6 = (**(code **)(*(int *)(iVar5 + 0x144) + 0x20))();
  if ((((cVar6 != '\0') && (iVar5 = *(int *)(iVar5 + 0x164), iVar5 != 0)) &&
      (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 0x14)) && (iVar5 != 0)) {
    local_1c = (float)(*(int *)(iVar5 + 0x1f8) / *(int *)(*(int *)(iVar5 + 0x228) + 0xe4));
  }
  if (((*(byte *)(*(int *)(param_1 + 0x5a4) + 0x1c) & 1) == 0) ||
     (uStack_20 = 1.0, *(int *)(*(int *)(param_1 + 0x5a4) + 0x18) == 0)) {
    uStack_20 = 0.75;
  }
  fVar7 = (float)*(int *)(param_1 + 0x5a8) * 0.2;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  return (float10)(fVar1 / fVar2) * (float10)0.4 +
         (float10)(fVar3 / fVar4) * (float10)0.2 +
         (float10)local_1c * (float10)0.1 +
         (float10)uStack_20 * (float10)0.1 + (float10)fVar7 * (float10)0.2;
}
