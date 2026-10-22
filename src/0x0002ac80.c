/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA07D314D697CD0FFC2DD5EDA0EEC495DC389F9D37472AD0F5B6D59A41380BDC
 * Entry: 0x0002ac80, Ghidra index: 287, label: FUN_0002ac80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0002ac80(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  int in_ECX;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *local_18;
  undefined1 auStack_14 [4];
  float fStack_10;
  float fStack_c;
  
  iVar1 = in_ECX + -0x40;
  piVar5 = (int *)FUN_000120f0();
  if ((*(int *)(in_ECX + 0x8f4) != 0) &&
     (local_18 = (int *)((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18),
     local_18 != (int *)0x0)) {
    cVar4 = FUN_00026d80(iVar1,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
    if (cVar4 != '\0') {
      FUN_000255d0(param_1,0);
      FUN_0004d970(iVar1,param_1,3,1,1);
      return 1;
    }
    iVar6 = FUN_00055aa0();
    *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) | 2;
    iVar6 = (**(code **)(piVar5[0x6d] + 0x28))();
    fStack_c = *(float *)(iVar6 + 0x20);
    fStack_10 = *(float *)(iVar6 + 0x14);
    local_18 = (int *)-fStack_10;
    *param_1 = -*(float *)(iVar6 + 8);
    param_1[1] = (float)local_18;
    param_1[2] = -fStack_c;
    FUN_0004d970(iVar1,param_1,1,1,1);
    return 1;
  }
  local_18 = piVar5 + 0x6d;
  cVar4 = (**(code **)(piVar5[0x6d] + 0x38))();
  if (cVar4 == '\0') {
    uVar12 = 1;
    uVar11 = 0x41c80000;
    uVar10 = 0;
    puVar9 = auStack_14;
    uVar7 = (**(code **)(piVar5[0x6d] + 0x34))(puVar9,0,0x41c80000,1,0);
    cVar4 = FUN_00018c40(iVar1,param_1,uVar7,puVar9,uVar10,uVar11,uVar12);
    if ((cVar4 == '\0') &&
       ((((*(byte *)(in_ECX + 900) & 2) != 0 ||
         (cVar4 = (**(code **)(*(int *)(in_ECX + -0x28) + 0x3c))
                            (param_1,*(undefined4 *)(in_ECX + 0x37c),
                             *(float *)(in_ECX + 0x380) * 0.017453292,0,0), cVar4 == '\0')) &&
        (cVar4 = (**(code **)(*(int *)(in_ECX + -0x28) + 0x4c))(param_1,0x3f800000,0x40000000),
        cVar4 == '\0')))) {
      pfVar8 = (float *)(**(code **)(*piVar5 + 0x34))(&local_18);
      fVar2 = pfVar8[2];
      fVar3 = pfVar8[1];
      *param_1 = *pfVar8;
      param_1[1] = fVar3;
      param_1[2] = fVar2;
    }
    FUN_0004d970(iVar1,param_1,3,1,1);
    return 1;
  }
  return 1;
}
