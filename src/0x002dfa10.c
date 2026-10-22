/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B46A120BB99AB28B139D15E098628DFA9C130524C967DFBEE2168651115CC63
 * Entry: 0x002dfa10, Ghidra index: 10341, label: FUN_002dfa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002dfa10(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  
  if (*(int *)(unaff_ESI + 8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 8) >> 4;
  }
  iVar6 = 0;
  if (3 < iVar5) {
    iVar3 = *(int *)(unaff_ESI + 8);
    iVar4 = 3;
    iVar2 = 0;
    do {
      fVar1 = *(float *)(iVar2 + 4 + iVar3);
      if (*(float *)(param_1 + 4) < fVar1 != (*(float *)(param_1 + 4) == fVar1)) goto LAB_002dfac7;
      fVar1 = *(float *)(iVar2 + 0x14 + iVar3);
      if (*(float *)(param_1 + 4) < fVar1 != (*(float *)(param_1 + 4) == fVar1)) {
        iVar6 = iVar6 + 1;
        goto LAB_002dfac7;
      }
      fVar1 = *(float *)(iVar2 + 0x24 + iVar3);
      if (*(float *)(param_1 + 4) < fVar1 != (*(float *)(param_1 + 4) == fVar1)) {
        iVar6 = iVar6 + 2;
        goto LAB_002dfac7;
      }
      fVar1 = *(float *)(iVar2 + 0x34 + iVar3);
      if (*(float *)(param_1 + 4) < fVar1 != (*(float *)(param_1 + 4) == fVar1)) {
        iVar6 = iVar6 + 3;
        goto LAB_002dfac7;
      }
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + 4;
      iVar2 = iVar2 + 0x40;
    } while (iVar4 < iVar5);
  }
  if (iVar6 < iVar5) {
    iVar3 = iVar6 << 4;
    do {
      fVar1 = *(float *)(iVar3 + 4 + *(int *)(unaff_ESI + 8));
      if (*(float *)(param_1 + 4) < fVar1 != (*(float *)(param_1 + 4) == fVar1)) break;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar6 < iVar5);
  }
LAB_002dfac7:
  FUN_002dfdd0(iVar6 * 0x10 + *(int *)(unaff_ESI + 8),param_1);
  iVar5 = *(int *)(unaff_ESI + 0x58) + 1;
  *(int *)(unaff_ESI + 0x58) = iVar5;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  if (1 < iVar5) {
    fVar1 = *(float *)(*(int *)(unaff_ESI + 0xc) + -0xc) - *(float *)(*(int *)(unaff_ESI + 8) + 4);
    *(float *)(unaff_ESI + 0x5c) = fVar1;
    *(float *)(unaff_ESI + 0x60) = 1.0 / fVar1;
  }
  return iVar6;
}
