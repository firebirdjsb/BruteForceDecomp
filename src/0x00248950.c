/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAD770B9E97A0FFDF08BF9E94EE7EA6FB48A1171A377C554919818C8A3589A3C
 * Entry: 0x00248950, Ghidra index: 8130, label: FUN_00248950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00248950(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0024b760();
  return unaff_EDI + unaff_ESI * 0x24;
}
