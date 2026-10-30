/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1F5DCC6BB2B564D62806FE693347E2A80C77F74317B01E3DAEC033145220E1D
 * Entry: 0x000bd8a0, Ghidra index: 2311, label: FUN_000bd8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000bd8c0(void);

void FUN_000bd8a0(byte param_1)

{
  FUN_000bd8c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
