/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 153301394D29E3B682D9AE49F8CB24532694115E155BD61BE9ED7AA2303CD8BB
 * Entry: 0x0024b050, Ghidra index: 8242, label: FUN_0024b050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024b050(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x38;
    puVar2 = param_4 + -0xe;
    *puVar2 = *(undefined4 *)(param_3 + -0x38);
    param_4[-0xd] = *(undefined4 *)(param_3 + -0x34);
    param_4[-0xc] = *(undefined4 *)(param_3 + -0x30);
    param_4[-0xb] = *(undefined4 *)(param_3 + -0x2c);
    param_4[-10] = *(undefined4 *)(param_3 + -0x28);
    FUN_0001f4f0(param_3 + -0x24,0,0xffffffff);
    param_4[-2] = *(undefined4 *)(param_3 + -8);
    param_4[-1] = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
