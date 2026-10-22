/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7341C37FBC0843B6607972E736B44786360A68ADA56C1216B7D5BEE5063070DE
 * Entry: 0x0002c400, Ghidra index: 294, label: FUN_0002c400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0002c400(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  
  if ((*(int *)(param_1 + 0x14) == 4) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x10), param_1 = 0, piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 0x40))();
    uVar2 = *(undefined4 *)(iVar4 + 0x2c);
    uVar3 = *(undefined4 *)(iVar4 + 0x28);
    param_1 = *(uint *)(iVar4 + 0x24);
    *(uint *)(in_ECX + 0x570) = param_1;
    *(undefined4 *)(in_ECX + 0x574) = uVar3;
    *(undefined4 *)(in_ECX + 0x578) = uVar2;
  }
  return param_1 & 0xffffff00;
}
