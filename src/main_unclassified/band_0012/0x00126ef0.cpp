/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 104CBAFCEE04089B8DD67F06B3B5112D197A46DC49B37DFD237E56FC55BEF99E
 * Entry: 0x00126ef0, Ghidra index: 3729, label: FUN_00126ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern void FUN_0023d9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00126ef0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_EDX;
  
  FUN_0023d9f0(*(undefined4 *)(param_1 + 500),in_EDX,param_3,param_4);
  return 1;
}
