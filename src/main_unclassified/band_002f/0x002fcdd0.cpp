/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D498358EEF390B20D581267F3DA7C949C6F0806B7FC44248E8F647EC75B66EB6
 * Entry: 0x002fcdd0, Ghidra index: 10985, label: FUN_002fcdd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fcdd0(void)

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
  in_EAX[2] = (fVar9 - in_EAX[7]) + (fVar3 - fVar4);
  in_EAX[3] = (fVar5 - fVar6) - (fVar7 - fVar8);
  in_EAX[6] = (fVar3 - fVar4) - (fVar9 - in_EAX[7]);
  in_EAX[7] = (fVar7 - fVar8) + (fVar5 - fVar6);
  return;
}
