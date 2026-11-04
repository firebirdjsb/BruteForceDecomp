/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB83914335AD98CFCCB6EA1E6D01198EA6CD5BFB752405DA5D6779766B058B13
 * Entry: 0x001fbe20, Ghidra index: 7135, label: FUN_001fbe20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching zero-explicit-argument Ghidra callee 0x001FE080. Its
 * incoming guest ESI/register and object ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fbe20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
