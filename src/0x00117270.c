/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 355BCAB32BDA8D646A9FAD8BB35E129538133D6C6FDA01B4495AE7F7A8AC5D2C
 * Entry: 0x00117270, Ghidra index: 3593, label: FUN_00117270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00117270(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(int *)(unaff_EBX + 0x1f8) == 6) || (*(int *)(unaff_EBX + 0x1f8) == 7)) {
    uVar2 = 1;
    uVar3 = 4;
    uVar4 = 5;
  }
  else {
    uVar2 = 0;
    uVar3 = 2;
    uVar4 = 3;
  }
  uVar5 = 0;
  fVar1 = 0.0;
  if (0.0 < *(float *)(unaff_EBX + 0x7b0)) {
    uVar5 = uVar2;
    fVar1 = *(float *)(unaff_EBX + 0x7b0);
  }
  if (fVar1 < *(float *)(unaff_EBX + 0x7b4)) {
    uVar5 = uVar3;
    fVar1 = *(float *)(unaff_EBX + 0x7b4);
  }
  if (*(float *)(unaff_EBX + 0x7b8) <= fVar1) {
    uVar4 = uVar5;
  }
  return uVar4;
}
