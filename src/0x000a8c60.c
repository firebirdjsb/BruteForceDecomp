/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5DCAD7D225D3E0B5310894D27B1F13A70A6E8C1307BB8E4FD2B7C54C9A29BFC
 * Entry: 0x000a8c60, Ghidra index: 2017, label: FUN_000a8c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a8c60(byte param_1)

{
  FUN_000a8be0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
