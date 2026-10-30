/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DEB122AA9265DAF0DCF6F1A2279BDC3AB7475D7A256856017E7171274363BA6
 * Entry: 0x000bcc60, Ghidra index: 2300, label: FUN_000bcc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000bcc80(void);

void FUN_000bcc60(byte param_1)

{
  FUN_000bcc80();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
