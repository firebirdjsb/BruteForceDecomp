/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE8AF10858AA26B55E279610FCEAC9D76C3E13BBE8296F589F1425859E2A11D7
 * Entry: 0x00265e50, Ghidra index: 8733, label: FUN_00265e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00265e50(void)

{
  float *in_ECX;
  float *unaff_ESI;
  float10 fVar1;
  float fVar2;
  undefined1 auVar3 [16];
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
    auVar3 = rsqrtss(ZEXT416((uint)fVar2),1.0 - fVar2 * fVar2);
    fVar1 = (float10)FUN_00306c80();
    fStack_4 = (float)(fVar1 * (float10)auVar3._0_4_);
    fVar2 = fStack_4 * in_ECX[1];
    local_8 = fStack_4 * (float)*(undefined8 *)(in_ECX + 2);
    fStack_4 = fStack_4 * (float)((ulonglong)*(undefined8 *)(in_ECX + 2) >> 0x20);
  }
  else {
    fVar2 = 0.0;
    fStack_4 = 0.0;
    local_8 = 0.0;
  }
  *unaff_ESI = fVar2;
  unaff_ESI[2] = fStack_4;
  unaff_ESI[1] = local_8;
  return;
}
