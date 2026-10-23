/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C462AD4C3973EB2F416D9AFB9F7351BB5EAC423C2F160B1F10F4702368F2F0D2
 * Entry: 0x0016ee90, Ghidra index: 4831, label: FUN_0016ee90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016ee90(void)

{
  float *in_ECX;
  float *unaff_ESI;
  float10 fVar1;
  float fVar2;
  float local_8;
  float fStack_4;
  
  fVar2 = *in_ECX;
  if (*in_ECX <= -1.0) {
    fVar2 = -1.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (1e-05 <= ABS(1.0 - fVar2)) {
    fVar1 = (float10)FUN_00306c80();
    fStack_4 = (float)(fVar1 / SQRT((float10)1.0 - (float10)fVar2 * (float10)fVar2));
    fVar2 = fStack_4 * in_ECX[1];
    local_8 = fStack_4 * (float)*(undefined8 *)(in_ECX + 2);
    fStack_4 = fStack_4 * (float)((ulonglong)*(undefined8 *)(in_ECX + 2) >> 0x20);
  }
  else {
    fVar2 = 0.0;
    local_8 = 0.0;
    fStack_4 = 0.0;
  }
  *unaff_ESI = fVar2;
  unaff_ESI[2] = fStack_4;
  unaff_ESI[1] = local_8;
  return;
}
