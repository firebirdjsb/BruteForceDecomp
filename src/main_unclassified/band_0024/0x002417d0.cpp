/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BECE44BF9577CA005E99D0D70B2C709C71FC0BDE1843932A475337DED6212AA7
 * Entry: 0x002417d0, Ghidra index: 8016, label: FUN_002417d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002417d0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  return;
}
