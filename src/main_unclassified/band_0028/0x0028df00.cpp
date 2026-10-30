/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 159840F4E2196961DF5784D6C56F0E6431CFE5FC6C4B95E5C0185AC512E8FBC6
 * Entry: 0x0028df00, Ghidra index: 9199, label: FUN_0028df00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028df00(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_0028e320(param_3,*(undefined4 *)(unaff_ESI + 8));
    FUN_0027cc10();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}
