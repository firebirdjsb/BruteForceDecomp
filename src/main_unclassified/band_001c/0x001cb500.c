/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF840ADF3D53AC2B11E60185FC34EF63C39F09A9210A900F89C3F5A6BA54A660
 * Entry: 0x001cb500, Ghidra index: 5873, label: FUN_001cb500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb500(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d9b10();
  return unaff_EDI + unaff_ESI * 0x18;
}
