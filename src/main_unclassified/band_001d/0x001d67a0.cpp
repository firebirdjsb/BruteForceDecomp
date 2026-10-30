/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA18FC02DA3515BCE9306A872900636FD72911C96A9D89F278A8FE19EF86AA72
 * Entry: 0x001d67a0, Ghidra index: 6364, label: FUN_001d67a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d67a0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0x1c;
    puVar2 = param_3 + -7;
    *puVar2 = *(undefined4 *)(param_2 + -0x1c);
    param_3[-6] = *(undefined4 *)(param_2 + -0x18);
    param_3[-5] = *(undefined4 *)(param_2 + -0x14);
    param_3[-4] = *(undefined4 *)(param_2 + -0x10);
    param_3[-3] = *(undefined4 *)(param_2 + -0xc);
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *in_EAX = puVar2;
  return;
}
