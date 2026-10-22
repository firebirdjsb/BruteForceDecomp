/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E98E1A3D16AA7B212A3C552AF97DB67B54DA17D516A34338C10072AADAEF5E3D
 * Entry: 0x003554bb, Ghidra index: 13120, label: FUN_003554bb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_003558e8(int param_1);
undefined4 FUN_003554bb(uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int local_14;
  int local_c;
  int local_8;
  
  iVar5 = param_2;
  iVar4 = param_1;
  iVar7 = *(int *)(param_2 + 0x14);
  if (iVar7 == 0) {
    local_8 = *(int *)(param_1 + 0x44);
    uVar2 = *(undefined2 *)(param_1 + 0x48);
    local_14 = param_1 + 0x4c;
  }
  else {
    local_8 = *(int *)(iVar7 + 4);
    uVar2 = *(undefined2 *)(iVar7 + 2);
    local_14 = 0;
  }
  iVar7 = FUN_00348618(local_8);
  if (iVar7 != 0) {
    return 0x80072751;
  }
  uVar10 = *(uint *)(iVar5 + 0x10);
  uVar9 = *(uint *)(param_1 + 0xc) >> 2 & 1;
  local_c = 0;
  param_2 = 0;
  param_1 = uVar10;
  if (uVar9 != 0) {
    if (uVar10 < 2) {
      return 0x80072738;
    }
    FUN_00345408(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),0,(int)&param_2 + 2,2);
    param_1 = param_2 >> 0x10;
    if (uVar10 < param_1 + 2) {
      return 0x80072738;
    }
    param_2 = (uVar10 - param_1) - 2;
    local_c = 2;
  }
  if (0x518 < param_2 + param_1) {
    return 0x80072738;
  }
  if ((local_8 == 0) || ((char)local_8 != '\0')) {
    if (local_8 == -1) {
      uVar10 = param_3 | 6;
    }
    else {
      uVar10 = param_3 | 3;
      if ((*(byte *)(iVar4 + 0xf) & 2) != 0) {
        param_3 = param_3 | 0x10000003;
        uVar10 = param_3;
      }
    }
  }
  else {
    uVar10 = param_3 | (uVar9 != 0) + 6;
  }
  param_3 = uVar10;
  if (((byte)param_3 & 7) < 6) {
    if (uVar9 != 0) {
      param_1 = *(uint *)(iVar5 + 0x10);
      local_c = 0;
      param_2 = 0;
    }
  }
  else {
    iVar7 = FUN_0034c8f1(*(undefined2 *)(iVar4 + 0x4a),uVar2);
    param_3 = param_3 | iVar7 << 0x10;
  }
  iVar7 = FUN_0034cb5a(0x6e54454e,param_3,param_1,param_2,0x28,FUN_003558e8);
  if (iVar7 != 0) {
    *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar5 + 0x10);
    *(int *)(iVar7 + 0x1c) = iVar4;
    *(undefined4 *)(iVar7 + 0x24) = 2;
    FUN_0034c865(*(undefined2 *)(iVar4 + 0x4a),uVar2);
    if (param_1 != 0) {
      uVar10 = param_1;
      uVar8 = FUN_0034c932(param_1);
      FUN_00345408(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),local_c,uVar8,uVar10);
    }
    if (param_2 != 0) {
      uVar10 = param_2;
      uVar8 = FUN_0034c96b(param_2);
      FUN_00345408(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),param_1 + local_c,uVar8,
                   uVar10);
    }
    uVar6 = KeRaiseIrqlToDpcLevel();
    param_3 = CONCAT31(param_3._1_3_,uVar6);
    *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) + *(int *)(iVar5 + 0x10);
    puVar3 = *(undefined4 **)(iVar4 + 0x38);
    piVar1 = (int *)(iVar7 + 0x14);
    *piVar1 = iVar4 + 0x34;
    *(undefined4 **)(iVar7 + 0x18) = puVar3;
    *puVar3 = piVar1;
    *(int **)(iVar4 + 0x38) = piVar1;
    FUN_0034a7ce(iVar7,local_8,0x11,local_14);
    KfLowerIrql();
    return 0;
  }
  return 0x80072747;
}
