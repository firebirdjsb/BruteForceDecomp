/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD8C1E9BD305552FEC4D888F45CA68C4A8C78DEE63AF3B14487AE49EC6ECA6B2
 * Entry: 0x0024ae90, Ghidra index: 8237, label: FUN_0024ae90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024ae90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(param_1 + 2);
    FUN_0024a450();
    FUN_0010bc40();
    in_EAX = in_EAX + 0xb;
  }
  return in_EAX;
}
