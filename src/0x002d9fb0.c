/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C81619B635BB9F5138E9D3252CC0B3D7C201D832ECAAB09ACB2A6E42F616879
 * Entry: 0x002d9fb0, Ghidra index: 10262, label: FUN_002d9fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002d9fb0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *in_EDX;
  float *pfVar7;
  float *pfVar8;
  
  fVar4 = in_EDX[1];
  while( true ) {
    while( true ) {
      fVar4 = (float)((int)fVar4 + -1);
      if ((int)fVar4 < 0) {
        iVar6 = 0;
        if (0 < (int)in_EDX[1]) {
          do {
            *(undefined4 *)((int)in_EDX[5] + iVar6 * 4) =
                 *(undefined4 *)((int)in_EDX[4] + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)in_EDX[1]);
        }
        return 1;
      }
      fVar5 = in_EDX[4];
      iVar6 = (int)in_EDX[1] + -1;
      fVar1 = *(float *)((int)fVar5 + (int)fVar4 * 4);
      pfVar7 = (float *)((int)in_EDX[3] + -4 + ((int)in_EDX[2] * (int)fVar4 + (int)in_EDX[1]) * 4);
      if ((int)fVar4 < iVar6) {
        pfVar8 = (float *)((int)fVar5 + iVar6 * 4);
        iVar6 = iVar6 - (int)fVar4;
        do {
          fVar2 = *pfVar7;
          pfVar7 = pfVar7 + -1;
          fVar3 = *pfVar8;
          pfVar8 = pfVar8 + -1;
          iVar6 = iVar6 + -1;
          fVar1 = fVar1 - fVar2 * fVar3;
        } while (iVar6 != 0);
      }
      if (ABS(*pfVar7) < *in_EDX) break;
      *(float *)((int)fVar5 + (int)fVar4 * 4) = fVar1 / *pfVar7;
    }
    if (*in_EDX * 1000.0 <= ABS(fVar1)) break;
    *(undefined4 *)((int)fVar5 + (int)fVar4 * 4) = 0;
  }
  return 0;
}
