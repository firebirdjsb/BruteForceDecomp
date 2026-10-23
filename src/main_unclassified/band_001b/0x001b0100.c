/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44403A8D1F249AE55096676E9559937544EC3A51D7AEAA78187280421A344CFA
 * Entry: 0x001b0100, Ghidra index: 5579, label: FUN_001b0100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b0100(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  if (in_EAX != 0) {
    if (*unaff_EDI == 0) {
      iVar1 = FUN_002ea01d(0x10);
      if (iVar1 != 0) {
        FUN_001c5ec0(iVar1);
        *unaff_EDI = iVar1;
        FUN_000512f0();
        return;
      }
      *unaff_EDI = 0;
      FUN_000512f0();
    }
    return;
  }
  iVar1 = *unaff_EDI;
  if (iVar1 != 0) {
    FUN_000512f0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *unaff_EDI = 0;
  return;
}
