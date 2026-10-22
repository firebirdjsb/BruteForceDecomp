/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB17A648D46974825B14526E97AA4B09D4C1629915BA266927E3D183E07D2BA1
 * Entry: 0x00240d40, Ghidra index: 7988, label: FUN_00240d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00240d40(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_002418d0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
