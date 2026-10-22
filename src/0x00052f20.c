/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17DC8AC83F78B1467986E4AB83AE0671D4859CF48A8334EF0784FF6B49561A20
 * Entry: 0x00052f20, Ghidra index: 760, label: FUN_00052f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00052f20(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0003efa0();
  return unaff_EDI + unaff_ESI * 4;
}
