/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D3180A057728FD7B4E603E5EA93881FE89DF8C594BBB288A9927EFF12AE9C10
 * Entry: 0x00178640, Ghidra index: 4967, label: FUN_00178640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00178640(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x18));
  }
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_000762d0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
