/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B14E424A85A028F7EE3BFDC61A79F39CC3879DB81067927FFB92022131E676B2
 * Entry: 0x001489d0, Ghidra index: 4260, label: FUN_001489d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001489d0(byte param_1)

{
  FUN_0015f700();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
