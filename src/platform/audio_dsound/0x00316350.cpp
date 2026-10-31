/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A677657834649E826756E91DC30C58BEAB97536A789409C820B2C5D6960FA0E3
 * Entry: 0x00316350, Ghidra index: 12136, label: FUN_00316350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; original E8 destinations verified.
 * ABI_UNVERIFIED: Ghidra signatures are not Xbox calling-convention proof.
 */
extern void FUN_003161ec(void);
extern void FUN_00314937(int param_1);
void FUN_00316350(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_003161ec();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
