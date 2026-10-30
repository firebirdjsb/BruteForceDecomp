/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C524499CC039734B3A5690580C12D11F12E4D49F9AEF6787D62F76F30DC513F5
 * Entry: 0x002fcf30, Ghidra index: 10987, label: FUN_002fcf30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fcf30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_EAX;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int unaff_ESI;
  int iVar12;
  
  iVar12 = param_1 >> 1;
  iVar10 = 2;
  iVar8 = (param_2 * 2) / iVar12;
  if (2 < iVar12) {
    iVar2 = iVar8 * 4;
    iVar8 = iVar8 * -4;
    iVar11 = in_EAX + param_2 * 4;
    pfVar9 = (float *)(unaff_ESI + -8 + param_1 * 4);
    do {
      fVar4 = 0.5 - *(float *)(iVar11 + iVar8);
      iVar11 = iVar11 + iVar8;
      fVar3 = *(float *)(in_EAX + iVar2);
      in_EAX = in_EAX + iVar2;
      iVar1 = iVar10 * 4;
      iVar10 = iVar10 + 2;
      fVar7 = *(float *)(unaff_ESI + iVar1) - *pfVar9;
      fVar6 = *(float *)(unaff_ESI + -4 + iVar10 * 4) + pfVar9[1];
      fVar5 = fVar7 * fVar4 + fVar6 * fVar3;
      fVar3 = fVar6 * fVar4 - fVar7 * fVar3;
      *(float *)(unaff_ESI + -8 + iVar10 * 4) = *(float *)(unaff_ESI + -8 + iVar10 * 4) - fVar5;
      *(float *)(unaff_ESI + -4 + iVar10 * 4) = *(float *)(unaff_ESI + -4 + iVar10 * 4) - fVar3;
      *pfVar9 = fVar5 + *pfVar9;
      pfVar9[1] = pfVar9[1] - fVar3;
      pfVar9 = pfVar9 + -2;
    } while (iVar10 < iVar12);
  }
  return;
}
