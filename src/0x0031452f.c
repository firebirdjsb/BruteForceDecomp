/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDBE9399B0AFD3A66EAC0496615FB60D45FED55C342CDC26C169D8F5EBF1B774
 * Entry: 0x0031452f, Ghidra index: 12060, label: FUN_0031452f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031452f(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_00314300();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
