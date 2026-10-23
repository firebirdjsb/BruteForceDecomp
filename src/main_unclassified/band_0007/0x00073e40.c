/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17F01920A926E1D5D7042514ABEA006516E9E36684ACF7140C4B77C19C20BBBC
 * Entry: 0x00073e40, Ghidra index: 1312, label: FUN_00073e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00073e40(float param_1)

{
  float fVar1;
  float fVar2;
  float *unaff_EBX;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 fVar3;
  float fVar4;
  
  fVar4 = *unaff_EDI * *unaff_ESI +
          unaff_EDI[1] * unaff_ESI[1] + unaff_EDI[2] * unaff_ESI[2] + unaff_EDI[3] * unaff_ESI[3];
  if (fVar4 <= -1.0) {
    fVar4 = -1.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  fVar3 = (float10)FUN_00232e80(fVar4);
  fVar3 = ABS(fVar3);
  if ((float10)1.570795 < fVar3) {
    fVar3 = (float10)3.14159 - fVar3;
  }
  if ((float10)param_1 < fVar3) {
    FUN_00233b10();
    return 1;
  }
  fVar4 = unaff_ESI[3];
  fVar1 = unaff_ESI[2];
  fVar2 = unaff_ESI[1];
  *unaff_EBX = *unaff_ESI;
  unaff_EBX[2] = fVar1;
  unaff_EBX[1] = fVar2;
  unaff_EBX[3] = fVar4;
  return 0;
}
