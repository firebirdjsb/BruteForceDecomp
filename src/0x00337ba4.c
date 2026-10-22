/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE07E316B920A70A62624FED0CE6D9FE17A9C9F74C0F7F57D5884A6D37E71776
 * Entry: 0x00337ba4, Ghidra index: 12466, label: FUN_00337ba4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00337ba4(int param_1)

{
  FUN_0033e8c3(param_1);
  *(undefined4 *)(param_1 + 0x14) = 7;
  return 0;
}
