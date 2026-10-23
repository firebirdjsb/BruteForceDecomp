/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4177CBEC51BD38BC2E5DC7E2CFDE6DA53C3F93FDE2897658BB7DFACD3CE5E642
 * Entry: 0x00357470, Ghidra index: 13156, label: FUN_00357470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00357470(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + -0x54) != 0) {
    FUN_00356f00(param_1 + -0x34c);
    *(undefined4 *)(param_1 + -4) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + -4) = param_2;
  return;
}
