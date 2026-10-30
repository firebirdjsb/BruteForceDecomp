/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2B07F07A952DFA9B5BE5A83288FF58A096A51A41AD67A13129C1425B41249AF
 * Entry: 0x0005da80, Ghidra index: 971, label: FUN_0005da80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original free-dispatch jumps through guest DWORD [0x003BC654];
 * this draft passes one 32-bit word. Caller ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0005da80(int param_1)

{
  if (*(char *)(param_1 + 0x1d) == '\0') {
    FUN_0005da80(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
