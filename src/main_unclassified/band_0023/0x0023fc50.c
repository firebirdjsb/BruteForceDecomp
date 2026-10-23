/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5764DCC37CC98B7542ABA53382F2078FD13FD30E0DAE47B30C6367C56009B0D7
 * Entry: 0x0023fc50, Ghidra index: 7984, label: FUN_0023fc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023fc50(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_002440e0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
