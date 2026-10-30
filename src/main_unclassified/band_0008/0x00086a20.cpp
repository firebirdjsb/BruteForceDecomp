/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B96402545E0525F52DBE27CA17351562FBA2BAB254AA8B8438C2D00A33013B0
 * Entry: 0x00086a20, Ghidra index: 1592, label: FUN_00086a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x002EA018 free thunk: the initial imported target reads a guest
 * DWORD stack argument. Caller machine-code ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00086a20(void)

{
  int in_EAX;
  int unaff_EDI;
  
  while( true ) {
    if (in_EAX == unaff_EDI) {
      return;
    }
    if (7 < *(uint *)(in_EAX + 0x18)) break;
    *(undefined4 *)(in_EAX + 0x18) = 7;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined2 *)(in_EAX + 4) = 0;
    in_EAX = in_EAX + 0x3c;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
}
