/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5889E26520CEC1C0029B07FB59FA0306D393BC2F14B3078F3E0F3D27573646EB
 * Entry: 0x001fbbd0, Ghidra index: 7129, label: FUN_001fbbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching zero-explicit-argument Ghidra callee 0x001FE080. Its
 * incoming guest ESI/register and object ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fbbd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
