/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7DBB3491F11D849427CF20D4FB5283AF0EA0B7479694F8B91C60E5E61D00AB9
 * Entry: 0x001dd290, Ghidra index: 6621, label: FUN_001dd290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declaration only; original Xbox ABI_UNVERIFIED. */
extern int FUN_001e0dd0(int param_1);
void FUN_001dd290(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI != 0) {
    FUN_001e0dd0(unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(unaff_EDI + 0x10);
    *(undefined4 *)(unaff_ESI + 0x14) = *(undefined4 *)(unaff_EDI + 0x14);
  }
  return;
}
