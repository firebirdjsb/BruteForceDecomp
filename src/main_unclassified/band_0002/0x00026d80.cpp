/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CE788B7938663306379C5713709F0A2C38306DC60BE19223D95AFF6FF654232
 * Entry: 0x00026d80, Ghidra index: 269, label: FUN_00026d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

extern void FUN_000233d0(void);
extern int FUN_00025870(float param_1);
extern undefined4 FUN_00023420(void);
extern undefined4 FUN_00026a50(undefined4 param_1,int param_2,int param_3);
extern undefined4 FUN_00026820(int param_1);
extern undefined4 FUN_00026940(int param_1,int param_2);
extern uint FUN_00026520(int param_1,int param_2,int param_3);
extern uint FUN_000267b0(uint param_1);
extern undefined4 FUN_000410a0(float param_1);
extern void FUN_00012600(uint32_t in_EAX, int32_t in_ECX);
extern void FUN_0001fdd0(void);
extern void FUN_0004e8f0(void);

undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  int *piVar10;
  
  if (*(char *)(param_2 + 0x20) != '\0') goto LAB_000271c9;
  piVar6 = (int *)(**(code **)(*param_1 + 0x24))();
  iVar7 = (**(code **)(*piVar6 + 0xc))();
  fVar1 = *(float *)(iVar7 + 0x2c);
  fVar2 = *(float *)(iVar7 + 0x24);
  pfVar8 = (float *)FUN_000233d0();
  fVar3 = pfVar8[2];
  fVar4 = pfVar8[1];
  *param_3 = *pfVar8;
  param_3[1] = fVar4;
  param_3[2] = fVar3;
  piVar10 = *(int **)(*(int *)(param_2 + 4) + 0x14 + *(int *)(param_2 + 0x10) * 0x18);
  if (piVar10 != (int *)0x0) {
    if ((piVar10 == (int *)param_1[0x277]) && (0.6 <= param_5)) {
      param_5 = 0.6;
    }
    if ((0.0 < (float)piVar10[8]) && (0.5 < param_5)) {
      param_5 = (float)piVar10[8];
    }
  }
  if (((param_1[0xf1] & 0x400U) != 0) && (1.0 <= param_5)) {
    param_5 = 1.0;
  }
  fVar1 = fVar1 - param_3[2];
  fVar2 = fVar2 - *param_3;
  cVar5 = fVar2 * fVar2 + fVar1 * fVar1 + 0.0 < param_5 * param_5;
  if (1.0 <= param_5) {
LAB_00026f94:
    if (cVar5 == '\0') {
      return 1;
    }
  }
  else if (!(bool)cVar5) {
    (**(code **)(*piVar6 + 0x10))();
    cVar5 = FUN_00025870(param_5);
    goto LAB_00026f94;
  }
  if (((piVar10 == (int *)0x0) ||
      ((iVar7 = (**(code **)(*piVar10 + 0x3c))(), iVar7 != 6 && ((iVar7 < 0x1a || (0x1b < iVar7)))))
      ) && (0.7 < param_5)) {
    uVar9 = FUN_00023420();
    cVar5 = FUN_00026a50(param_1,piVar10,uVar9);
    if (cVar5 != '\0') {
      param_1[0x277] = (int)piVar10;
      return 1;
    }
  }
  param_1[0x277] = 0;
  if (piVar10 != (int *)0x0) {
    uVar9 = (**(code **)(*piVar10 + 0x3c))();
    switch(uVar9) {
    case 6:
      FUN_00026820(param_1,piVar10);
      break;
    default:
      param_1[0xf1] = param_1[0xf1] & 0xffffefff;
      break;
    case 0xb:
    case 0xc:
      FUN_00026940(param_1,piVar10);
      break;
    case 0x1a:
      FUN_00026520(param_1,param_2,piVar10);
      break;
    case 0x1b:
      FUN_000267b0(param_1,piVar10);
    }
  }
  iVar7 = *(int *)(param_2 + 0x10) + 1;
  if (*(int *)(param_2 + 0x10) != iVar7) {
    *(int *)(param_2 + 0x10) = iVar7;
    *(undefined4 *)(param_2 + 0x18) = 0x7f7fffff;
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  if (((-1 < (int)*(uint *)(param_2 + 0x10)) && (*(int *)(param_2 + 4) != 0)) &&
     (*(uint *)(param_2 + 0x10) < (uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x18))) {
    pfVar8 = (float *)FUN_000233d0();
    fVar1 = pfVar8[2];
    fVar2 = pfVar8[1];
    *param_3 = *pfVar8;
    param_3[1] = fVar2;
    param_3[2] = fVar1;
    piVar10 = *(int **)(*(int *)(param_2 + 4) + 0x14 + *(int *)(param_2 + 0x10) * 0x18);
    if (((piVar10 != (int *)0x0) && ((*(byte *)(piVar10 + 10) & 0x10) == 0)) &&
       ((iVar7 = (**(code **)(*piVar10 + 0x3c))(), iVar7 == 0 &&
        ((iVar7 = FUN_00023420(), iVar7 != 0 && ((*(byte *)(iVar7 + 0x28) & 0x10) == 0)))))) {
      (**(code **)(*piVar6 + 0xc))();
      cVar5 = FUN_000410a0(0x3f4ccccd);
      if (cVar5 == '\0') {
        FUN_00012600();
        *(int **)(param_2 + 0x24) = piVar10;
      }
    }
    return 1;
  }
  if (piVar10 != (int *)0x0) {
    piVar10[10] = piVar10[10] & 0xfffffffd;
  }
  if ((*(int *)(param_2 + 0x14) == 0) && (piVar10 != (int *)0x0)) {
    iVar7 = (**(code **)(piVar10[3] + 4))();
    if ((iVar7 != 0) && (iVar7 = (**(code **)(*piVar10 + 0x3c))(), iVar7 != 10)) {
      piVar10 = (int *)(**(code **)(piVar10[3] + 4))();
      (**(code **)(*piVar10 + 8))();
      FUN_0001fdd0();
      FUN_000198e0(0x41a00000);
    }
  }
LAB_000271c9:
  FUN_0004e8f0();
  return 0;
}
