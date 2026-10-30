/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDFD67C7526707A17748505A6D3BBDBD9E17835E3F255B92CA9A3BF191CF4770
 * Entry: 0x0027a870, Ghidra index: 8955, label: FUN_0027a870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027a870(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_2 + 8);
    puVar3 = param_3 + 2;
    do {
      puVar1 = (undefined4 *)(param_2 + -0x10);
      param_2 = param_2 + -0x10;
      param_3 = param_3 + -4;
      *param_3 = *puVar1;
      puVar3[-5] = puVar2[-5];
      puVar3[-4] = puVar2[-4];
      puVar3[-3] = puVar2[-3];
      puVar2 = puVar2 + -4;
      puVar3 = puVar3 + -4;
    } while (param_2 != param_1);
    *in_EAX = *param_3;
    return;
  }
  *in_EAX = *param_3;
  return;
}
