/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6BE5DF88656DFB817A1A796EFC55C039DC72E862B5745DD4938E4F9713666F3
 * Entry: 0x00042b10, Ghidra index: 513, label: FUN_00042b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00038320(void);

undefined4 * FUN_00042b10(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    FUN_00038320();
    param_2 = param_2 + 0x18;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return param_1;
}
