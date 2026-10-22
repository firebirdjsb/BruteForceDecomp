/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F39C9F8562ECEBF6EB8CF8A42B5E049E326E89EADA9486F846838BBA6762CE74
 * Entry: 0x002e14b0, Ghidra index: 10370, label: FUN_002e14b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e14b0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *in_ECX;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_18;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  uVar1 = in_ECX[0x49];
  uVar9 = 0;
  if (uVar1 != 0) {
    piVar4 = (int *)(in_ECX[0x4a] + 0x28);
    do {
      if (*piVar4 == 0) break;
      uVar9 = uVar9 + 1;
      piVar4 = piVar4 + 0x1f2;
    } while (uVar9 < uVar1);
  }
  if (uVar9 == uVar1) {
    return 0x80040003;
  }
  iVar10 = uVar9 * 0x7c8;
  puVar5 = (undefined4 *)FUN_002e35c0(&param_2);
  iVar6 = FUN_00345195(*puVar5,in_ECX[0x4a] + iVar10,0);
  if (iVar6 != 0) {
    return 0x80040004;
  }
  FUN_002e3d80();
  puVar7 = (undefined4 *)FUN_000a3d50();
  puVar5 = (undefined4 *)(in_ECX[0x4a] + 0x24 + iVar10);
  *puVar5 = *puVar7;
  puVar5[1] = puVar7[1];
  puVar5[2] = puVar7[2];
  puVar5[3] = puVar7[3];
  uVar3 = FUN_00345df1(1000);
  *(undefined2 *)(in_ECX[0x4a] + 0x26 + iVar10) = uVar3;
  if (((char)in_ECX[0x27] != '\0') && (*(char *)((int)in_ECX + 0xc2) != '\0')) {
    (**(code **)(*in_ECX + 0x3c))(in_ECX[0x4a] + iVar10,1);
  }
  iVar6 = in_ECX[0x4a];
  local_18._2_1_ = 0;
  puVar5 = &local_18;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *piVar2 = iVar6 + iVar10;
  local_18._3_1_ = 0x40;
  FUN_002e3f50();
  FUN_002e0960(&local_18,iVar6 + iVar10);
  return 0;
}
