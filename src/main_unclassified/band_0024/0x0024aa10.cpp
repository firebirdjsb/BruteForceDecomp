/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88A35E6C1D6698CFA71C30E3DD9B6CEEF531A073B7F69E081F7732F4EDDE3AB0
 * Entry: 0x0024aa10, Ghidra index: 8223, label: FUN_0024aa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024aa10(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    *in_EAX = *param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0x10;
    puVar2 = param_3 + -4;
    *puVar2 = *(undefined4 *)(param_2 + -0x10);
    param_3[-3] = *(undefined4 *)(param_2 + -0xc);
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *in_EAX = *puVar2;
  return;
}
