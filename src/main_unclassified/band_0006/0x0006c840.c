/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96A94823386D74AAE48B574DE3B6E3699FC65ADD0B5B1BFAC6F558E862D92581
 * Entry: 0x0006c840, Ghidra index: 1229, label: FUN_0006c840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006c840(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = *(int *)(param_1 + 0x50);
  fVar1 = *(float *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(float *)(param_1 + 100) =
       -(-fVar1 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x5c) * 0.0);
  fVar1 = *(float *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(float *)(param_1 + 0x74) =
       -(*(float *)(param_1 + 0x6c) * 0.0 + -fVar1 * *(float *)(param_1 + 0x70));
  fVar1 = *(float *)(iVar2 + 0x24);
  fVar4 = (float10)(*(float *)(iVar2 + 0x14) * 0.017453292);
  fVar3 = (float10)fcos(fVar4);
  fVar4 = (float10)fsin(fVar4);
  *(float *)(param_1 + 0x78) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(float *)(param_1 + 0x80) = -(float)fVar4;
  *(float *)(param_1 + 0x84) =
       (*(float *)(param_1 + 0x7c) * 0.0 - -fVar1 * *(float *)(param_1 + 0x78)) +
       *(float *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(float *)(param_1 + 0x88) = -(float)fVar3;
  *(float *)(param_1 + 0x90) = -(float)fVar4;
  *(float *)(param_1 + 0x94) =
       (*(float *)(param_1 + 0x8c) * 0.0 - --fVar1 * *(float *)(param_1 + 0x88)) +
       *(float *)(param_1 + 0x90);
  fVar1 = *(float *)(iVar2 + 0x28);
  fVar4 = (float10)(*(float *)(iVar2 + 0x18) * 0.017453292);
  fVar3 = (float10)fcos(fVar4);
  fVar4 = (float10)fsin(fVar4);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(float *)(param_1 + 0xa0) = -(float)fVar4;
  *(float *)(param_1 + 0x9c) = -(float)fVar3;
  *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa0) - fVar1 * *(float *)(param_1 + 0x9c);
  *(float *)(param_1 + 0xa8) = 0.0;
  *(float *)(param_1 + 0xac) = --(float)fVar3;
  *(float *)(param_1 + 0xb0) = -(float)fVar4;
  *(float *)(param_1 + 0xb4) =
       (*(float *)(param_1 + 0xa8) * 0.0 - -fVar1 * *(float *)(param_1 + 0xac)) +
       *(float *)(param_1 + 0xb0);
  return;
}
