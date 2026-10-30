/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAF4853AC7157D63A02145FC961C66D241B4FE61634D40051B1FE256C9E1D057
 * Entry: 0x0015e100, Ghidra index: 4541, label: FUN_0015e100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original guest32 free-dispatch argument; caller ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0015e100(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x10));
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  return;
}
