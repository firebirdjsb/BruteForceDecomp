/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0384BCA433FA104064DC217DA6ACC327F55BB270CF04C560185FA09B931798F
 * Entry: 0x00045990, Ghidra index: 544, label: FUN_00045990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar low-lane opcode model; unobserved upper lanes omitted.
 * Original x86 ABI/behavior still ABI_UNVERIFIED. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00055a60(void);
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
extern undefined4 FUN_00049ca0(void);
extern undefined1 FUN_00024f80(int *param_1,int *param_2,float param_3);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);

undefined4 FUN_00045990(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  int *in_ECX;
  float fVar12;
  undefined1 in_XMM0 [16];
  __m128 auVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  piVar6 = (int *)FUN_000120f0();
  if (in_ECX[0xfb] == 0) {
    FUN_00055a60(in_ECX + 0xf7);
  }
  uVar7 = (in_ECX[0xfa] + in_ECX[0xfb]) - 1;
  if ((uint)in_ECX[0xf9] <= uVar7) {
    uVar7 = uVar7 - in_ECX[0xf9];
  }
  piVar4 = *(int **)(*(int *)(in_ECX[0xf8] + uVar7 * 4) + 0x58);
  if (((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 0x1c) & 1) == 0)) &&
     (iVar8 = FUN_000388b0(in_ECX[0xc6]), iVar8 != 0)) {
    in_ECX[0x114] = 0;
    in_ECX[0x113] = 0;
    in_ECX[0x112] = 0;
    if ((in_ECX[0x23d] != 0) && ((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18 != 0)) {
      cVar5 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x40000000);
      if (cVar5 == '\0') {
        in_ECX[0x21b] = 0;
        iVar8 = FUN_00055aa0();
        *(uint *)(iVar8 + 0x88) = *(uint *)(iVar8 + 0x88) | 2;
        if (in_ECX[6] != 3) {
          FUN_0004e8f0();
          in_ECX[6] = 3;
          FUN_00018000();
          FUN_00039f00(in_ECX + -0x10);
          FUN_00055b50();
          FUN_00015fe0();
          FUN_0001a4e0();
          iVar8 = FUN_000120f0();
          if ((iVar8 != 0) && (iVar8 = FUN_000120f0(), *(int *)(iVar8 + 0x59c) != 0)) {
            FUN_000120f0();
            uVar14 = 1;
            uVar9 = FUN_000120f0(1);
            FUN_0005e8b0(uVar9,uVar14);
          }
        }
        FUN_00140a60(*(undefined4 *)(piVar6[2] + 0xbe8),piVar6,0xe635ecc6,0);
        return 1;
      }
      in_ECX[0x114] = 0;
      in_ECX[0x113] = 0;
      in_ECX[0x112] = 0;
      uVar9 = 4;
      if ((*(uint *)(iVar8 + 0x80) >> 3 & 1) != 0) {
        iVar8 = (**(code **)(*piVar6 + 0x40))();
        iVar10 = (**(code **)(*piVar4 + 0x40))();
        fVar12 = *(float *)(iVar10 + 0x2c);
        fVar1 = *(float *)(iVar8 + 0x2c);
        fVar2 = *(float *)(iVar10 + 0x28);
        fVar3 = *(float *)(iVar8 + 0x28);
        in_ECX[0x112] = (int)(*(float *)(iVar10 + 0x24) - *(float *)(iVar8 + 0x24));
        in_ECX[0x113] = (int)(fVar2 - fVar3);
        in_ECX[0x114] = (int)(fVar12 - fVar1);
        in_ECX[0x113] = 0;
        pfVar11 = (float *)(in_ECX + 0x112);
        /* Balanced intrinsic calls preserve the draft's original scalar
         * rsqrtss operand; x86 SIMD lanes and ABI remain unverified. */
        auVar13 = _mm_rsqrt_ss(_mm_set_ss((float)in_ECX[0x114] * (float)in_ECX[0x114] +
                                  (float)in_ECX[0x113] * (float)in_ECX[0x113] + *pfVar11 * *pfVar11));
        fVar12 = _mm_cvtss_f32(auVar13);
        uVar15 = 0;
        uVar14 = 0x41c80000;
        *pfVar11 = fVar12 * *pfVar11;
        in_ECX[0x113] = (int)(fVar12 * (float)in_ECX[0x113]);
        in_ECX[0x114] = (int)(fVar12 * (float)in_ECX[0x114]);
        uVar9 = FUN_00049ca0(0x41c80000,0);
        FUN_00024f80(in_ECX + -0x10,uVar9,uVar14,uVar15);
        uVar9 = 3;
      }
      FUN_000255d0(param_1,0);
      FUN_0004d970(in_ECX + -0x10,param_1,uVar9,1,1);
      return 1;
    }
    uVar9 = (**(code **)(*in_ECX + 0xb0))(param_1);
    return uVar9;
  }
  return 0;
}
