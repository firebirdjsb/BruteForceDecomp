/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 632F80291CF7E0E70BBA84769E35027D98B8D0F478509B516CB06298D6DBF1F9
 * Entry: 0x001e98c0, Ghidra index: 6859, label: FUN_001e98c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_001e98f0(int param_1,int param_2,int param_3,int original_stack_arg4);
void FUN_001e98c0(int param_1,int param_2,undefined4 param_3)

{
  FUN_001e98f0(param_1,param_2,param_2 - param_1 >> 5,param_3);
  return;
}
