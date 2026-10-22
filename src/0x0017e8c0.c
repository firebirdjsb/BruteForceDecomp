/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F9CB2EEAF38BA0F07BC6F5851D72125BD14BD1F22184FABBBD159915129D4D3
 * Entry: 0x0017e8c0, Ghidra index: 5108, label: FUN_0017e8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017e8c0(byte param_1)

{
  FUN_0017e8e0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
