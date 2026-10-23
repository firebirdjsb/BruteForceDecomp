/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D3EF2A81AA303B29D70BCF3F516685285B008139D181E51255D123E2F27350A
 * Entry: 0x0010c380, Ghidra index: 3466, label: FUN_0010c380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010c380(byte param_1)

{
  FUN_0010c3a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
