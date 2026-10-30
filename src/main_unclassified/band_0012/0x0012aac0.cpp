/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 357501C35DDD0F6420B2E6D3A1D7D3E6050211568D0C2487B429DD693F7A2B77
 * Entry: 0x0012aac0, Ghidra index: 3769, label: FUN_0012aac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* The original free thunk forwards a guest32 word; full ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0012aac0(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_0012aac0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
