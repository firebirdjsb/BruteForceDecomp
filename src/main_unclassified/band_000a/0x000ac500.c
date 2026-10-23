/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA8249ECF52DF22242137210CA867CC5301BC4D8E05805ECA33F838AEA47B106
 * Entry: 0x000ac500, Ghidra index: 2061, label: FUN_000ac500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ac500(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x6c);
  sVar5 = 0;
  iVar4 = 0x88;
  do {
    iVar3 = *(int *)(iVar4 + param_1);
    *(undefined2 *)(iVar3 + 4) = 0;
    *(short *)(iVar3 + 6) = (sVar5 + 1) * -(short)(int)(fVar1 * fVar2);
    iVar4 = iVar4 + 4;
    sVar5 = sVar5 + 1;
    *(char *)(iVar3 + 0x10) =
         (char)(int)(*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) *
                     *(float *)(param_1 + 0x70) * 255.0);
  } while (iVar4 < 0x90);
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x68);
  sVar5 = 0;
  iVar4 = 0x90;
  do {
    iVar3 = *(int *)(iVar4 + param_1);
    *(short *)(iVar3 + 4) = (sVar5 + 1) * -(short)(int)(fVar1 * fVar2);
    *(undefined2 *)(iVar3 + 6) = 0;
    iVar4 = iVar4 + 4;
    sVar5 = sVar5 + 1;
    *(char *)(iVar3 + 0x10) =
         (char)(int)(*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) *
                     *(float *)(param_1 + 0x70) * 255.0);
  } while (iVar4 < 0x98);
  return;
}
