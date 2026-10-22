/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 375FF61095D6C2CDBAEF2C318457ACC5066692C16A4CE04D14BDF9DB7A45B113
 * Entry: 0x000858c0, Ghidra index: 1569, label: FUN_000858c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000858c0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00086af0();
  return unaff_EDI + unaff_ESI * 0x24;
}
