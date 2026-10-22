/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C65712AB8E0323CFFEFDA37DAF7B2D3D24D883EE61021D412563FB7BB919F788
 * Entry: 0x0023ec10, Ghidra index: 7981, label: FUN_0023ec10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023ec10(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00241780();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
