/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B0C82396C1CF1A82DE23441560ED93CA042F2C07E454B2EBC1F77C272B1613D
 * Entry: 0x001fcae0, Ghidra index: 7172, label: FUN_001fcae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fcae0(byte param_1)

{
  FUN_001fca50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
