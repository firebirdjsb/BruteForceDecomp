/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6955B83B7FE53F3315B32CF67E93AD5F3FBED63DEA362A258EBB3A10C724AA4A
 * Entry: 0x002ce1d0, Ghidra index: 10176, label: FUN_002ce1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ce1d0(byte param_1)

{
  FUN_002ceab0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
