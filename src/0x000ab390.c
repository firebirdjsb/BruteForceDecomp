/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62B6B06EDDC8DC353495B55F6536553C222C4A0942D0C3BD32B9432E34B158A4
 * Entry: 0x000ab390, Ghidra index: 2043, label: FUN_000ab390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_000ab390(int param_1,int *param_2)

{
  float fVar1;
  short sVar2;
  
  fVar1 = *(float *)(param_1 + 0x6c);
  if ((*(int *)(param_1 + 0xa8) != 0) && (*(int *)(*(int *)(param_1 + 0xa8) + 0x7a8) != 0)) {
    fVar1 = 0.5;
  }
  sVar2 = *(short *)(*(int *)(param_1 + 0x34) + 0x22);
  *param_2 = (int)((float)(int)*(short *)(*(int *)(param_1 + 0x34) + 0x20) * 0.5);
  param_2[1] = (int)((float)(int)sVar2 * fVar1);
  return param_2;
}
