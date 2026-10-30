/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BA7F3AF69D7E4ED4CC623544C2F05E6A9F6EA20EFE527318F856F3C1F1950FD
 * Entry: 0x00062030, Ghidra index: 1045, label: FUN_00062030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00062050(void);

void FUN_00062030(byte param_1)

{
  FUN_00062050();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
