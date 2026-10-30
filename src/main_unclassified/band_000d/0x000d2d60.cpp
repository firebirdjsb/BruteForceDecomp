/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 747BCC289BAE0F050E5FF902769695E071545FEE5389EE40C3909FC13216DB33
 * Entry: 0x000d2d60, Ghidra index: 2621, label: FUN_000d2d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000d2d60(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_000598b0();
  return unaff_EDI + unaff_ESI * 0x18;
}
