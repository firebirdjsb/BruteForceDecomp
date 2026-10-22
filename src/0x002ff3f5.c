/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D5DC31C6BA01E32D592A1BB64D5EDFFD020E930BEE08C01175B6A8661EC4FD5
 * Entry: 0x002ff3f5, Ghidra index: 11062, label: IsBadReadPtr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 XAPILIB__IsBadReadPtr(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    if ((param_1 == 0) || (uVar1 = (param_1 - 1) + param_2, uVar1 < param_1)) {
      return 1;
    }
    for (param_1 = param_1 & 0xfffff000; param_1 != (uVar1 & 0xfffff000); param_1 = param_1 + 0x1000
        ) {
    }
  }
  return 0;
}
