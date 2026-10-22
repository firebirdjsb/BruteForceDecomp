/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03F3115618EFF920C2AB201CE069D4B44CEB847E2E29BADFB727079B1C1856BD
 * Entry: 0x0024b0d0, Ghidra index: 8243, label: FUN_0024b0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024b0d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(param_1 + 2);
    FUN_00137500();
    FUN_00249bc0();
    in_EAX = in_EAX + 0xb;
  }
  return in_EAX;
}
