/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D4A3361D049927E9B88B4429089D14CECA819268D712F047AEC2CCBF4E37A9C
 * Entry: 0x0017bcb0, Ghidra index: 5033, label: FUN_0017bcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017bcb0(void)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[4] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[4]);
  }
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  if (unaff_ESI[2] != 0) {
    FUN_0017ca90(1);
  }
  unaff_ESI[2] = 0;
  FUN_0017c510();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*unaff_ESI);
}
