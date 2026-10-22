/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32E21565B28D9CDB10D7B47DD1CF70F3867B4527C44B5EBAC42F0BA2A448BCF2
 * Entry: 0x001cb940, Ghidra index: 5888, label: FUN_001cb940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cb940(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001da130();
  return unaff_ESI * 0x10 + unaff_EDI;
}
