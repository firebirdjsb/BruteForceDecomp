/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E51E6B219FE2D29D45D03F8A4B709F4F321F33054E7A9081124DDAA7D9CA790
 * Entry: 0x00070110, Ghidra index: 1267, label: FUN_00070110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00070110(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  
  fVar2 = in_EAX[6];
  fVar1 = *in_EAX;
  fVar3 = in_EAX[3];
  fVar4 = 1.0 / SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = fVar1 * fVar4;
  fVar3 = fVar3 * fVar4;
  fVar2 = fVar2 * fVar4;
  fVar7 = in_EAX[4] * fVar1 - fVar3 * in_EAX[1];
  fVar6 = fVar2 * in_EAX[1] - in_EAX[7] * fVar1;
  fVar4 = in_EAX[7] * fVar3 - in_EAX[4] * fVar2;
  fVar5 = 1.0 / SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
  fVar4 = fVar5 * fVar4;
  fVar6 = fVar6 * fVar5;
  fVar7 = fVar7 * fVar5;
  in_EAX[6] = fVar2;
  in_EAX[4] = fVar7 * fVar1 - fVar2 * fVar4;
  in_EAX[2] = fVar4;
  in_EAX[1] = fVar6 * fVar2 - fVar7 * fVar3;
  *in_EAX = fVar1;
  in_EAX[7] = fVar4 * fVar3 - fVar6 * fVar1;
  in_EAX[3] = fVar3;
  in_EAX[5] = fVar6;
  in_EAX[8] = fVar7;
  return;
}
