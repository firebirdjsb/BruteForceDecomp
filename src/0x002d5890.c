/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95934CFAE6B6CFCF655B874A16F739A4F435DCC4C99DABC08DD4D86FB0797854
 * Entry: 0x002d5890, Ghidra index: 10225, label: FUN_002d5890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002d5890(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_10;
  
  local_10 = 0.0;
  iVar3 = 0;
  iVar2 = 0x68;
  do {
    iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0x40));
    if ((iVar1 != 0) && (*(char *)(iVar3 + 0x16 + param_1) != '\x03')) {
      fVar5 = (float)*(undefined8 *)(iVar1 + 0xa0);
      fVar6 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0xa0) >> 0x20);
      fVar5 = (fVar5 * fVar5 + fVar6 * fVar6 + *(float *)(iVar1 + 0x9c) * *(float *)(iVar1 + 0x9c))
              * 2.5e-05;
      if (0.25 < fVar5) {
        fVar5 = 0.25;
      }
      fVar4 = (float10)fcos((float10)SQRT(fVar5));
      local_10 = (float)(((float10)1.0 - fVar4) * (float10)*(float *)(iVar1 + 4) *
                         (float10)*(float *)(*(int *)(iVar1 + 0xc) + 0xb8) + (float10)local_10);
    }
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 0x14;
  } while (iVar2 < 0x70);
  return (float10)local_10;
}
