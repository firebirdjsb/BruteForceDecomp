/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7B2E8632F8F4F24C48AD9B3C5E1010DF5AB524DF0FDC7941C46FF12E00028C9
 * Entry: 0x001fbb50, Ghidra index: 7127, label: FUN_001fbb50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching zero-explicit-argument Ghidra callee 0x001FE080. Its
 * incoming guest ESI/register and object ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fbb50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
