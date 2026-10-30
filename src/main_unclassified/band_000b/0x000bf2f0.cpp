/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D4AEAD4F1E2A705B2C2C15A5AE30FACFB60444A93BF3BAF6653E6206CFAA6D5
 * Entry: 0x000bf2f0, Ghidra index: 2329, label: FUN_000bf2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra scalar SSE low-lane opcode model; unknown high lanes not represented.
 * No assembly/ABI or behavior equivalence has been established. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000bf1e0(void);
extern void FUN_0015a500(int *param_1);
extern void FUN_0015a480(int *param_1);
extern void FUN_00023940(void);
extern uint FUN_000de330(float param_1);

extern uint32_t DAT_00469aac;
undefined1 FUN_000bf2f0(int param_1,int param_2,undefined4 *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined1 in_XMM0 [16];
  __m128 auVar5;
  int unaff_retaddr;
  float fVar6;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_140;
  undefined1 auStack_13c [4];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int aiStack_118 [64];
  int iStack_18;
  
  cVar3 = FUN_000bf1e0(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  piVar1 = *(int **)(param_2 + 0xe0);
  iVar4 = (**(code **)(*piVar1 + 0x40))();
  FUN_0015a500(param_3);
  fStack_148 = fStack_124 - *(float *)(iVar4 + 0x24);
  fStack_150 = fStack_11c - *(float *)(iVar4 + 0x2c);
  if (ABS(fStack_120 - *(float *)(iVar4 + 0x28)) <= *(float *)(param_1 + 0x50)) {
    if (param_3 == *(undefined4 **)(param_1 + 8)) {
      fStack_148 = fStack_148 * 0.7;
      fStack_150 = fStack_150 * 0.7;
    }
    if (fStack_148 * fStack_148 + fStack_150 * fStack_150 <=
        *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x54)) {
      FUN_0015a480(param_3);
      (**(code **)(piVar1[0x6d] + 0x30))(auStack_13c);
      *param_4 = fStack_134;
      param_4[1] = fStack_130;
      param_4[2] = fStack_12c;
      fStack_134 = fStack_134 - *(float *)(iVar4 + 0x24);
      fStack_12c = fStack_12c - *(float *)(iVar4 + 0x2c);
      auVar5 = _mm_rsqrt_ss(_mm_set_ss(fStack_134 * fStack_134 + fStack_12c * fStack_12c));
      fVar6 = (fStack_140 * fStack_134 + fStack_138 * fStack_12c) * _mm_cvtss_f32(auVar5);
      if (0.0 <= fVar6) {
        if ((0.5 <= fVar6) || (*(char *)(param_2 + 0x79) == '\x02')) {
          FUN_00023940();
          aiStack_118[iStack_18] = param_2;
          iStack_18 = iStack_18 + 1;
          cVar3 = FUN_000de330(DAT_00469aac);
          if (cVar3 != '\0') {
            if (param_3 != (undefined4 *)0x0) {
              fVar2 = 1.0 / *(float *)(unaff_retaddr + 0x54);
              param_3[2] = fVar6;
              fVar6 = fStack_14c * fVar2;
              fVar2 = fVar2 * fStack_154;
              auVar5 = _mm_rsqrt_ss(_mm_set_ss(fVar6 * fVar6 + fVar2 * fVar2));
              *param_3 = _mm_cvtss_f32(auVar5);
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
