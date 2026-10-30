/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E49367A4E56190BE1E3CC7A229FEB1A7E5FC8254612A86D4E1143172424E4D1
 * Entry: 0x00031b40, Ghidra index: 319, label: FUN_00031b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra indicates scalar RSQRTSS; use the x86 low-lane approximation, not 1/x or 1/sqrt(x).
 * Upper XMM lanes are not reconstructed; original opcode/ABI remain UNVERIFIED. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00055a60(void);
extern int FUN_000388b0(int param_1);
extern undefined4 FUN_00055aa0(void);
extern int FUN_00049c60(void);
extern undefined4 FUN_00049ca0(void);
extern undefined4 FUN_00023d00(void);
extern void FUN_0004dff0(void);
extern undefined1 FUN_00024f80(int *param_1,int *param_2,float param_3);
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern void FUN_0004e8f0(void);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);

undefined4 FUN_00031b40(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  int in_ECX;
  float fVar11;
  undefined1 in_XMM0 [16];
  __m128 auVar12;
  undefined4 uVar13;
  
  piVar5 = (int *)FUN_000120f0();
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(in_ECX + 0x3dc);
  }
  uVar6 = (*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec)) - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar6) {
    uVar6 = uVar6 - *(uint *)(in_ECX + 0x3e4);
  }
  piVar8 = *(int **)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar6 * 4) + 0x58);
  iVar7 = 0;
  if ((piVar8 != (int *)0x0) && ((*(byte *)(piVar8 + 0x1c) & 1) == 0)) {
    iVar7 = FUN_000388b0(*(undefined4 *)(in_ECX + 0x318));
  }
  if (iVar7 == 0) {
    iVar7 = FUN_00055aa0();
    if ((*(uint *)(iVar7 + 0x88) >> 0xd & 1) == 0) {
      return 0;
    }
    FUN_00049c60();
    piVar8 = (int *)FUN_00049ca0();
  }
  if (piVar8 != (int *)0x0) {
    if (((*(uint *)(in_ECX + 900) & 0x100) == 0) && (cVar4 = FUN_00023d00(), cVar4 == '\0')) {
      FUN_00012320(0x5d);
      FUN_0004dff0(in_ECX + -0x40);
      FUN_00012440();
      return 0;
    }
    iVar7 = (**(code **)(*piVar5 + 0x40))();
    iVar9 = (**(code **)(*piVar8 + 0x40))();
    fVar11 = *(float *)(iVar9 + 0x2c);
    fVar1 = *(float *)(iVar7 + 0x2c);
    fVar2 = *(float *)(iVar9 + 0x28);
    fVar3 = *(float *)(iVar7 + 0x28);
    *(float *)(in_ECX + 0x448) = *(float *)(iVar9 + 0x24) - *(float *)(iVar7 + 0x24);
    *(float *)(in_ECX + 0x44c) = fVar2 - fVar3;
    *(float *)(in_ECX + 0x450) = fVar11 - fVar1;
    *(undefined4 *)(in_ECX + 0x44c) = 0;
    pfVar10 = (float *)(in_ECX + 0x448);
    auVar12 = _mm_rsqrt_ss(_mm_set_ss(*(float *)(in_ECX + 0x450) * *(float *)(in_ECX + 0x450) +
                              *(float *)(in_ECX + 0x44c) * *(float *)(in_ECX + 0x44c) +
                              *pfVar10 * *pfVar10));
    fVar11 = _mm_cvtss_f32(auVar12);
    *pfVar10 = fVar11 * *pfVar10;
    *(float *)(in_ECX + 0x44c) = fVar11 * *(float *)(in_ECX + 0x44c);
    *(float *)(in_ECX + 0x450) = fVar11 * *(float *)(in_ECX + 0x450);
    FUN_00024f80(in_ECX + -0x40,piVar8,0x42080000,0);
  }
  if ((*(int *)(in_ECX + 0x8f4) == 0) ||
     ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 == 0)) {
    if (piVar8 != (int *)0x0) {
      iVar7 = (**(code **)(*piVar5 + 0x40))();
      iVar9 = (**(code **)(*piVar8 + 0x40))();
      fVar11 = *(float *)(iVar9 + 0x2c);
      fVar1 = *(float *)(iVar7 + 0x2c);
      fVar2 = *(float *)(iVar9 + 0x28);
      fVar3 = *(float *)(iVar7 + 0x28);
      *param_1 = *(float *)(iVar9 + 0x24) - *(float *)(iVar7 + 0x24);
      param_1[1] = fVar2 - fVar3;
      param_1[2] = fVar11 - fVar1;
    }
    uVar13 = 1;
  }
  else {
    cVar4 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
    if (cVar4 == '\0') {
      FUN_0004e8f0();
      iVar7 = FUN_00055aa0();
      *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 2;
      return 1;
    }
    FUN_000255d0(param_1,0);
    uVar13 = 3;
  }
  FUN_0004d970(in_ECX + -0x40,param_1,uVar13,1,1);
  return 1;
}
