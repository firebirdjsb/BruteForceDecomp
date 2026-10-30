/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05AE513C8163D3065CE2F0FCF79C6B269BE041E9D49F7F55695528CC619BB222
 * Entry: 0x00050d40, Ghidra index: 724, label: FUN_00050d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0010bc40(void);

undefined4 *
FUN_00050d40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -6;
    param_4 = param_4 + -6;
    if (param_4 != param_3) {
      *param_4 = *param_3;
      FUN_0010bc40();
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
