/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 085FEC57F76F2420D10DC47CC47DE1FBD6290E6EFD955FDF4A8BCDCB7EF44EF4
 * Entry: 0x001dcfc0, Ghidra index: 6606, label: FUN_001dcfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcfc0(void)

{
  int in_EAX;
  undefined4 unaff_ESI;
  
  if (in_EAX != 0) {
    FUN_000fdc90(unaff_ESI);
    FUN_001e0dd0(in_EAX + 0x28);
  }
  return;
}
