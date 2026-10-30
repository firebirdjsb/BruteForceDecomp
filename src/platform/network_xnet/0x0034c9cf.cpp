/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 029893B8E1D071E17DB686513E24A1D6590CE221153E374D061D4D87F1740021
 * Entry: 0x0034c9cf, Ghidra index: 12978, label: FUN_0034c9cf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c9cf(void)

{
  int iVar1;
  int *in_ECX;
  
  while (*in_ECX != 0) {
    iVar1 = FUN_0034c30c();
    (**(code **)(iVar1 + 0x10))(iVar1);
  }
  return;
}
