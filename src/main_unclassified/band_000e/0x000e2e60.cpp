/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14EA55620661CE4DBF56CBDF6BC591A18C7F25A216EE49E7BEC1565C97159B30
 * Entry: 0x000e2e60, Ghidra index: 2805, label: FUN_000e2e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single 32-bit guest free operand; caller x86 ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_000e2e60(int param_1)

{
  int in_EAX;
  
  if (in_EAX != param_1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0xc));
  }
  return;
}
