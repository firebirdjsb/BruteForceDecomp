/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B22574D2E9956CB354281D620E6DD044E7F8A7949527FFB8C80F3F20C1A5054
 * Entry: 0x000512c0, Ghidra index: 733, label: FUN_000512c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000512c0(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    FUN_000512f0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *unaff_ESI = 0;
  return;
}
