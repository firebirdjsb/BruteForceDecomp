/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9B5C7F48394C8D01573CAFA8860A38EF9E463920873E58CC0332B622C262C69
 * Entry: 0x002ff4c3, Ghidra index: 11064, label: IsBadCodePtr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__IsBadCodePtr(undefined4 param_1)

{
  IsBadReadPtr(param_1,1);
  return;
}
