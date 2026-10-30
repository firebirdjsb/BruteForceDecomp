/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12AD36047C739DB8C612BC9253A4F773511150119F5CF6393E561EA06A423CFA
 * Entry: 0x00024c00, Ghidra index: 256, label: FUN_00024c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Original RSQRTSS affects low scalar lane; upper lanes not consumed. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern float10 FUN_00024ae0(void);
extern float10 FUN_00023900(float param_1,float param_2);

extern uint32_t DAT_0040e740;
extern uint32_t DAT_0046cfd8;
extern uint32_t _DAT_0040e744;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_00024c00(int param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  undefined1 uVar8;
  float10 fVar9;
  __m128 reciprocal_sqrt_low_lane;
  float fStack_44;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  iVar6 = FUN_000120f0();
  uVar8 = 0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  cVar5 = (**(code **)(**(int **)(iVar6 + 0x5a4) + 0x110))();
  if (cVar5 == '\0') {
    fVar9 = (float10)FUN_00024ae0(param_1);
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    fVar4 = param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3;
    uVar8 = 0;
    if ((fVar9 <= (float10)(float)(DAT_0046cfd8 >> 9 | 0x3f800000) - (float10)1.0) &&
       (1.1920929e-07 < fVar4)) {
      fStack_2c = param_3[2];
      fStack_30 = param_3[1];
      fStack_34 = *param_3;
      reciprocal_sqrt_low_lane = _mm_rsqrt_ss(_mm_set_ss(fStack_34 * fStack_34 +
                                fStack_30 * fStack_30 + fStack_2c * fStack_2c));
      fStack_20 = _mm_cvtss_f32(reciprocal_sqrt_low_lane);
      fStack_28 = fStack_20 * fStack_34;
      uStack_1c = 0;
      fStack_24 = fStack_30 * fStack_20;
      fStack_20 = fStack_2c * fStack_20;
      uStack_18 = 0x3f800000;
      uStack_14 = 0;
      fVar9 = (float10)FUN_00023900(0xbf490fdb,0x3f490fdb);
      FUN_0001fc70(auStack_10,&fStack_28,(float)(fVar9 * (float10)57.295776));
      pfVar7 = (float *)FUN_0001fb70(auStack_10,&fStack_34,&uStack_1c);
      fVar2 = pfVar7[2];
      fVar3 = pfVar7[1];
      *param_2 = *pfVar7;
      param_2[1] = fVar3;
      fStack_44 = 1.0;
      param_2[2] = fVar2;
      fVar2 = 1.0;
      if (0.7 < param_2[1]) {
        fVar2 = 1.2;
        fStack_44 = 1.2;
      }
      if (fVar4 < 100.0) {
        fVar2 = SQRT(fVar4);
        if (10.0 <= SQRT(fVar4)) {
          fVar2 = 10.0;
        }
        fVar2 = fVar2 * 0.1 * fStack_44;
      }
      uVar1 = *(undefined8 *)(param_2 + 1);
      *param_2 = *param_2 * fVar2;
      param_2[1] = (float)uVar1 * fVar2;
      param_2[2] = (float)((ulonglong)uVar1 >> 0x20) * fVar2;
      uVar8 = 1;
    }
    if ((*(uint *)(param_1 + 0x3c4) & 0x2000) != 0) {
      fVar2 = SQRT(fVar4);
      if (DAT_0040e740 <= SQRT(fVar4)) {
        fVar2 = DAT_0040e740;
      }
      fVar4 = (_DAT_0040e744 - 1.0) * (fVar2 / DAT_0040e740) * (fVar2 / DAT_0040e740) + 1.0;
      *param_2 = fVar4 * 0.0 + *param_2;
      param_2[1] = fVar4 * 0.5 + param_2[1];
      param_2[2] = fVar4 * 0.0 + param_2[2];
    }
  }
  return uVar8;
}
