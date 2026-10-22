/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAADA07DA9B3AF484D3928BE2CB3C56538F32F21F98D3FABEAF15EC7EA333779
 * Entry: 0x00256f10, Ghidra index: 8448, label: FUN_00256f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00256f10(byte param_1)

{
  FUN_002565f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
