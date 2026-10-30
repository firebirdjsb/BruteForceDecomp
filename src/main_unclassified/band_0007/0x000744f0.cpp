/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A0E0CE2348E8874EAECF34A97078933201D5AB52290F5FB7786A6BCF223945F
 * Entry: 0x000744f0, Ghidra index: 1322, label: FUN_000744f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00074510(void);

void FUN_000744f0(byte param_1)

{
  FUN_00074510();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
