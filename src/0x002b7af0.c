/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B84E785A0160AB3D0E5CAF5A465D6B1FA4DC4C25A72C23A574D6FEED4C3E659E
 * Entry: 0x002b7af0, Ghidra index: 9853, label: FUN_002b7af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b7af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x60) < 0x100) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x60) * 0x20 + 100 + in_ECX);
    puVar1[4] = param_1;
    puVar1[6] = param_3;
    puVar1[5] = param_2;
    uVar2 = param_5[1];
    uVar3 = param_5[2];
    *puVar1 = *param_5;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[7] = param_4;
    FUN_002b8ea0(puVar1,param_4);
    *(undefined4 *)(in_ECX + 0xc) = 1;
  }
  return;
}
