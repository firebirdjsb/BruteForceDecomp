/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58C3185B5F29D6F3EA899A1B2FDB17B51FD3D2C124B5C27600E1626B958B2361
 * Entry: 0x001cc870, Ghidra index: 5934, label: FUN_001cc870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc870(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001db630();
  return unaff_ESI * 0x128 + unaff_EDI;
}
