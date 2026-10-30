/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4411E1B8FA52DC69EA1703C69157185B5B95A6370DE9561CAF4EE3F1FD2674CC
 * Entry: 0x0017d5b0, Ghidra index: 5075, label: FUN_0017d5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d5b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *unaff_EDI;
    FUN_0017c270();
    param_1[5] = unaff_EDI[5];
  }
  return;
}
