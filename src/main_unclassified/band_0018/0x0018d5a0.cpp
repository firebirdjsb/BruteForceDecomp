/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 230174A62F68C6F5449113226F4FF31245F0485E4EC3D65959CED09AA41CFA67
 * Entry: 0x0018d5a0, Ghidra index: 5285, label: FUN_0018d5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_00087240(byte param_1);
undefined4 FUN_0018d5a0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00087240(1);
  }
  return 0;
}
