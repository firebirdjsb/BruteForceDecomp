/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A697FE8DAB805C74B9D09326152BC217498C6655BD950E68C17FF52F991936D0
 * Entry: 0x001ccda0, Ghidra index: 5949, label: FUN_001ccda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ccda0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dbd30();
  return unaff_EDI + unaff_ESI * 0xc;
}
