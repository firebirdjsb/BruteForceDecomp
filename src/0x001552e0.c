/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2023B73AD4EA59FE3ADD4B5EE9B09A106408538EE1B13B376E46283DFB309036
 * Entry: 0x001552e0, Ghidra index: 4461, label: FUN_001552e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001552e0(char param_1,int *param_2,undefined4 *param_3)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  int in_ECX;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*param_2 == -0x1fd00968) {
    if (param_1 == '\0') {
      uVar2 = *param_3;
      *(undefined4 *)(in_ECX + 4) = uVar2;
    }
    else {
      uVar2 = *(undefined4 *)(in_ECX + 4);
      *param_3 = uVar2;
    }
    uVar1 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  if (((char)uVar1 == '\0') && (*param_2 == -0x65a9610)) {
    uVar3 = (undefined3)(uVar1 >> 8);
    if (param_1 != '\0') {
      *param_3 = *(undefined4 *)(in_ECX + 0x40);
      return CONCAT31(uVar3,1);
    }
    *(undefined4 *)(in_ECX + 0x40) = *param_3;
    uVar1 = CONCAT31(uVar3,1);
  }
  return uVar1;
}
