/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D01701F3BB856A484C1D28A771470737ADB5EDDF41EE86638C1CD9CACF09EBC
 * Entry: 0x001cd290, Ghidra index: 5965, label: FUN_001cd290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cd290(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dc500();
  return unaff_ESI * 0x40 + unaff_EDI;
}
