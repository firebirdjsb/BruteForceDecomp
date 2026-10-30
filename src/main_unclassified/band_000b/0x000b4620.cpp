/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B49F5D23709BABE5D2D19ED649A566CD8199128E55BC898C795F26E3E325016
 * Entry: 0x000b4620, Ghidra index: 2175, label: FUN_000b4620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b4640(void);

void FUN_000b4620(byte param_1)

{
  FUN_000b4640();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
