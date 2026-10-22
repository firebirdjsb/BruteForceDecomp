/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6C38D47EAD8BD735F2CE30180B851FC34161A7C26077FE7A5CA592EE65C5C3E
 * Entry: 0x00115b00, Ghidra index: 3582, label: FUN_00115b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar low lane, not an exact source/ABI reconstruction.
 * Original upper XMM lanes and machine-code correspondence remain unverified. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 FUN_00115b00(int param_1,float param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  undefined1 in_XMM0 [16];
  __m128 auVar4;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float local_c;
  float local_8;
  float fStack_4;
  
  fVar2 = *(float *)(param_1 + 0x478) * *(float *)(param_1 + 0x478) +
          *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x474) +
          *(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x470);
  if (fVar2 <= 0.0001) {
    return 0;
  }
  auVar4 = _mm_rsqrt_ss(_mm_set_ss(fVar2));
  fStack_1c = _mm_cvtss_f32(auVar4);
  local_24 = fStack_1c * *(float *)(param_1 + 0x470);
  local_20 = fStack_1c * (float)*(undefined8 *)(param_1 + 0x474);
  fStack_1c = fStack_1c * (float)((ulonglong)*(undefined8 *)(param_1 + 0x474) >> 0x20);
  local_18 = param_2 * local_24;
  local_14 = param_2 * local_20;
  fStack_10 = param_2 * fStack_1c;
  iVar1 = *(int *)(param_1 + 0x6c);
  local_28 = fStack_10 + *(float *)(iVar1 + 0x40);
  local_34 = local_14 + *(float *)(iVar1 + 0x3c);
  local_38 = 0.0;
  local_30 = local_18 + *(float *)(iVar1 + 0x38);
  local_2c = local_34;
  local_c = local_24;
  local_8 = local_14;
  fStack_4 = fStack_10;
  cVar3 = FUN_000dddd0(*(undefined4 *)(param_1 + 8),&local_38,0x40a00000,param_1);
  if (cVar3 != '\0') {
    local_30 = local_18 + local_30;
    local_2c = local_2c + local_8;
    local_28 = local_28 + fStack_4;
    FUN_000dddd0(*(undefined4 *)(param_1 + 8),&local_38,0x40a00000,param_1);
    *param_3 = local_38 - *(float *)(param_1 + 0x438);
    if (ABS(*param_3) <= 2.75) {
      return 0;
    }
    local_30 = local_18 + local_30;
    local_2c = local_2c + local_8;
    local_28 = local_28 + fStack_4;
    cVar3 = FUN_000dddd0(*(undefined4 *)(param_1 + 8),&local_38,0x40a00000,param_1);
    if ((cVar3 != '\0') &&
       (*param_3 = local_38 - *(float *)(param_1 + 0x438), ABS(*param_3) <= 2.75)) {
      return 0;
    }
  }
  return 1;
}
