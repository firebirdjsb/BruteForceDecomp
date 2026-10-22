/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2CAC2A403C263F66941CDB2E721B0F333A0B4BF01F989D2CD3A68440E937FFA
 * Entry: 0x000853c0, Ghidra index: 1554, label: FUN_000853c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000853c0(void)

{
  int unaff_ESI;
  
  if (7 < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 7;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined2 *)(unaff_ESI + 4) = 0;
  return;
}
