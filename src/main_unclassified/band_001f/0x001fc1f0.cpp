/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFD43B7BE0D95CC588520A9CDD2C1E7A57AC8FD22DFC375759B5C70C8103F102
 * Entry: 0x001fc1f0, Ghidra index: 7147, label: FUN_001fc1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching zero-explicit-argument Ghidra callee 0x001FE080. Its
 * incoming guest ESI/register and object ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fc1f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
