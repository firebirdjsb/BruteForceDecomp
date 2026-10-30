/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F87F51E2D48A4ED131A3A9720FCFA447F3489DAA44628F7A1E14A99CF669C73C
 * Entry: 0x0024ac30, Ghidra index: 8230, label: FUN_0024ac30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024ac30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *in_EAX = *param_1;
    FUN_00249ff0(param_1 + 1);
    FUN_0024a170(param_1 + 5);
    in_EAX = in_EAX + 9;
  }
  return in_EAX;
}
