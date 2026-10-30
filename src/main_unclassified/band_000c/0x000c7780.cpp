/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0AF6409695480452690C9CB689FF68D356F10FBBE3C531F5CCD910614DA912C
 * Entry: 0x000c7780, Ghidra index: 2451, label: FUN_000c7780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000c77a0(void);

void FUN_000c7780(byte param_1)

{
  FUN_000c77a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
