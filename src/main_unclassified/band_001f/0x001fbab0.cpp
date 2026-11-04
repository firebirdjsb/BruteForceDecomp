/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D38240E15FB0D7273D1D48A70E6BFA2E93D82D834CA9606E91CB578EB1C040F
 * Entry: 0x001fbab0, Ghidra index: 7125, label: FUN_001fbab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching zero-explicit-argument Ghidra callee 0x001FE080. Its
 * incoming guest ESI/register and object ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fbab0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
