/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06C890BBCF9DECD8B750A7F4CD2E6D770B7218577F55D9D6DB36CC0A976031AA
 * Entry: 0x001972f0, Ghidra index: 5307, label: FUN_001972f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001972f0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000e3720();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
