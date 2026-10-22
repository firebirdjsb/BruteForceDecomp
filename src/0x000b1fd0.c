/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 104E8538DE9BCF20B3BCA83CF44E0E2F35F0F363F8439C2AFE50577CB5BF4CD4
 * Entry: 0x000b1fd0, Ghidra index: 2136, label: FUN_000b1fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000b1fd0(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(param_1 + 0x4c) / *(float *)(param_1 + 0x54);
  fVar1 = fVar1 * *(float *)(param_1 + 0x50) * fVar1;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28) + -0x2c;
  }
  if ((*(short *)(*(int *)(iVar2 + 0x34) + 0x20) < 600) ||
     (*(short *)(*(int *)(iVar2 + 0x34) + 0x22) < 400)) {
    fVar1 = fVar1 * 0.5;
  }
  return (int)fVar1;
}
