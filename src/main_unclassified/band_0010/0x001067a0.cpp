/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 690D3247C1B37AEA95C29CC4933A1587013E148EDBFD95BE19D18818B1AF3744
 * Entry: 0x001067a0, Ghidra index: 3358, label: FUN_001067a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001067a0(void)

{
  int in_EAX;
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)*(float *)(in_EAX + 8);
  pfVar1 = (float *)(in_EAX + 0x1c);
  iVar2 = 2;
  do {
    if ((pfVar1[-2] != 0.0) && (*pfVar1 < 0.0)) {
      fVar3 = fVar3 + (float10)*pfVar1;
    }
    if ((pfVar1[2] != 0.0) && (pfVar1[4] < 0.0)) {
      fVar3 = fVar3 + (float10)pfVar1[4];
    }
    if ((pfVar1[6] != 0.0) && (pfVar1[8] < 0.0)) {
      fVar3 = fVar3 + (float10)pfVar1[8];
    }
    if ((pfVar1[10] != 0.0) && (pfVar1[0xc] < 0.0)) {
      fVar3 = fVar3 + (float10)pfVar1[0xc];
    }
    if ((pfVar1[0xe] != 0.0) && (pfVar1[0x10] < 0.0)) {
      fVar3 = fVar3 + (float10)pfVar1[0x10];
    }
    if ((pfVar1[0x12] != 0.0) && (pfVar1[0x14] < 0.0)) {
      fVar3 = fVar3 + (float10)pfVar1[0x14];
    }
    pfVar1 = pfVar1 + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return fVar3;
}
