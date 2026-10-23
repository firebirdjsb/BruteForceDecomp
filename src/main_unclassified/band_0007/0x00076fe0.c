/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0BB4AD5F64CE6ACF7D0F5F95F837B5F148B76EC64795310A8685C973A1D33EA
 * Entry: 0x00076fe0, Ghidra index: 1389, label: FUN_00076fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00076fe0(void)

{
  int *piVar1;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *unaff_ESI = 0;
  }
  return;
}
