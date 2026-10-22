/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B9F06C74900AEFBC806CFF726A8A596B8ED71BC419D2DEC3233FAC2CBF51ADE
 * Entry: 0x002f9000, Ghidra index: 10969, label: FUN_002f9000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f9000(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  float *pfVar3;
  float *unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_8;
  
  *(int *)(in_EAX + 4) = in_EDX;
  if (1 < in_EDX) {
    iVar2 = in_EDX >> 1;
    fVar6 = (float10)fpatan((float10)1.0,(float10)1);
    local_8 = 1;
    fVar4 = (float10)fcos((float10)iVar2 * (float10)(float)(fVar6 / (float10)iVar2));
    *unaff_ESI = (float)fVar4;
    unaff_ESI[iVar2] = (float)(fVar4 * (float10)0.5);
    if (1 < iVar2) {
      pfVar3 = unaff_ESI + in_EDX + -1;
      do {
        iVar1 = local_8 + 1;
        fVar4 = (float10)local_8 * (float10)(float)(fVar6 / (float10)iVar2);
        fVar5 = (float10)fcos(fVar4);
        unaff_ESI[local_8] = (float)(fVar5 * (float10)0.5);
        fVar4 = (float10)fsin(fVar4);
        *pfVar3 = (float)(fVar4 * (float10)0.5);
        pfVar3 = pfVar3 + -1;
        local_8 = iVar1;
      } while (iVar1 < iVar2);
    }
  }
  return;
}
