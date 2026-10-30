/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3793C1D3D60522961099DEFFD7F8F59FB0DA218DAB00510ACB2954F499E862ED
 * Entry: 0x0015ba10, Ghidra index: 4536, label: FUN_0015ba10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original guest32 free-dispatch argument; caller ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0015ba10(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x30));
  }
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  return;
}
