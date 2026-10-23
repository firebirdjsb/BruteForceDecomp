/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 755BEA269F44B17732E00E06C4A7D5C187887AEC90E0A87B2555336FCC543B38
 * Entry: 0x00278a10, Ghidra index: 8922, label: FUN_00278a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00278a10(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 8) - iVar2 >> 4;
  }
  iVar6 = 0;
  if (3 < iVar4) {
    iVar5 = 3;
    iVar3 = 0;
    do {
      fVar1 = *(float *)(iVar3 + 4 + iVar2);
      if (*(float *)(in_EDX + 4) < fVar1 != (*(float *)(in_EDX + 4) == fVar1)) goto LAB_00278aaa;
      fVar1 = *(float *)(iVar3 + 0x14 + iVar2);
      if (*(float *)(in_EDX + 4) < fVar1 != (*(float *)(in_EDX + 4) == fVar1)) {
        iVar6 = iVar6 + 1;
        goto LAB_00278aaa;
      }
      fVar1 = *(float *)(iVar3 + 0x24 + iVar2);
      if (*(float *)(in_EDX + 4) < fVar1 != (*(float *)(in_EDX + 4) == fVar1)) {
        iVar6 = iVar6 + 2;
        goto LAB_00278aaa;
      }
      fVar1 = *(float *)(iVar3 + 0x34 + iVar2);
      if (*(float *)(in_EDX + 4) < fVar1 != (*(float *)(in_EDX + 4) == fVar1)) {
        iVar6 = iVar6 + 3;
        goto LAB_00278aaa;
      }
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 0x40;
    } while (iVar5 < iVar4);
  }
  if (iVar6 < iVar4) {
    iVar3 = iVar6 << 4;
    do {
      fVar1 = *(float *)(iVar3 + 4 + iVar2);
      if (*(float *)(in_EDX + 4) < fVar1 != (*(float *)(in_EDX + 4) == fVar1)) break;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar6 < iVar4);
  }
LAB_00278aaa:
  FUN_00279d00(iVar6 * 0x10 + iVar2,in_EDX);
  return iVar6 + 1;
}
