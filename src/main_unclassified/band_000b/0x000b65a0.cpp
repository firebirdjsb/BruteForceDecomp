/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9390E81DC03BD08331CB29F402B53B5B940BF15450D49EC23446FF3ECA178FC
 * Entry: 0x000b65a0, Ghidra index: 2192, label: FUN_000b65a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b25a0(int param_1,int *param_2);
extern void FUN_000bb600(int param_1);
extern void FUN_000b55a0(void);
extern float10 FUN_000b28e0(int param_1);
extern float10 FUN_000b2870(int param_1);

extern uint32_t DAT_00469ab0;
void FUN_000b65a0(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar6 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(short *)(param_1 + 10) = (short)*(undefined4 *)(param_1 + 0x8c);
  iVar3 = FUN_000b9120(DAT_00469ab0);
  if (iVar3 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 100) = iVar3;
  FUN_000bb600(*(undefined4 *)(param_1 + 100));
  iVar3 = FUN_000b9120(DAT_00469ab0);
  if (iVar3 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 0x68) = iVar3;
  FUN_000bb600(*(undefined4 *)(param_1 + 0x68));
  iVar3 = 0x6c;
  do {
    iVar4 = FUN_000b9120(DAT_00469ab0);
    if (iVar4 != 0) {
      if (param_1 + 0x2c != 0) {
        FUN_000b25a0(param_1 + 0x2c,iVar4);
      }
      *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfb;
    }
    uVar5 = uVar6 & 0x80000001;
    *(int *)(iVar3 + param_1) = iVar4;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    FUN_000b55a0();
    uVar1 = *(undefined4 *)(param_1 + 0x90);
    if (uVar5 == 0) {
      fVar7 = (float10)FUN_000b28e0(param_1 + 0x2c);
      fVar8 = (float10)FUN_000b2870(param_1 + 0x2c);
      uVar2 = (undefined2)(int)((float10)(float)fVar7 - fVar8);
    }
    else {
      uVar2 = 0;
    }
    iVar4 = *(int *)(iVar3 + param_1);
    iVar3 = iVar3 + 4;
    uVar6 = uVar6 + 1;
    *(undefined2 *)(iVar4 + 4) = uVar2;
    *(short *)(iVar4 + 6) = (short)uVar1;
  } while (iVar3 < 0x74);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x6c);
  return;
}
