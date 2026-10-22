/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07CBAF710C9EF6ED2379B92E8CE81FA5EDA78914C42790DA3BC07769252C536B
 * Entry: 0x002b6f90, Ghidra index: 9839, label: FUN_002b6f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6f90(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float *unaff_ESI;
  float *unaff_EDI;
  float *local_18;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[5] = unaff_EDI[5];
  unaff_ESI[10] = unaff_EDI[10];
  iVar11 = 1;
  pfVar8 = unaff_ESI;
  local_18 = unaff_ESI;
  do {
    local_18 = local_18 + 1;
    pfVar8 = pfVar8 + 4;
    if (0 < iVar11) {
      pfVar7 = local_18;
      pfVar9 = pfVar8;
      iVar10 = iVar11;
      do {
        fVar1 = *(float *)(((int)unaff_EDI - (int)unaff_ESI) + (int)pfVar9);
        iVar10 = iVar10 + -1;
        *pfVar9 = *(float *)(((int)unaff_EDI - (int)unaff_ESI) + -0x10 + (int)(pfVar7 + 4));
        *pfVar7 = fVar1;
        pfVar7 = pfVar7 + 4;
        pfVar9 = pfVar9 + 1;
      } while (iVar10 != 0);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  fVar1 = unaff_EDI[0xe];
  fVar2 = unaff_EDI[0xc];
  fVar3 = unaff_EDI[0xd];
  fVar4 = unaff_EDI[0xd];
  fVar5 = unaff_EDI[0xc];
  fVar6 = unaff_EDI[0xe];
  unaff_ESI[0xc] =
       -(unaff_ESI[1] * unaff_EDI[0xd] + unaff_EDI[0xc] * *unaff_ESI + unaff_ESI[2] * unaff_EDI[0xe]
        );
  unaff_ESI[0xd] = -(unaff_ESI[5] * fVar3 + fVar2 * unaff_ESI[4] + unaff_ESI[6] * fVar1);
  unaff_ESI[0xe] = -(fVar6 * unaff_ESI[10] + unaff_ESI[8] * fVar5 + unaff_ESI[9] * fVar4);
  return;
}
