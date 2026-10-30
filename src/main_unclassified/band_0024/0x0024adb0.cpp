/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFE756E175E2F7ED2BC164C1FD686B3535158D5D18F5961F1DDEF0485BF4875A
 * Entry: 0x0024adb0, Ghidra index: 8235, label: FUN_0024adb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024adb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    *in_EAX = *param_1;
    FUN_0001f4f0(param_1 + 1,0,0xffffffff);
    *(undefined1 *)(in_EAX + 8) = *(undefined1 *)(param_1 + 8);
    in_EAX[9] = param_1[9];
    in_EAX[10] = param_1[10];
    *(undefined1 *)(in_EAX + 0xb) = *(undefined1 *)(param_1 + 0xb);
    FUN_0024a300();
    in_EAX = in_EAX + 0x10;
  }
  return in_EAX;
}
