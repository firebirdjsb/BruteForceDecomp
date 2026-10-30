/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C9D81A19AE059944B36211B37EBC9ED9359A661B1CCD9F84539411428E3178A
 * Entry: 0x002bb0e0, Ghidra index: 9898, label: FUN_002bb0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb0e0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  
  FUN_002bb050();
  dVar4 = *(double *)(*(int *)(param_1 + 0xc) + 0x108);
  iVar5 = *(ushort *)(param_1 + 0x52) - 1;
  if (-1 < iVar5) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x54) + iVar5 * 4);
      *(undefined1 *)(iVar2 + 0x70) = 8;
      FUN_002bfdd0(iVar2);
      fVar3 = (float)dVar4 - (float)*(double *)(iVar2 + 0x40);
      fVar1 = *(float *)(iVar2 + 0x48);
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(float *)(iVar2 + 0x50) = fVar3 * fVar1 + *(float *)(iVar2 + 0x50);
      fVar1 = *(float *)(iVar2 + 0x4c);
      *(undefined4 *)(iVar2 + 0x4c) = 0;
      *(float *)(iVar2 + 0x54) = fVar3 * fVar1 + *(float *)(iVar2 + 0x54);
      FUN_002c26e0();
      if (*(int *)(iVar2 + 0x3c) != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 0x3c) + 0x68) = 0;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}
