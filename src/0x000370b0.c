/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D2F5F047377590BF5F3B519B804FFCB8A1285B1C8C4053B7589BE541C6A8352
 * Entry: 0x000370b0, Ghidra index: 365, label: FUN_000370b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000370b0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  uint local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float fStack_c;
  
  local_30 = 1;
  piVar5 = (int *)FUN_000120f0();
  if (in_ECX[0x12a] != 1) {
    return 1;
  }
  piVar6 = (int *)FUN_00049ca0();
  iVar7 = FUN_00049c60();
  if (iVar7 == 0) {
    return 0;
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  bVar3 = false;
  if (((in_ECX[0x23d] == 0) || ((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18 == 0)) ||
     (cVar4 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,&local_20,0,0x40000000), cVar4 == '\0')) {
    bVar3 = true;
  }
  (**(code **)in_ECX[0x1c7])(in_ECX[0x100]);
  if ((((*(byte *)(in_ECX + 0x1c9) & 1) == 0) ||
      ((float)in_ECX[0x1c8] < 0.0 != ((float)in_ECX[0x1c8] == 0.0))) || (bVar3)) {
    local_30 = (**(code **)(*in_ECX + 0x5d8))();
    FUN_000124f0(0x40400000);
    if (local_30 != 1) {
      return local_30;
    }
  }
  FUN_000255d0(param_1,0);
  FUN_0004d970(in_ECX + -0x10,param_1,4,1,1);
  iVar7 = (**(code **)(*piVar6 + 0x40))();
  iVar8 = (**(code **)(*piVar5 + 0x40))();
  fStack_c = *(float *)(iVar8 + 0x2c) - *(float *)(iVar7 + 0x2c);
  fVar1 = *(float *)(iVar8 + 0x28) - *(float *)(iVar7 + 0x28);
  fVar2 = *(float *)(iVar8 + 0x24) - *(float *)(iVar7 + 0x24);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fStack_c * fStack_c;
  if (fVar1 < 25.0 == (fVar1 == 25.0)) {
    if (fVar1 < 400.0 != (fVar1 == 400.0)) {
      FUN_00140a60(*(undefined4 *)(piVar5[2] + 0xbe8),piVar5,0xf937e583,0);
    }
    return local_30;
  }
  if (((*(byte *)(piVar5[0x169] + 0x1c) & 1) == 0) || (*(int *)(piVar5[0x169] + 0x18) == 0)) {
    (**(code **)(*piVar5 + 0x15c))(8,0);
    cVar4 = FUN_00023c80();
    local_30 = (uint)(cVar4 != '\0');
  }
  in_ECX[0x12a] = in_ECX[0x12a] + 1;
  return local_30;
}
