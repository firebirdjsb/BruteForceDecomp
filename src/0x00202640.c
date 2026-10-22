/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CBDAECF5D840F2ADCB53120D2622B015A72BC93EBD34F77ECD6CDA00B5E22EB
 * Entry: 0x00202640, Ghidra index: 7273, label: FUN_00202640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00202640(void)

{
  int *piVar1;
  int in_EAX;
  float *pfVar2;
  int unaff_EBX;
  int unaff_ESI;
  float10 fVar3;
  
  piVar1 = *(int **)(unaff_EBX + 0x58);
  if ((piVar1 != (int *)0x0) && (*(int *)(unaff_EBX + 0x50) != 0)) {
    if (in_EAX == 1) {
      fVar3 = (float10)0.0;
    }
    else {
      if (in_EAX != 2) {
        return 0;
      }
      if (piVar1[6] == 0) {
        fVar3 = (float10)1.0;
      }
      else {
        fVar3 = (float10)FUN_0016c6e0();
      }
    }
    (**(code **)(*piVar1 + 0x48))((float)(fVar3 * (float10)1000.0));
    pfVar2 = (float *)(**(code **)(*(int *)(*(int *)(unaff_EBX + 0x58) + 8) + 4))();
    *(float *)(unaff_ESI + 0x24) = *pfVar2 + *(float *)(unaff_ESI + 0x24);
    *(float *)(unaff_ESI + 0x28) = pfVar2[1] + *(float *)(unaff_ESI + 0x28);
    *(float *)(unaff_ESI + 0x2c) = pfVar2[2] + *(float *)(unaff_ESI + 0x2c);
    return 1;
  }
  return 0;
}
