/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AAB895D9F142887F9618C03F8C2294C5444D44BB053052ADCD672A937994D9C
 * Entry: 0x0009eb10, Ghidra index: 1883, label: FUN_0009eb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0009eb10(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  return 1;
}
