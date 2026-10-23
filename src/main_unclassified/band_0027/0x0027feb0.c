/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6362FA96731ED83DE97AD5B832A1CD00F238630CFDB26B1F9F9DB6F7B8D30B31
 * Entry: 0x0027feb0, Ghidra index: 9024, label: FUN_0027feb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027feb0(byte param_1)

{
  FUN_0027f650();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
