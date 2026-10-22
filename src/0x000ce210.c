/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0BC3D435E08FF488E1F49E657D38C604316EE8CE221577965F1F2A2140E3F3B
 * Entry: 0x000ce210, Ghidra index: 2553, label: FUN_000ce210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ce210(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  int *in_ECX;
  int unaff_EBX;
  int iVar6;
  float local_8;
  int local_4;
  
  local_4 = in_ECX[1];
  pfVar1 = (float *)(unaff_EBX + in_ECX[9] * 0xc);
  iVar6 = *in_ECX;
  local_8 = 0.0;
  piVar5 = in_ECX;
  if (iVar6 < 1) {
    return local_4;
  }
  do {
    iVar3 = piVar5[1];
    iVar2 = unaff_EBX + iVar3 * 0xc;
    fVar4 = (*(float *)(unaff_EBX + iVar3 * 0xc) - *pfVar1) * (float)in_ECX[0xd] +
            (*(float *)(iVar2 + 4) - pfVar1[1]) * (float)in_ECX[0xe] +
            (*(float *)(iVar2 + 8) - pfVar1[2]) * (float)in_ECX[0xf];
    if (local_8 < fVar4) {
      local_8 = fVar4;
      local_4 = iVar3;
    }
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + 1;
  } while (iVar6 != 0);
  return local_4;
}
