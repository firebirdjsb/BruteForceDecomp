/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABE8CB5247644A1C2D878A4E7A7055A6CB3DB056ED9F16E5C13C62DA3321CE14
 * Entry: 0x002e4850, Ghidra index: 10453, label: FUN_002e4850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e4850(int param_1,char param_2)

{
  int in_ECX;
  
  if (*(char *)(param_1 + 0x254 + in_ECX) != param_2) {
    *(char *)(param_1 + 0x254 + in_ECX) = param_2;
    *(undefined1 *)(in_ECX + 0x248) = 1;
  }
  return;
}
