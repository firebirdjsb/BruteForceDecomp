/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88BE55736732363DFE2627C98AD20B2B78D450FB9F8196EFFB1A6A7C8DC384D9
 * Entry: 0x00077c80, Ghidra index: 1409, label: FUN_00077c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00077c80(byte param_1)

{
  FUN_00077cc0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
