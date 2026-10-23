/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E274A1B68EBF8B8F19463EC2AEC3D038068E3B0A4595554D13BB821A30CF24B0
 * Entry: 0x001cd2d0, Ghidra index: 5967, label: FUN_001cd2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cd2d0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001dc690();
  return unaff_EDI + unaff_ESI * 0xc;
}
