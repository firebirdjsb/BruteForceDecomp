/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACA9331E8BD0AD16B6DE4F617199E9D05166E43F6716D2D52804A32A47906512
 * Entry: 0x001cced0, Ghidra index: 5953, label: FUN_001cced0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cced0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dbee0();
  return unaff_EDI + unaff_ESI * 0x14;
}
