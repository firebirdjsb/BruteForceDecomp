/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CBF50B883D11CA762839EC419B49B9E192CD070D9F61D9A78F6643A4226FDE6
 * Entry: 0x001f2950, Ghidra index: 7009, label: FUN_001f2950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing callee-draft interface only; original Xbox ABI_UNVERIFIED. */
extern int FUN_001e8df0(float param_1);
void FUN_001f2950(undefined4 param_1,undefined4 param_2)

{
  FUN_001e8df0(param_2);
  return;
}
