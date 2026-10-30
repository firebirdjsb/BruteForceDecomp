/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D67EE5B375C8B9F9105B89C0128712CFE60122762C22A2732969F94F6621EF9B
 * Entry: 0x000ab950, Ghidra index: 2052, label: FUN_000ab950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000ab970(void);

void FUN_000ab950(byte param_1)

{
  FUN_000ab970();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
