/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA97E787EC2AB9C6C14A2AD60E61E56982E75D5DA76CDFE2E31759AE09881CB1
 * Entry: 0x000b2510, Ghidra index: 2143, label: FUN_000b2510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b2530(void);

void FUN_000b2510(byte param_1)

{
  FUN_000b2530();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
