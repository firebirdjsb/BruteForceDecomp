/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BA199481A8E4A037B4CB7CC63449C7D541F0A0FE6FFA15538B18FA66F5522EB
 * Entry: 0x001d6ab0, Ghidra index: 6371, label: FUN_001d6ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6ab0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(param_1 + 3);
    *(undefined1 *)((int)in_EAX + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
    in_EAX[4] = param_1[4];
    in_EAX[5] = param_1[5];
    in_EAX = in_EAX + 6;
  }
  return;
}
