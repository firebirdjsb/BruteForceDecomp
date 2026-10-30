/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F41F237BD37BA9BB10119399EB563C8CBBF374CF7887F3D9C7B4B9DF95AA20D8
 * Entry: 0x0023b330, Ghidra index: 7910, label: FUN_0023b330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023b330(byte param_1)

{
  FUN_0023b2e0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
