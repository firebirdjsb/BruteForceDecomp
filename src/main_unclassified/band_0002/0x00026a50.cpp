/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADD362F942871EC9642E2049645F221BCF9D5897B9FC68DF799BAA559DEAFF08
 * Entry: 0x00026a50, Ghidra index: 268, label: FUN_00026a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra indicates scalar RSQRTSS; use the x86 low-lane approximation, not 1/x or 1/sqrt(x).
 * Upper XMM lanes are not reconstructed; original opcode/ABI remain UNVERIFIED. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

extern uint32_t FUN_000120f0(int32_t in_EAX);
extern float10 FUN_000394b0(void);
extern void FUN_0004ce30(void);

undefined4 FUN_00026a50(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined1 in_XMM0 [16];
  __m128 auVar11;
  float fVar13;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  iVar5 = (**(code **)(*(int *)(param_2 + 8) + 4))();
  fStack_8 = *(float *)(iVar5 + 4) + 0.08;
  pfVar6 = (float *)(**(code **)(*(int *)(param_3 + 8) + 4))();
  fVar1 = pfVar6[2];
  fVar2 = *pfVar6;
  fVar3 = pfVar6[1] + 0.08;
  piVar7 = (int *)FUN_000120f0();
  iVar5 = (**(code **)(*piVar7 + 0x40))();
  fStack_4 = *(float *)(iVar5 + 0x2c);
  fStack_c = *(float *)(iVar5 + 0x24);
  fVar10 = fVar1 - fStack_4;
  fVar13 = fVar2 - fStack_c;
  auVar11 = _mm_rsqrt_ss(_mm_set_ss(fVar13 * fVar13 +
                            fVar10 * fVar10 + (fVar3 - fStack_8) * (fVar3 - fStack_8)));
  fVar10 = _mm_cvtss_f32(auVar11) * fVar10;
  fVar13 = -(_mm_cvtss_f32(auVar11) * fVar13);
  auVar11 = _mm_rsqrt_ss(_mm_set_ss(fVar10 * fVar10 + fVar13 * fVar13 + 0.0));
  fVar9 = _mm_cvtss_f32(auVar11);
  fVar10 = fVar9 * fVar10 * 0.8;
  fVar12 = fVar9 * 0.0 * 0.8;
  fVar13 = fVar13 * fVar9 * 0.8;
  fStack_10 = fVar13 + fStack_4;
  fStack_14 = fVar12 + fStack_8;
  fStack_18 = fVar10 + fStack_c;
  fStack_4 = -fVar13 + fStack_4;
  fStack_8 = -fVar12 + fStack_8;
  fStack_c = fStack_c + -fVar10;
  fStack_28 = fVar1 + fVar13;
  fStack_2c = fVar12 + fVar3;
  fStack_30 = fVar2 + fVar10;
  fStack_1c = fVar1 + -fVar13;
  fStack_20 = -fVar12 + fVar3;
  fStack_24 = fVar2 + -fVar10;
  fVar8 = (float10)FUN_000394b0();
  cVar4 = FUN_0004ce30(&fStack_18,&fStack_30,(float)(fVar8 + (float10)0.001));
  if ((cVar4 != '\0') &&
     (cVar4 = FUN_0004ce30(&fStack_c,&fStack_24,(float)(fVar8 + (float10)0.001)), cVar4 != '\0')) {
    return 0;
  }
  return 1;
}
