/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCC81A4A4286FF130D0426AF6E4B4DC2AE175CD8F9E5FC8593AC6E1B44E979E7
 * Entry: 0x0016a5c0, Ghidra index: 4765, label: FUN_0016a5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016a5c0(byte param_1)

{
  int in_ECX;
  
  FUN_0016a5f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX + -0x10);
  }
  return;
}
