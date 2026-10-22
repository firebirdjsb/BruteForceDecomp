/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 310A2BCA13B40C8AFB29432C81C9AA58DCC1D431F9B32A5FF8CD3C3394305A70
 * Entry: 0x002cdbd0, Ghidra index: 10170, label: FUN_002cdbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002cdbd0(void)

{
  float *unaff_EDI;
  float10 fVar1;
  
  FUN_002b6830();
  fVar1 = (float10)FUN_002b67e0(unaff_EDI);
  fVar1 = (float10)1.0 / fVar1;
  *unaff_EDI = (float)(fVar1 * (float10)*unaff_EDI);
  unaff_EDI[1] = (float)(fVar1 * (float10)unaff_EDI[1]);
  unaff_EDI[2] = (float)(fVar1 * (float10)unaff_EDI[2]);
  unaff_EDI[3] = (float)(fVar1 * (float10)unaff_EDI[3]);
  return;
}
