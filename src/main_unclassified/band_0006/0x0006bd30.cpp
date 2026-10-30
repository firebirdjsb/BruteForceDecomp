/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F25F85A70DFE54A9108BFA260C187BFE81154E206071DE4AB52A15CA263D6CA3
 * Entry: 0x0006bd30, Ghidra index: 1218, label: FUN_0006bd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0006bd50(void);

void FUN_0006bd30(byte param_1)

{
  FUN_0006bd50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
