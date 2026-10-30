/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0564EAEC10A5CA7C22D1298217845234AFF889AD6902640559E5A299369BBB37
 * Entry: 0x0024ad20, Ghidra index: 8233, label: FUN_0024ad20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024ad20(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0xc;
    puVar2 = param_3 + -3;
    *puVar2 = *(undefined4 *)(param_2 + -0xc);
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *in_EAX = puVar2;
  return;
}
