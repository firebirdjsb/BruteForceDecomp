/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 056239861CBB17FACAEA686FFCE8C70C90DED2C26D87ACB6AA1B40A5892A4D99
 * Entry: 0x00119fa0, Ghidra index: 3607, label: FUN_00119fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar low lane, not an exact source/ABI reconstruction.
 * Original upper XMM lanes and machine-code correspondence remain unverified. */
void FUN_00119fa0(float param_1,float param_2)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM0 [16];
  __m128 auVar9;
  int unaff_retaddr;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fStack_1c;
  
  if ((*(byte *)((int)param_1 + 0x70) & 1) != 0) {
    return;
  }
  fVar10 = -*(float *)((int)param_1 + 0x5dc);
  fVar11 = -*(float *)((int)param_1 + 0x5c4);
  auVar9 = _mm_rsqrt_ss(_mm_set_ss(fVar11 * fVar11 + fVar10 * fVar10));
  fVar7 = _mm_cvtss_f32(auVar9);
  if (*(float *)((int)param_1 + 0x5f8) != 0.0) {
    uVar12 = *(undefined4 *)((int)param_1 + 0x5f4);
    FUN_0011e7c0(param_1,0);
    param_2 = *(float *)((int)param_1 + 0x7ec) * *(float *)((int)param_1 + 0x5f8) * param_2;
    FUN_0001d0c0(uVar12,param_2);
    FUN_000720d0((int)param_1 + 0x5bc,param_2);
    FUN_0011e7c0(param_1,uVar12);
  }
  piVar2 = *(int **)((int)param_1 + 0x1fc);
  if (((piVar2 == (int *)0x0) ||
      (((iVar5 = *piVar2, iVar5 != 0x13 && (iVar5 != 0)) && (iVar5 != 0x2b)))) &&
     (((*(int *)((int)param_1 + 0x1f8) != 6 && (piVar2 != (int *)0x0)) &&
      ((*(byte *)((int)piVar2 + 0x251) & 0x20) == 0)))) {
    *(byte *)((int)param_1 + 0x261) = *(byte *)((int)param_1 + 0x261) & 0xef;
    *(byte *)((int)param_1 + 0x261) = *(byte *)((int)param_1 + 0x261) | 0x20;
    *(undefined4 *)((int)param_1 + 0x5f8) = 0;
    return;
  }
  fVar4 = -*(float *)(*(int *)((int)param_1 + 0x6c) + 0x34);
  fVar3 = -*(float *)(*(int *)((int)param_1 + 0x6c) + 0x1c);
  auVar9 = _mm_rsqrt_ss(_mm_set_ss(fVar4 * fVar4 + fVar3 * fVar3));
  fVar8 = _mm_cvtss_f32(auVar9);
  iVar5 = (**(code **)(**(int **)(*(int *)((int)param_1 + 8) + 0xbec) + 0xc))
                    (param_1,fVar8 * 0.0 * fVar7 * 0.0 +
                             fVar7 * fVar10 * fVar8 * fVar4 + fVar8 * fVar3 * fVar7 * fVar11);
  if (((iVar5 == 0) || (*(int *)(iVar5 + 0x24) == 0)) ||
     ((*(byte *)(*(int *)(iVar5 + 0x24) + 0x14) & 2) == 0)) {
    if ((*(int *)(unaff_retaddr + 0x1fc) == 0) ||
       ((*(byte *)(*(int *)(unaff_retaddr + 0x1fc) + 0x251) & 0x20) == 0)) goto LAB_0011a220;
    fVar11 = 1.0;
  }
  else if ((*(int *)(unaff_retaddr + 0x1fc) == 0) ||
          ((*(byte *)(*(int *)(unaff_retaddr + 0x1fc) + 0x251) & 0x20) == 0)) {
    if (*(float *)(unaff_retaddr + 0x7dc) <= 0.0) {
      fVar11 = 0.819;
    }
    else {
      fVar11 = 0.94;
    }
  }
  else {
LAB_0011a220:
    fVar11 = 0.985;
  }
  if (fVar11 <= -1.0) {
    fVar11 = -1.0;
  }
  if (1.0 <= fVar11) {
    fVar11 = 1.0;
  }
  if (0.985 < param_1) {
    *(byte *)(unaff_retaddr + 0x261) = *(byte *)(unaff_retaddr + 0x261) & 0xef;
  }
  if (fVar11 <= param_1) {
    bVar1 = *(byte *)(unaff_retaddr + 0x261);
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(unaff_retaddr + 0x261) = bVar1 & 0xef;
      *(undefined4 *)(unaff_retaddr + 0x5f8) = 0;
      return;
    }
    if (*(float *)(unaff_retaddr + 0x5f8) != 0.0) {
      fVar11 = ABS(*(float *)(unaff_retaddr + 0x5f8));
LAB_0011a30c:
      fVar11 = fVar11 * 57.295776;
      goto LAB_0011a312;
    }
    if ((bVar1 & 0x20) == 0) {
      fVar11 = *(float *)(*(int *)(unaff_retaddr + 0xc) + 0x2d0);
      goto LAB_0011a30c;
    }
    *(byte *)(unaff_retaddr + 0x261) = bVar1 & 0xef;
    fVar11 = 1.0;
    *(byte *)(unaff_retaddr + 0x261) = *(byte *)(unaff_retaddr + 0x261) & 0xdf;
    fVar10 = 0.0;
  }
  else {
    iVar5 = (**(code **)(**(int **)(*(int *)(unaff_retaddr + 8) + 0xbec) + 0xc))(unaff_retaddr);
    if (((iVar5 == 0) || (*(int *)(iVar5 + 0x24) == 0)) ||
       ((*(byte *)(*(int *)(iVar5 + 0x24) + 0x14) & 2) == 0)) {
      fVar11 = *(float *)(*(int *)(unaff_retaddr + 0xc) + 0x2d0);
      goto LAB_0011a30c;
    }
    fVar11 = *(float *)(*(int *)(unaff_retaddr + 0xc) + 0x2d0);
    if (fVar11 <= ABS(*(float *)(unaff_retaddr + 0x5f8))) {
      fVar11 = ABS(*(float *)(unaff_retaddr + 0x5f8));
    }
    fVar11 = fVar11 * 57.295776;
    if (0.0 <= param_1) {
      fVar11 = fVar11 + fVar11;
    }
    else {
      fVar11 = fVar11 * 4.0;
    }
LAB_0011a312:
    if (fVar11 == 0.0) goto LAB_0011a427;
    *(byte *)(unaff_retaddr + 0x261) = *(byte *)(unaff_retaddr + 0x261) | 0x10;
    if (0.0 <= fStack_1c * fVar8 * 0.0 - fVar7 * 0.0 * fVar7 * fVar10) {
      fVar6 = (float10)FUN_0005a6e0(0,fVar11);
      fVar6 = fVar6 * (float10)57.295776;
    }
    else {
      fVar6 = (float10)FUN_0005a6e0(0,fVar11);
      fVar6 = fVar6 * (float10)-57.295776;
    }
    fVar10 = (float)fVar6;
  }
  FUN_0011e950(fVar10,fVar11);
LAB_0011a427:
  *(undefined4 *)(unaff_retaddr + 0x5f8) = 0;
  return;
}
