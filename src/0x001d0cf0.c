/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A914F6CF826717A2685995B312D9A957F53ED391FDB6A0DFBDCA05D8516DF5FC
 * Entry: 0x001d0cf0, Ghidra index: 6211, label: FUN_001d0cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0cf0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x128) {
    FUN_001d2580();
  }
  return;
}
