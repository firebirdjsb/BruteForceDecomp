/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CAAE84D3F853C4D18A054064BF89A35D0DE1316EDFF0E2D7C2D76ED5BB714DB
 * Entry: 0x0020d9c0, Ghidra index: 7387, label: FUN_0020d9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0020d9c0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    if (in_EAX != param_1) {
      if (*(int *)(param_1 + 4) != *(int *)(in_EAX + 4)) {
        FUN_0008f6a0(*(int *)(param_1 + 4));
      }
      *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(param_1 + 0x20);
    }
    in_EAX = in_EAX + 0x24;
  }
  return in_EAX;
}
