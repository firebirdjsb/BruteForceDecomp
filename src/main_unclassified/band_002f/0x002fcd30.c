/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65D315B1861C96F178746524C1497A68E373DF67B98F8011A3A64D065951F514
 * Entry: 0x002fcd30, Ghidra index: 10984, label: FUN_002fcd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fcd30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_EAX;
  
  fVar1 = *in_EAX;
  fVar2 = in_EAX[1];
  fVar3 = *in_EAX;
  fVar4 = in_EAX[4];
  fVar5 = in_EAX[1];
  fVar6 = in_EAX[5];
  fVar7 = in_EAX[2];
  fVar8 = in_EAX[6];
  fVar9 = in_EAX[3];
  *in_EAX = in_EAX[6] + in_EAX[2] + fVar1 + in_EAX[4];
  in_EAX[1] = in_EAX[3] + in_EAX[7] + fVar2 + in_EAX[5];
  in_EAX[4] = (fVar1 + in_EAX[4]) - (in_EAX[6] + in_EAX[2]);
  in_EAX[5] = (fVar2 + in_EAX[5]) - (in_EAX[3] + in_EAX[7]);
  in_EAX[2] = (fVar3 - fVar4) - (fVar9 - in_EAX[7]);
  in_EAX[3] = (fVar7 - fVar8) + (fVar5 - fVar6);
  in_EAX[6] = (fVar9 - in_EAX[7]) + (fVar3 - fVar4);
  in_EAX[7] = (fVar5 - fVar6) - (fVar7 - fVar8);
  return;
}
