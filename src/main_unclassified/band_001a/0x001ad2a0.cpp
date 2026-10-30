/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F6BA37D779662F871A58E2A49C5A246294E40D69038C7C134E155CDCBFB1DAC
 * Entry: 0x001ad2a0, Ghidra index: 5539, label: FUN_001ad2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ad2a0(void)

{
  int iVar1;
  int in_EAX;
  int *unaff_ESI;
  
  if (in_EAX != 0) {
    if (*unaff_ESI == 0) {
      FUN_001b3340(unaff_ESI);
      FUN_0006a2b0();
    }
    return;
  }
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    FUN_0006a2b0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *unaff_ESI = 0;
  return;
}
