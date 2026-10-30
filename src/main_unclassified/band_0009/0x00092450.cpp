/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8791C6C96CE9A3EA992DEEE51316B9B1E91C06E0F2A581FFB4FEC04A1002FDD
 * Entry: 0x00092450, Ghidra index: 1798, label: FUN_00092450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00091a90(void);

void FUN_00092450(byte param_1)

{
  FUN_00091a90();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
