/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ADCA5D5B6E6F4C63F25391FED35D400E6DE4E775487BE0430193BDBD8D5ADE8
 * Entry: 0x001d6a30, Ghidra index: 6370, label: FUN_001d6a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6a30(int param_1,int param_2,int param_3)

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
      *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_2 + -0x18);
      uVar1 = puVar3[-5];
      param_2 = param_2 + -0x18;
      param_3 = param_3 + -0x18;
      uVar2 = puVar3[-6];
      puVar4[-8] = puVar3[-7];
      puVar4[-7] = uVar2;
      puVar4[-6] = uVar1;
      puVar4[-5] = puVar3[-4];
      puVar4[-4] = puVar3[-3];
      puVar3 = puVar3 + -6;
      puVar4 = puVar4 + -6;
    } while (param_2 != param_1);
    *in_EAX = param_3;
    return;
  }
  *in_EAX = param_3;
  return;
}
