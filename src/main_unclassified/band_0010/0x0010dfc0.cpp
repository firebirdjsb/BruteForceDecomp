/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0BFA3D311EBD70F6B5B5B35AC5D1E1061E2ACE243ACEBD27937E3D78ABFD60D
 * Entry: 0x0010dfc0, Ghidra index: 3508, label: FUN_0010dfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010dfc0(int param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int unaff_EBX;
  int *piVar7;
  int local_c;
  undefined4 local_8;
  int *local_4;
  
  FUN_0010ddf0();
  piVar7 = (int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x14) = local_8;
  *(int *)(param_1 + 0x10) = local_c;
  local_4 = piVar7;
  (**(code **)(*(int *)(param_1 + 4) + 0x1c))();
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  (**(code **)(*piVar7 + 0x2c))();
  *(int *)(param_1 + 0xc) = unaff_EBX;
  (**(code **)(*piVar7 + 0x30))();
  iVar3 = FUN_002ea01d(0x130);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_00109820();
  }
  piVar7[9] = 0xb75a0fb;
  (**(code **)(*piVar7 + 0x2c))();
  FUN_001098a0();
  iVar3 = FUN_001098f0();
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 8;
  }
  iVar3 = *(int *)(unaff_EBX + 0x29);
  *(int *)((int)piVar7 + 0x29) = iVar3;
  param_2 = (undefined4 *)iVar3;
  FUN_000ee5c0(&param_2,0x3f000000);
  piVar7[0xf] = (int)param_2;
  piVar7[0xe] = iVar3;
  (**(code **)(*piVar7 + 0x34))();
  *(undefined4 *)((int)piVar7 + 0x2d) = *(undefined4 *)(unaff_EBX + 0x2d);
  (**(code **)(*piVar7 + 0x34))();
  piVar7[5] = (int)((float)param_3 * *(float *)(unaff_EBX + 0x78));
  (**(code **)(*piVar7 + 0x1c))();
  piVar7[6] = *(int *)(unaff_EBX + 0x78);
  (**(code **)(*piVar7 + 0x1c))();
  *(undefined4 *)((int)piVar7 + 0x2d) = *(undefined4 *)(unaff_EBX + 0x2d);
  (**(code **)(*piVar7 + 0x34))();
  iVar3 = *(int *)(unaff_EBX + 0x29);
  *(int *)((int)piVar7 + 0x29) = iVar3;
  param_2 = (undefined4 *)iVar3;
  FUN_000ee5c0(&param_2,0x3f000000);
  piVar7[0xf] = (int)param_2;
  piVar7[0xe] = iVar3;
  (**(code **)(*piVar7 + 0x34))();
  *(undefined4 *)((int)piVar7 + 0x31) = *(undefined4 *)(unaff_EBX + 0x31);
  (**(code **)(*piVar7 + 0x34))();
  local_8 = 2;
  iVar3 = FUN_001098f0();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x88) = 2;
    *(undefined4 *)(iVar3 + 0x8c) = 2;
    FUN_0010ab60();
  }
  iVar3 = FUN_001098f0();
  if (iVar3 != 0) {
    FUN_0010ad40(iVar3);
  }
  param_2 = (undefined4 *)0x0;
  if (0 < param_3) {
    do {
      iVar3 = (int)param_2;
      iVar4 = FUN_002ea01d(0x88);
      if (iVar4 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_001032e0();
      }
      piVar5[9] = 0x71be28c;
      (**(code **)(*piVar5 + 0x2c))();
      if (param_3 == 1) {
        iVar3 = unaff_EBX + 0x9c;
LAB_0010e1e2:
        piVar6 = (int *)FUN_000a7770(iVar3);
        piVar2 = (int *)piVar5[0x1f];
        if (piVar2 != piVar6) {
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            piVar5[0x1f] = 0;
          }
          piVar5[0x1f] = (int)piVar6;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 4))(piVar6);
          }
        }
      }
      else {
        if (iVar3 == 0) {
          iVar3 = unaff_EBX + 0xa4;
          goto LAB_0010e1e2;
        }
        if (iVar3 != param_3 + -1) {
          iVar3 = unaff_EBX + 0xa0;
          goto LAB_0010e1e2;
        }
        piVar6 = (int *)FUN_000a7770(unaff_EBX + 0xa4);
        piVar2 = (int *)piVar5[0x1f];
        if (piVar2 != piVar6) {
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            piVar5[0x1f] = 0;
          }
          piVar5[0x1f] = (int)piVar6;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 4))(piVar6);
          }
        }
        *(byte *)(piVar5 + 0x1c) = *(byte *)(piVar5 + 0x1c) | 4;
      }
      *(undefined4 *)((int)piVar5 + 0x2d) = *(undefined4 *)(unaff_EBX + 0x92);
      (**(code **)(*piVar5 + 0x34))();
      iVar3 = *(int *)(unaff_EBX + 0x96);
      *(int *)((int)piVar5 + 0x29) = iVar3;
      local_c = iVar3;
      FUN_000ee5c0(&local_c,0x3f000000);
      piVar5[0xf] = local_c;
      piVar5[0xe] = iVar3;
      (**(code **)(*piVar5 + 0x34))();
      fVar1 = *(float *)(unaff_EBX + 0x78);
      piVar5[4] = 0;
      piVar5[3] = (int)((float)(int)param_2 * fVar1);
      (**(code **)(*piVar5 + 0x1c))();
      piVar5[5] = *(int *)(unaff_EBX + 0x78);
      (**(code **)(*piVar5 + 0x1c))();
      piVar5[6] = *(int *)(unaff_EBX + 0x78);
      (**(code **)(*piVar5 + 0x1c))();
      iVar3 = *(int *)(unaff_EBX + 0x78);
      piVar5[0x21] = *(int *)(unaff_EBX + 0x78);
      piVar5[0x20] = iVar3;
      piVar5[0x18] = -0x2d1d86a;
      FUN_000ff9e0(piVar5);
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while ((int)param_2 < param_3);
  }
  FUN_000ff9e0(piVar7);
  FUN_0010de90(unaff_EBX);
  return 1;
}
