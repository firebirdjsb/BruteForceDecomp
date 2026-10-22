/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9797C40B17C207C9B17673D006099EA93BF7E29BB55169D5A207E081458CB6C3
 * Entry: 0x001fc5b0, Ghidra index: 7160, label: FUN_001fc5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fc5b0(byte param_1)

{
  FUN_001fc550();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
