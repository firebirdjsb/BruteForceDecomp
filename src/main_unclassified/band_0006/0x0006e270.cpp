/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65FFA5F736A567EF261756EB7CCDB99A96D7BD4FF55287734B101EF025B4566D
 * Entry: 0x0006e270, Ghidra index: 1236, label: FUN_0006e270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0006e450(float param_1);
extern void FUN_0006ad90(void);
extern void FUN_0006c840(int param_1);
extern void FUN_000a0c60(void);

bool FUN_0006e270(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int *in_EAX;
  float10 fVar2;
  float local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  local_14 = 1.0;
  local_10 = 1.0;
  if ((*(byte *)(in_EAX + 0x13) & 1) != 0) {
    fVar2 = (float10)(**(code **)(in_EAX[0x12] + 0x2c))();
    local_14 = (float)fVar2;
    fVar2 = (float10)(**(code **)(in_EAX[0x12] + 0x1c))();
    local_10 = (float)fVar2;
    FUN_0006e450(in_EAX[0x33]);
    iVar1 = in_EAX[0x14];
    if (*(float *)(iVar1 + 0x2c) != local_14) {
      *(float *)(iVar1 + 0x2c) = local_14;
      *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x24) / local_14;
      FUN_0006ad90();
    }
    FUN_0006c840(in_EAX);
  }
  (**(code **)(*in_EAX + 0x40))();
  FUN_000a0c60();
  fVar2 = (float10)(**(code **)(*(int *)in_EAX[0x14] + 0x24))();
  if ((float10)fStack_4 <= -fVar2) {
    *param_1 = fStack_c * *(float *)(in_EAX[0x14] + 0x38) * (-1.0 / fStack_4) +
               *(float *)(in_EAX[0x14] + 0x30);
    *param_2 = fStack_8 * *(float *)(in_EAX[0x14] + 0x3c) * (-1.0 / fStack_4) +
               *(float *)(in_EAX[0x14] + 0x34);
    *param_3 = -fStack_4;
  }
  if ((*(byte *)(in_EAX + 0x13) & 1) != 0) {
    FUN_0006e450(local_10 + local_10);
    iVar1 = in_EAX[0x14];
    if (*(float *)(iVar1 + 0x2c) != local_14) {
      *(float *)(iVar1 + 0x2c) = local_14;
      *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x24) / local_14;
      FUN_0006ad90();
    }
    FUN_0006c840(in_EAX);
  }
  return (float10)fStack_4 <= -fVar2;
}
