/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3A67C6AEE5BC1070F1501F2A04A0E264030BF0FDBE3B998F8816DF10E8A5FDA
 * Entry: 0x002b02c0, Ghidra index: 9724, label: FUN_002b02c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b02c0(byte param_1)

{
  FUN_002b02e0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
