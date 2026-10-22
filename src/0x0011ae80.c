/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A4AEFF4F1125FFB9615D15DF987A7C6B3397BB0BC75AB0109E68BE5A8CC390E
 * Entry: 0x0011ae80, Ghidra index: 3611, label: FUN_0011ae80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011ae80(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00124920();
  if (((float10)*(float *)(param_1 + 0x7ac) < fVar1) && (0 < *(int *)(param_1 + 0x7a8))) {
    FUN_00124920();
  }
  return;
}
