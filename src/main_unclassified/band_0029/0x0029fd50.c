/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B0468D4FD8F0BA5E171CA023CB6E0F0BE9B7D17E8D0F127594913E1E85223BA
 * Entry: 0x0029fd50, Ghidra index: 9498, label: FUN_0029fd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029fd50(byte param_1)

{
  int in_ECX;
  
  FUN_002a5060();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX + -4);
  }
  return;
}
