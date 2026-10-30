/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2D76A720C788F4889A4EC3070B3E13304CEF3C51DC75BCD7B0228971C8D9C37
 * Entry: 0x001a0330, Ghidra index: 5322, label: FUN_001a0330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001a0330(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00068ae0(param_2);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
