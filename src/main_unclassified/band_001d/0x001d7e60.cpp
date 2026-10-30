/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7ACC2E4E98604BD106C24E4248B84F6B4D06E0B95C25BE24A9D31F28FE804987
 * Entry: 0x001d7e60, Ghidra index: 6413, label: FUN_001d7e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d7e60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x11) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(param_1 + 3);
    FUN_00137500();
    in_EAX[8] = param_1[8];
    FUN_0010bc40();
    FUN_0010bc40();
    in_EAX = in_EAX + 0x11;
  }
  return in_EAX;
}
