/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F024530970529511CE9731646FB5F1F71AADB2D9C6C2DF3C19E6E81BC1E4D569
 * Entry: 0x001fc130, Ghidra index: 7145, label: FUN_001fc130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching zero-explicit-argument Ghidra callee 0x001FE080. Its
 * incoming guest ESI/register and object ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fc130(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
