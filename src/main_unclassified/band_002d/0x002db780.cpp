/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01C54DB835693003FCE6F7E69783CDA20FD53218BF31FD1666001A949FC33ED5
 * Entry: 0x002db780, Ghidra index: 10284, label: FUN_002db780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002db780(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *in_ECX;
  float *extraout_ECX;
  float *extraout_ECX_00;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar5 = 0;
  iVar6 = 0;
  if (0 < (int)in_ECX[0x11]) {
    do {
      iVar2 = *(int *)((int)in_ECX[0xd] + iVar6 * 4);
      pfVar1 = (float *)((int)in_ECX[7] + iVar2 * 4);
      if (*(float *)((int)in_ECX[7] + iVar2 * 4) < *in_ECX) {
        if (*pfVar1 <= -*in_ECX) {
          FUN_002db740();
          iVar5 = iVar5 + 1;
          extraout_ECX[0x13] = (float)((int)extraout_ECX[0x13] + -1);
          in_ECX = extraout_ECX;
        }
        else {
          *pfVar1 = 0.0;
          fVar7 = in_ECX[0xd];
          iVar2 = *(int *)((int)fVar7 + -4 + (int)in_ECX[0x11] * 4);
          iVar3 = *(int *)((int)fVar7 + iVar6 * 4);
          iVar4 = (int)in_ECX[0x11] + -1;
          *(int *)((int)fVar7 + iVar6 * 4) = iVar2;
          *(int *)((int)in_ECX[0xd] + iVar4 * 4) = iVar3;
          *(int *)((int)in_ECX[0xe] + iVar2 * 4) = iVar6;
          *(int *)((int)in_ECX[0xe] + iVar3 * 4) = iVar4;
        }
        iVar6 = iVar6 + -1;
        in_ECX[0x11] = (float)((int)in_ECX[0x11] + -1);
        in_ECX[0x25] = (float)((int)in_ECX[0x25] + -1);
        in_ECX[0x1a] = 1.4013e-45;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)in_ECX[0x11]);
  }
  fVar7 = in_ECX[0x11];
  if ((int)fVar7 < (int)in_ECX[0x13]) {
    do {
      if (*(float *)((int)in_ECX[9] + *(int *)((int)in_ECX[0xd] + (int)fVar7 * 4) * 4) < 0.0) {
        FUN_002db740();
        fVar7 = (float)((int)fVar7 + -1);
        extraout_ECX_00[0x13] = (float)((int)extraout_ECX_00[0x13] + -1);
        in_ECX = extraout_ECX_00;
      }
      fVar7 = (float)((int)fVar7 + 1);
    } while ((int)fVar7 < (int)in_ECX[0x13]);
  }
  return iVar5;
}
