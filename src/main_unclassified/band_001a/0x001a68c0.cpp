/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80E7AAE67A6F457749B7493EA342FD62AB4B604D5B52642521FAE45A0E43A881
 * Entry: 0x001a68c0, Ghidra index: 5367, label: FUN_001a68c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a68c0(void)

{
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    return;
  }
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    FUN_000870c0(*(int *)(unaff_EDI + 0xc),*(undefined4 *)(unaff_EDI + 0x10),unaff_EDI + 8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0xc));
  }
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
