/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9B357CE29D7F3586E554649BC24B3C2322977F7FC5B88F5F591960024DB983B
 * Entry: 0x000cc950, Ghidra index: 2527, label: FUN_000cc950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern float10 FUN_000b28e0(int param_1);
extern float10 FUN_000b2800(int param_1);
extern void FUN_000b25a0(int param_1,int *param_2);
extern void FUN_000cb730(int *param_1);

extern uint32_t DAT_00469ab0;
void FUN_000cc950(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  fVar4 = (float10)FUN_000b28e0(uVar2);
  fVar1 = *(float *)(param_1 + 0x88);
  fVar5 = (float10)FUN_000b2800(uVar2);
  *(short *)(param_1 + 8) = (short)(int)(fVar4 - (float10)fVar1);
  uVar2 = DAT_00469ab0;
  *(short *)(param_1 + 10) = (short)(int)(fVar5 + (float10)50.0);
  iVar3 = FUN_000b9120(uVar2);
  if (iVar3 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  uVar2 = DAT_00469ab0;
  *(int *)(param_1 + 100) = iVar3;
  iVar3 = FUN_000b9120(uVar2);
  if (iVar3 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 0x68) = iVar3;
  FUN_000cb730(*(undefined4 *)(param_1 + 100));
  FUN_000cb730(*(undefined4 *)(param_1 + 0x68));
  return;
}
