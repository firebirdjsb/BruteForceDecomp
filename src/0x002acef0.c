/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D331CE76E30DB4E04E69CBB5A4F5BD63C88567E11E6D620B95BF592AF431CF3
 * Entry: 0x002acef0, Ghidra index: 9677, label: FUN_002acef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined2 FUN_002acef0(int param_1)

{
  *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
  return *(undefined2 *)(param_1 + 0x1e);
}
