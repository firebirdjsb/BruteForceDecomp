/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 314D472BB38EDE623BDAE0A47C58FC2DB711F85E7ADD3F3421FF6B7986C8BD5B
 * Entry: 0x000b3c10, Ghidra index: 2169, label: FUN_000b3c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b3c30(void);

void FUN_000b3c10(byte param_1)

{
  FUN_000b3c30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
