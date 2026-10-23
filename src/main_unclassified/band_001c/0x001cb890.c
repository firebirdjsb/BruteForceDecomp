/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6064D96B80E49878E1F2170F1FD4D57D15A4543B728A4CF999D3E7CD935603A0
 * Entry: 0x001cb890, Ghidra index: 5883, label: FUN_001cb890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb890(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001d9e80();
  return unaff_EDI + unaff_ESI * 0x14;
}
