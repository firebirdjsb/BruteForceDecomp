/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CFA9C70911B9549ECDF023AE8C5D816F23A87628EF64758B023604F22DA9384
 * Entry: 0x000aa050, Ghidra index: 2029, label: FUN_000aa050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000aa070(void);

void FUN_000aa050(byte param_1)

{
  FUN_000aa070();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
