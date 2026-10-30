/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 006AEA2C933C7AF858636126717F4AE4C16D0C92FFCD53D23CC950C7A7A39580
 * Entry: 0x00045fa0, Ghidra index: 546, label: FUN_00045fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar low-lane opcode model; unobserved upper lanes omitted.
 * Original x86 ABI/behavior still ABI_UNVERIFIED. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_000388b0(int param_1);
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern undefined4 FUN_00055aa0(void);
extern void FUN_0004e8f0(void);
extern void FUN_00018000(int32_t in_EAX);
extern void FUN_00039f00(int param_1);
extern void FUN_00055b50(void);
extern void FUN_00015fe0(void);
extern void FUN_0005e8b0(int *param_1,char param_2);
extern int FUN_00140a60(int param_1,int *param_2);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);

undefined4 FUN_00045fa0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int in_ECX;
  undefined4 uVar11;
  float fVar12;
  undefined1 in_XMM0 [16];
  __m128 auVar13;
  undefined4 uVar14;
  
  piVar6 = (int *)FUN_000120f0();
  iVar7 = FUN_000388b0(*(undefined4 *)(in_ECX + 0x318));
  if ((iVar7 != 0) && ((iVar8 = *(int *)(iVar7 + 100), iVar8 == 0 || ((2 < iVar8 && (iVar8 < 5))))))
  {
    iVar7 = 0;
  }
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  *(undefined4 *)(in_ECX + 0x450) = 0;
  *(undefined4 *)(in_ECX + 0x44c) = 0;
  *(undefined4 *)(in_ECX + 0x448) = 0;
  uVar11 = 4;
  if (((iVar7 != 0) && ((*(uint *)(iVar7 + 0x80) >> 3 & 1) != 0)) &&
     (0.5 < *(float *)(iVar7 + 0x14))) {
    piVar4 = *(int **)(iVar7 + 4);
    iVar8 = (**(code **)(*piVar6 + 0x40))();
    iVar9 = (**(code **)(*piVar4 + 0x40))();
    fVar12 = *(float *)(iVar9 + 0x2c);
    fVar1 = *(float *)(iVar8 + 0x2c);
    fVar2 = *(float *)(iVar9 + 0x28);
    fVar3 = *(float *)(iVar8 + 0x28);
    *(float *)(in_ECX + 0x448) = *(float *)(iVar9 + 0x24) - *(float *)(iVar8 + 0x24);
    *(float *)(in_ECX + 0x44c) = fVar2 - fVar3;
    *(float *)(in_ECX + 0x450) = fVar12 - fVar1;
    *(undefined4 *)(in_ECX + 0x44c) = 0;
    pfVar10 = (float *)(in_ECX + 0x448);
    auVar13 = _mm_rsqrt_ss(_mm_set_ss(*(float *)(in_ECX + 0x450) * *(float *)(in_ECX + 0x450) +
                              *(float *)(in_ECX + 0x44c) * *(float *)(in_ECX + 0x44c) +
                              *pfVar10 * *pfVar10));
    fVar12 = _mm_cvtss_f32(auVar13);
    uVar11 = 3;
    *pfVar10 = fVar12 * *pfVar10;
    *(float *)(in_ECX + 0x44c) = fVar12 * *(float *)(in_ECX + 0x44c);
    *(float *)(in_ECX + 0x450) = fVar12 * *(float *)(in_ECX + 0x450);
  }
  if ((*(int *)(in_ECX + 0x8f4) == 0) ||
     ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 == 0)) {
    if ((iVar7 == 0) || (piVar4 = *(int **)(iVar7 + 4), piVar4 == (int *)0x0)) {
      iVar7 = (**(code **)(piVar6[0x6d] + 0x28))();
      fVar12 = *(float *)(iVar7 + 0x20);
      fVar1 = *(float *)(iVar7 + 0x14);
      *param_1 = -*(float *)(iVar7 + 8);
      param_1[1] = -fVar1;
      param_1[2] = -fVar12;
    }
    else {
      iVar7 = (**(code **)(*piVar6 + 0x40))();
      iVar8 = (**(code **)(*piVar4 + 0x40))();
      fVar12 = *(float *)(iVar8 + 0x2c);
      fVar1 = *(float *)(iVar7 + 0x2c);
      fVar2 = *(float *)(iVar8 + 0x28);
      fVar3 = *(float *)(iVar7 + 0x28);
      *param_1 = *(float *)(iVar8 + 0x24) - *(float *)(iVar7 + 0x24);
      param_1[1] = fVar2 - fVar3;
      param_1[2] = fVar12 - fVar1;
    }
    uVar11 = 1;
  }
  else {
    cVar5 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
    if (cVar5 == '\0') {
      *(undefined4 *)(in_ECX + 0x86c) = 0;
      iVar7 = FUN_00055aa0();
      *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 2;
      if (*(int *)(in_ECX + 0x18) != 3) {
        FUN_0004e8f0();
        *(undefined4 *)(in_ECX + 0x18) = 3;
        FUN_00018000();
        FUN_00039f00(in_ECX + -0x40);
        FUN_00055b50();
        FUN_00015fe0();
        FUN_0001a4e0();
        iVar7 = FUN_000120f0();
        if ((iVar7 != 0) && (iVar7 = FUN_000120f0(), *(int *)(iVar7 + 0x59c) != 0)) {
          FUN_000120f0();
          uVar14 = 1;
          uVar11 = FUN_000120f0(1);
          FUN_0005e8b0(uVar11,uVar14);
        }
      }
      FUN_00140a60(*(undefined4 *)(piVar6[2] + 0xbe8),piVar6,0xe635ecc6,0);
      return 1;
    }
    FUN_000255d0(param_1,0);
  }
  FUN_0004d970(in_ECX + -0x40,param_1,uVar11,1,1);
  return 1;
}
