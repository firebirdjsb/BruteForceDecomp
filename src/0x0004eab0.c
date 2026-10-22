/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9CE7EFF34DD473B33666DAF26FD9AF86D2C4936832F97D70BF02FFE7D49097F
 * Entry: 0x0004eab0, Ghidra index: 680, label: FUN_0004eab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004eab0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 8) != 0) {
    FUN_00050be0(*(int *)(in_EAX + 8),*(undefined4 *)(in_EAX + 0xc),in_EAX + 4);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 8));
  }
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  return;
}
