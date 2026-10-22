/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAAC3ACA8334EBE38BC7AF055D3A01BA885ED7650CD88C35C2599D49B4C461D6
 * Entry: 0x0004f8b0, Ghidra index: 695, label: FUN_0004f8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004f8b0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00050b50();
  return unaff_EDI + unaff_ESI * 0x18;
}
