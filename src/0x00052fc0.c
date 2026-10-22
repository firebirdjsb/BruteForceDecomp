/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DBF6A71440FE4F7AAEA3C1EA388EF22B4F7EF7E14F7F1C66A8450AB72ED06C0
 * Entry: 0x00052fc0, Ghidra index: 762, label: FUN_00052fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00052fc0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00053bc0();
  return unaff_EDI + unaff_ESI * 0xc;
}
