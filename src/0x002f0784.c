/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC235BF126CC3F8643CFD942AA2B00255DFCD11B83BA660F8C2954584A86D87D
 * Entry: 0x002f0784, Ghidra index: 10753, label: FUN_002f0784
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f0784(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined8 extraout_var;
  
  uVar1 = FUN_002ec1cd(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)FUN_002eca8b(param_1,extraout_var);
    if (fVar2 == (float10)param_1) {
      param_1 = param_1 * 0.5;
      fVar2 = (float10)FUN_002eca8b();
      if (fVar2 == (float10)param_1) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}
