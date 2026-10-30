/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC92A864564658579D923CB4B4BDE8A287FF9C3F39837ABA7C5AAE39AFADB791
 * Entry: 0x001d8ad0, Ghidra index: 6439, label: FUN_001d8ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d8ad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xf) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(param_1 + 3);
    *(undefined1 *)((int)in_EAX + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
    in_EAX[4] = param_1[4];
    in_EAX[5] = param_1[5];
    in_EAX[6] = param_1[6];
    in_EAX[7] = param_1[7];
    in_EAX[8] = param_1[8];
    in_EAX[9] = param_1[9];
    in_EAX[10] = param_1[10];
    in_EAX[0xb] = param_1[0xb];
    in_EAX[0xc] = param_1[0xc];
    in_EAX[0xd] = param_1[0xd];
    *(undefined1 *)(in_EAX + 0xe) = *(undefined1 *)(param_1 + 0xe);
    in_EAX = in_EAX + 0xf;
  }
  return;
}
