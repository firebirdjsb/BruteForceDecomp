/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E914BA12848B264526C84FAF2E95ADA281F321BD5B8E492879C17AF034C76E2
 * Entry: 0x002f0e2b, Ghidra index: 10763, label: __SEH_epilog
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog
   
   Library: Visual Studio */

void __SEH_epilog(void)

{
  undefined4 *unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *unaff_FS_OFFSET = unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}
