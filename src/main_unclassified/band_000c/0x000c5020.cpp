/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F15BF1702BB24E3232540CAD75C5043E9408A70EA051C460A445C532C73AC58F
 * Entry: 0x000c5020, Ghidra index: 2423, label: FUN_000c5020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000c5040(void);

void FUN_000c5020(byte param_1)

{
  FUN_000c5040();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
