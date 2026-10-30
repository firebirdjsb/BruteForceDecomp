/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A1CBB15B94D5C289E4BD68CB62F53D328349A684DA40041BC22E8A5782B197B
 * Entry: 0x001d64e0, Ghidra index: 6355, label: FUN_001d64e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d64e0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    *in_EAX = *param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0x18;
    puVar2 = param_3 + -6;
    *puVar2 = *(undefined4 *)(param_2 + -0x18);
    param_3[-5] = *(undefined4 *)(param_2 + -0x14);
    param_3[-4] = *(undefined4 *)(param_2 + -0x10);
    param_3[-3] = *(undefined4 *)(param_2 + -0xc);
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *in_EAX = *puVar2;
  return;
}
