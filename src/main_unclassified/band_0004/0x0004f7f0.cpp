/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC22C476364C2D52E50C406800DB60E5BFD6F00709EDC9BBE43D64DBCA3D7C18
 * Entry: 0x0004f7f0, Ghidra index: 692, label: FUN_0004f7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded 0x002EA018 -> 0x00067BF0 -> initial 0x00237EC0
 * free-thunk boundary. The original target receives a guest32 stack
 * DWORD; this source callsite and its guest registers are ABI_UNVERIFIED. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0004f7f0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
