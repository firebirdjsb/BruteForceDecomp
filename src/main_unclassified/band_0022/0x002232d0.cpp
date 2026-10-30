/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E8B734C7C01E02C05704BD324662148E3A53EF1B62780E6EE119E35F844126C
 * Entry: 0x002232d0, Ghidra index: 7602, label: FUN_002232d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002232d0(int param_1)

{
  float fVar1;
  int *in_ECX;
  float10 fVar2;
  
  if ((float)in_ECX[3] < 0.0 != ((float)in_ECX[3] == 0.0)) {
    fVar1 = *(float *)(in_ECX[7] + 0x60 + *(int *)(param_1 + 4) * 4) * *(float *)(param_1 + 8);
    if (((char)in_ECX[5] != '\0') && (*(int *)(param_1 + 4) == 4)) {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 8) = fVar1;
    return (float10)0.0;
  }
  if ((int *)in_ECX[6] != (int *)0x0) {
    fVar2 = (float10)(**(code **)(*(int *)in_ECX[6] + 4))
                               (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
    *(float *)(param_1 + 8) = (float)fVar2;
  }
  fVar1 = *(float *)(in_ECX[7] + 0x60 + *(int *)(param_1 + 4) * 4) * *(float *)(param_1 + 8);
  if (((char)in_ECX[5] != '\0') && (*(int *)(param_1 + 4) == 4)) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 8) = fVar1;
  if (fVar1 != 0.0) {
    (**(code **)(*in_ECX + 4))();
    FUN_00012000(0x51,param_1);
  }
  if ((float)in_ECX[3] <= *(float *)(param_1 + 8)) {
    FUN_0010f830(in_ECX,0);
    FUN_002230a0();
    return (float10)(float)in_ECX[3];
  }
  FUN_0010f830(in_ECX,(float)in_ECX[3] - *(float *)(param_1 + 8));
  return (float10)(float)in_ECX[3];
}
