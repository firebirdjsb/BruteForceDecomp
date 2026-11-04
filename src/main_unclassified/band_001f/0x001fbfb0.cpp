/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 518237DF85DF746C9FB15587A6E9FBEF8F2DD6D4BD44AAC6F45C116DF47BB8C1
 * Entry: 0x001fbfb0, Ghidra index: 7141, label: FUN_001fbfb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching zero-explicit-argument Ghidra callee 0x001FE080. Its
 * incoming guest ESI/register and object ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fbfb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
