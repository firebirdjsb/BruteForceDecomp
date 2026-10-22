/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6FDC308D939995D98DF8AB93071DA1F1D3DADD9F931FA979BD1F76B25C31836
 * Entry: 0x00333392, Ghidra index: 12408, label: FUN_00333392
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00333392(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,undefined4 *param_6
            )

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  uint local_8;
  
  puVar3 = (undefined4 *)FUN_0033ea0c(0x698,0x2019);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00330c2d(puVar3);
    puVar3[3] = 0;
    puVar3[2] = param_5;
    puVar3[0x1a2] = param_4;
    *puVar3 = FUN_00332b65;
    puVar3[1] = FUN_00333315;
    puVar3[0xd] = param_1;
    iVar4 = FUN_0033ea0c(0x6e0,0x2018);
    puVar3[0x1a5] = iVar4;
    if (iVar4 != 0) {
      iVar4 = FUN_0033ea0c(0x6e0,0x2018);
      puVar3[0x1a3] = iVar4;
      if (iVar4 != 0) {
        local_8 = 0;
        if (*(int *)(in_ECX + 0x538) != 0) {
          param_4 = (int *)(in_ECX + 0x53c);
          do {
            puVar2 = (undefined4 *)*param_4;
            iVar4 = puVar3[0x1a5];
            iVar5 = local_8 * 8;
            local_8 = local_8 + 1;
            *(undefined4 *)(iVar4 + 8 + iVar5) = *puVar2;
            *(undefined4 *)(iVar4 + 0xc + iVar5) = puVar2[1];
            puVar2 = (undefined4 *)*param_4;
            iVar4 = puVar3[0x1a3];
            param_4 = param_4 + 1;
            *(undefined4 *)(iVar4 + 8 + iVar5) = *puVar2;
            *(undefined4 *)(iVar4 + 0xc + iVar5) = puVar2[1];
          } while (local_8 < *(uint *)(in_ECX + 0x538));
        }
        puVar2 = (undefined4 *)puVar3[0x1a5];
        *puVar2 = *(undefined4 *)(in_ECX + 0x18);
        puVar2[1] = *(undefined4 *)(in_ECX + 0x1c);
        puVar2 = (undefined4 *)puVar3[0x1a3];
        *puVar2 = *(undefined4 *)(in_ECX + 0x18);
        puVar2[1] = *(undefined4 *)(in_ECX + 0x1c);
        *(undefined4 *)(puVar3[0x1a5] + 0x28) = *(undefined4 *)(in_ECX + 4);
        *(undefined4 *)(puVar3[0x1a5] + 0x2c) = *(undefined4 *)(in_ECX + 8);
        *(undefined4 *)(puVar3[0x1a3] + 0x28) = *(undefined4 *)(in_ECX + 4);
        *(undefined4 *)(puVar3[0x1a3] + 0x2c) = *(undefined4 *)(in_ECX + 8);
        if (param_3 != 0) {
          iVar4 = 0x34;
          param_4 = (int *)param_3;
          do {
            puVar2 = (undefined4 *)(param_2 + -0x34 + iVar4);
            *(undefined4 *)(iVar4 + puVar3[0x1a5]) = *puVar2;
            *(undefined4 *)(iVar4 + puVar3[0x1a3]) = *puVar2;
            iVar4 = iVar4 + 4;
            param_4 = (int *)((int)param_4 + -1);
          } while (param_4 != (int *)0x0);
        }
        *(int *)(puVar3[0x1a5] + 0x30) = param_3;
        *(int *)(puVar3[0x1a3] + 0x30) = param_3;
        if (param_1 != 0) {
          uVar6 = FUN_00331457(2,param_5,puVar3 + 0xe);
          puVar3[0x14] = uVar6;
          *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
               *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xffdfffff | 0x100000;
        }
        puVar3[4] = 2;
        FUN_00332b65(puVar3);
        *param_6 = puVar3;
        return 0;
      }
    }
  }
  puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
  *puVar1 = *puVar1 | 8;
  *param_6 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[0x12] != 0) {
      FUN_00330c53(puVar3 + 0xe);
    }
    FUN_0033ea20(puVar3);
  }
  return 0x80150008;
}
