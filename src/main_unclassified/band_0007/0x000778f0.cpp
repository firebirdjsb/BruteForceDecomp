/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A785B5EF80737E1E5D884422D7006C90F2D4EF275397B317353211919AE8CDCE
 * Entry: 0x000778f0, Ghidra index: 1405, label: FUN_000778f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000765d0(undefined4 *param_1);

int * FUN_000778f0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x10;
    param_4 = param_4 + -0x10;
    FUN_000765d0(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
