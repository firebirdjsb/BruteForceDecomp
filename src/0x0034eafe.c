/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16E103487C4475AE594E13B94E691B508116AC354FF470FCCFEA427DC9E5AA1D
 * Entry: 0x0034eafe, Ghidra index: 13026, label: FUN_0034eafe
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034eafe(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  iVar2 = *piVar1;
  piVar1[2] = piVar1[2] & 0xfbf4092cU | 0x924;
  FUN_00347fe3(piVar1,*(undefined4 *)(*(int *)(in_ECX + 0xae8) + 4),0);
  *(undefined2 *)(iVar2 + 0x20) = 0x5304;
  *(undefined2 *)(iVar2 + 0x22) = 0x46;
  puVar4 = (undefined4 *)(param_2 + 0x58);
  puVar5 = (undefined4 *)(iVar2 + 0x24);
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)(iVar2 + 0x3c) = 0;
  *(undefined2 *)(iVar2 + 0x38) = 0x5804;
  *(undefined2 *)(iVar2 + 0x3a) = 0x2e;
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 8);
  *(int *)(iVar2 + 0x50) = (param_2 - *(int *)(param_1 + 0x4c)) / 0xac;
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(*(int *)(in_ECX + 0xae8) + 0xd8);
  *(undefined2 *)(iVar2 + 0x58) = *(undefined2 *)(*(int *)(in_ECX + 0xae8) + 0xdc);
  *(undefined2 *)(iVar2 + 0x3e) = 2;
  FUN_0034c461(param_2 + 0x20,0x10,(undefined2 *)(iVar2 + 0x38),0x22,iVar2 + 0x66,0,iVar2 + 0x5a,0xc
              );
  piVar1[5] = 1;
  FUN_00348e95(piVar1,*(undefined4 *)(in_ECX + 0xae8),0);
  FUN_0034e8a9(param_1,param_2);
  return;
}
