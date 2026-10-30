/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 149D05F46F1D7414352C18082A67E1E8D94F8BC8C1C7CF3BB80334A35B1F3CC3
 * Entry: 0x00235a30, Ghidra index: 7817, label: FUN_00235a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Reuse original one-DWORD free-thunk interface; caller ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00235a30(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  if (unaff_ESI[0x13] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x13]);
  }
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[0xd] = 0x3f800000;
  unaff_ESI[9] = 0x3f800000;
  unaff_ESI[5] = 0x3f800000;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x11] = 0;
  *unaff_ESI = param_1;
  unaff_ESI[0x17] = 0;
  unaff_ESI[1] = param_2;
  unaff_ESI[0x18] = 0xbf800000;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[3] = 0;
  return;
}
