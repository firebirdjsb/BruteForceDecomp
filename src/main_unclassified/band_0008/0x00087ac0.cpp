/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DF2EB86B884D3F2C715DDFF6A2DC994610FB4114438A031D5C73A4C541FFEBC
 * Entry: 0x00087ac0, Ghidra index: 1624, label: FUN_00087ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00087ac0(void)

{
  char in_AL;
  int unaff_ESI;
  
  if ((in_AL != '\0') && (7 < *(uint *)(unaff_ESI + 0x18))) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 7;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined2 *)(unaff_ESI + 4) = 0;
  return;
}
