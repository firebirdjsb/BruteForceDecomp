/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BABE1045B46B9E266430192005F05CBEC7686B9E9B553CE52CB6DEAFAE132AC3
 * Entry: 0x00127c60, Ghidra index: 3733, label: FUN_00127c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar opcode model; original XMM upper lanes not recovered.
 * ABI/behavior remain unverified, despite C11 syntax repair. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c05e8;
extern uint32_t DAT_003c05ec;
extern uint32_t _DAT_003c05f0;
extern uint32_t _DAT_003c05f4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
FUN_00127c60(int param_1,int param_2,float *param_3,float *param_4,float param_5,int param_6,
            float param_7)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  int *piVar7;
  float10 fVar8;
  float fVar9;
  float fVar11;
  undefined1 in_XMM0 [16];
  __m128 auVar10;
  float fVar12;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar6 = 0;
  if ((((*(byte *)(param_1 + 0x7d8) & 1) == 0) || (*(int *)(param_1 + 0x500) == 0)) ||
     (param_5 <= 0.0)) {
    return 0;
  }
  fVar8 = (float10)FUN_0010ff10(*(int *)(*(int *)(param_1 + 0x500) + 0x90) + 0xac);
  if (fVar8 <= (float10)100.0) {
    if ((param_7 < 3.0) && (param_6 == 10)) {
      param_7 = 3.0;
    }
    fVar1 = param_4[2] * param_4[2] + param_4[1] * param_4[1] + *param_4 * *param_4;
    if (0.0 < fVar1) {
      auVar10 = _mm_rsqrt_ss(_mm_set_ss(fVar1));
      fVar9 = _mm_cvtss_f32(auVar10);
      fVar1 = *param_4;
      fVar11 = fVar9 * (float)*(undefined8 *)(param_4 + 1);
      fVar12 = fVar9 * (float)((ulonglong)*(undefined8 *)(param_4 + 1) >> 0x20);
      fVar3 = _DAT_003c05f0 * param_5;
      if (0.0 < param_7) {
        fVar3 = fVar3 * param_7;
      }
      if (DAT_003c05ec <= fVar3) {
        fVar3 = DAT_003c05ec;
      }
      fVar5 = 0.0;
      if (1.0 <= param_7) {
        fVar5 = _DAT_003c05f4 * param_5 * param_7;
      }
      if (DAT_003c05e8 <= fVar5) {
        fVar5 = DAT_003c05e8;
      }
      fVar4 = (1.0 - *(float *)(*(int *)(param_1 + 8) + 0xc58)) * 0.4 + 0.6;
      fVar5 = fVar4 * fVar5;
      if (0.0 < fVar5) {
        local_20 = fVar5 * fVar9 * fVar1;
        local_1c = fVar5 * fVar11;
        local_18 = fVar5 * fVar12;
        local_14 = 0;
        local_4 = 0;
        if (*(undefined4 **)(param_1 + 0x4f8) == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)**(undefined4 **)(param_1 + 0x4f8);
        }
        if (piVar7 != *(int **)(param_1 + 0x4f8)) {
          do {
            iVar2 = *(int *)(piVar7[3] + 0x90);
            local_c = *(float *)(iVar2 + 0x130);
            local_10 = *(float *)(iVar2 + 300);
            local_8 = *(float *)(iVar2 + 0x134);
            if ((param_2 == 0) || (piVar7[3] != param_2)) {
              FUN_002b3bc0(&local_10,&local_20);
            }
            piVar7 = (int *)*piVar7;
          } while (piVar7 != (int *)*(int *)(param_1 + 0x4f8));
        }
        uVar6 = 1;
      }
      if (param_2 == 0) {
        return uVar6;
      }
      local_8 = fVar5 + fVar3 * fVar4;
      local_14 = 0;
      local_20 = *param_3;
      local_1c = param_3[1];
      local_18 = param_3[2];
      local_10 = local_8 * fVar9 * fVar1;
      local_c = local_8 * fVar11;
      local_8 = local_8 * fVar12;
      local_4 = 0;
      FUN_002b3bc0(&local_20,&local_10);
      return 1;
    }
  }
  return 0;
}
