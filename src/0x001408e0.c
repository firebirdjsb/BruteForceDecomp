/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B281876A570047E5CC60C2FC37F619629A85F8C34CA4DB7B8DA390E6766762F0
 * Entry: 0x001408e0, Ghidra index: 4083, label: FUN_001408e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001408e0(byte param_1)

{
  FUN_00140900();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
