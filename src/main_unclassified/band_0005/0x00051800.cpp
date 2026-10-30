/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C4E137222F3A360C5AFA25E1E5D243EB12AA0366F101F8A4D0EDFDF262155D2
 * Entry: 0x00051800, Ghidra index: 747, label: FUN_00051800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded 0x002EA018 -> 0x00067BF0 -> initial 0x00237EC0
 * free-thunk boundary. The original target receives a guest32 stack
 * DWORD; this source callsite and its guest registers are ABI_UNVERIFIED. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00051800(void)

{
  int unaff_ESI;
  
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x10));
}
