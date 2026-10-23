/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70022445E0CA673BAEE59EEEA501972331F3465D16EEC5B8C219FD423AABE647
 * Entry: 0x001cc750, Ghidra index: 5926, label: FUN_001cc750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cc750(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001db1b0();
  return unaff_EDI + unaff_ESI * 0x18;
}
