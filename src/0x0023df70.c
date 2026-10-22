/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F41CA95AAF72914D8D4EEC30F83D002950F6E57CE36362DE96869CECD7A670EB
 * Entry: 0x0023df70, Ghidra index: 7968, label: FUN_0023df70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0023df70(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0023e1b0();
  return unaff_EDI + unaff_ESI * 0x48;
}
