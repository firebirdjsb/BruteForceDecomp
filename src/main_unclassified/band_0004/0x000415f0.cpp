/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6801BC9DF04D0431F5A5A12F98DF4AC748B40FFD774F832D7D3E8DDF30B10584
 * Entry: 0x000415f0, Ghidra index: 496, label: FUN_000415f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00042880(void);

uint FUN_000415f0(void)

{
  uint in_EAX;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x9d0) != 0) &&
     (in_EAX = 0, *(int *)(unaff_ESI + 0x9d4) - *(int *)(unaff_ESI + 0x9d0) >> 2 != 0)) {
    FUN_00042880();
    FUN_00042880();
    if (*(int *)(unaff_ESI + 0x9d0) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x9d0));
    }
    *(undefined4 *)(unaff_ESI + 0x9d0) = 0;
    *(undefined4 *)(unaff_ESI + 0x9d4) = 0;
    *(undefined4 *)(unaff_ESI + 0x9d8) = 0;
    in_EAX = 0;
  }
  return in_EAX & 0xffffff00;
}
