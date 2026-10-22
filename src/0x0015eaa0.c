/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE7CB81A3E39BED424053B91E70D066BB61ECEB722C943241F2672DC65BC4464
 * Entry: 0x0015eaa0, Ghidra index: 4558, label: FUN_0015eaa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015eaa0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(param_1 + 0x18);
    in_EAX = in_EAX + 0x1c;
  }
  return;
}
