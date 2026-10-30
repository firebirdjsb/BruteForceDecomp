/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84C53621011CB8E974D87E0188D7E2172AE72666B5784ADD567F18E72E4C0D9F
 * Entry: 0x00053cf0, Ghidra index: 778, label: FUN_00053cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00053cf0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)(param_2 + 8);
    puVar4 = (undefined4 *)(param_3 + 0xc);
    do {
      *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
      uVar1 = puVar3[-4];
      param_2 = param_2 + -0x14;
      param_3 = param_3 + -0x14;
      uVar2 = puVar3[-5];
      puVar4[-7] = puVar3[-6];
      puVar4[-6] = uVar2;
      puVar4[-5] = uVar1;
      puVar4[-4] = puVar3[-3];
      puVar3 = puVar3 + -5;
      puVar4 = puVar4 + -5;
    } while (param_2 != param_1);
    *in_EAX = param_3;
    return;
  }
  *in_EAX = param_3;
  return;
}
