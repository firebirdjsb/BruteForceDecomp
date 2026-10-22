/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A42040445E0DBD3D8B15DDD4510F74C2ABE4E3CC3248E694AEA7922566977E8E
 * Entry: 0x00126f20, Ghidra index: 3730, label: FUN_00126f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00126f20(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint local_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_c [12];
  
  iVar5 = *(int *)(param_1 + 0x2e8);
  local_24 = 6;
  cVar2 = (**(code **)(*(int *)(iVar5 + 0x144) + 0x20))();
  if (((cVar2 == '\0') || (iVar5 = *(int *)(iVar5 + 0x164), iVar5 == 0)) ||
     (*(int *)(*(int *)(iVar5 + 0xc) + 4) != 0x14)) {
    iVar5 = 0;
  }
  iVar4 = 4;
  if (param_2 == iVar5) {
    iVar5 = **(int **)(param_2 + 0x228);
    if (iVar5 == 0) {
      local_24 = 0;
    }
    else if (iVar5 == 1) {
      local_24 = 1;
    }
    else if (iVar5 == 2) {
      local_24 = 2;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar5 + 0x178) + 0x20))();
    if (cVar2 == '\0') {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x198);
    }
    if (param_2 == iVar5) {
      iVar5 = **(int **)(param_2 + 0x228);
      if (iVar5 == 0) {
        local_24 = 3;
      }
      else if (iVar5 == 1) {
        local_24 = 4;
      }
      else if (iVar5 == 2) {
        local_24 = 5;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar5 + 0x178) + 0x20))();
  if ((cVar2 == '\0') || (*(int *)(iVar5 + 0x198) == 0)) {
    fStack_1c = 0.5;
  }
  else {
    fStack_1c = 0.1;
  }
  if (((local_24 < 6) && (iVar5 = *(int *)(param_1 + 0x6b4 + local_24 * 4), iVar5 != 0)) &&
     (fVar1 = *(float *)(param_1 + 0x6cc + local_24 * 4), fVar1 < 0.0 != (fVar1 == 0.0))) {
    fStack_20 = 0.0;
    pfVar6 = (float *)(iVar5 + 0x14);
    do {
      fVar1 = pfVar6[-5];
      if ((fVar1 != 0.0) && (fVar1 != -NAN)) {
        piVar3 = *(int **)((int)fVar1 + 0xc);
        if (piVar3 == (int *)0x0) {
          piVar3 = &DAT_0046d064;
        }
        if (*piVar3 != -0x164b1148) {
          FUN_0001f9c0();
          FUN_0023d9f0(*(undefined4 *)(param_1 + 500),auStack_c,fStack_1c * pfVar6[-1],*pfVar6);
          if (fStack_20 <= *pfVar6) {
            fStack_20 = *pfVar6;
          }
        }
      }
      pfVar6 = pfVar6 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(float *)(param_1 + 0x6cc + local_24 * 4) = fStack_20 + 0.1;
    *(float *)(param_1 + 0x40c) = fStack_20;
    if (*(int *)(param_1 + 0x268) != -1) {
      FUN_0023d990();
    }
    if (*(int *)(param_1 + 0x26c) != -1) {
      FUN_0023d990();
    }
  }
  return;
}
