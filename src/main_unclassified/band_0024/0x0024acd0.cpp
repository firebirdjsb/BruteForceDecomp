/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E249BC7BEA1B8A5F54C9415835CF1E2902D8ECA5930D3D726E226F24AAEBA0C
 * Entry: 0x0024acd0, Ghidra index: 8232, label: FUN_0024acd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024acd0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    iVar2 = param_3 + -0x50;
    puVar1 = param_4 + -0x14;
    *puVar1 = *(undefined4 *)(param_3 + -0x50);
    param_4[-0x13] = *(undefined4 *)(param_3 + -0x4c);
    FUN_00235c70();
    param_4 = puVar1;
    param_3 = iVar2;
  } while (iVar2 != param_2);
  *param_1 = puVar1;
  return;
}
