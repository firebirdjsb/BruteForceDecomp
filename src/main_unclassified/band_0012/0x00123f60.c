/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AF4429D50639281219133E642F0C48C3D6ECFA4460C19245851F293A7B42C05
 * Entry: 0x00123f60, Ghidra index: 3677, label: FUN_00123f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c05fc;
void FUN_00123f60(void)

{
  float fVar1;
  int unaff_ESI;
  float10 fVar2;
  
  fVar1 = *(float *)(unaff_ESI + 0x7dc);
  if (!isnan(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
    fVar2 = (float10)FUN_0010fce0();
    *(float *)(unaff_ESI + 0x7dc) = (float)fVar2;
    return;
  }
  if (*(float *)(unaff_ESI + 0x7dc) < DAT_003c05fc) {
    *(float *)(unaff_ESI + 0x7dc) = DAT_003c05fc;
  }
  return;
}
