/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE015713154B70331D67CED1778CFFF5EC5BA4E54E6EB26A0822A45B8ED98BE9
 * Entry: 0x00263420, Ghidra index: 8675, label: FUN_00263420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00263420(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00263510();
  return unaff_EDI + unaff_ESI * 0x14;
}
