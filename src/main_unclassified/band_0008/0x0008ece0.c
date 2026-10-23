/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9738E01110864A7BD120C490685E51DC1AF5433BC330A81D6896DEF567A9852
 * Entry: 0x0008ece0, Ghidra index: 1739, label: FUN_0008ece0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008ece0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0008f480();
  return unaff_EDI + unaff_ESI * 0x28;
}
