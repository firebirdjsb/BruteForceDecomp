/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9810357C0B95AD75FDBA66C636305DCEB21A479146B208DBC61B0EA34F2A6C7A
 * Entry: 0x00124f60, Ghidra index: 3693, label: FUN_00124f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar opcode model; original XMM upper lanes not recovered.
 * ABI/behavior remain unverified, despite C11 syntax repair. */
void FUN_00124f60(int param_1,float param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  float extraout_EDX;
  int *piVar3;
  float fVar4;
  undefined1 in_XMM0 [16];
  __m128 auVar5;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  int local_188 [3];
  undefined1 local_17c [12];
  undefined1 local_170 [20];
  undefined1 local_15c [12];
  undefined1 local_150 [48];
  undefined1 local_120 [280];
  int local_8;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c8);
  if ((((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0x1cc) - iVar1 >> 2 != 0)) &&
      (*(float *)(param_1 + 0x54) != 0.0)) && (*(float *)(param_1 + 0x50) * 0.1 <= param_2)) {
    FUN_00233bc0();
    local_18c = extraout_EDX;
    iVar1 = FUN_00160da0(0xffffffff,1);
    if (iVar1 != 0) {
      local_194 = param_3[2];
      local_198 = param_3[1];
      local_19c = *param_3;
      auVar5 = _mm_rsqrt_ss(_mm_set_ss(local_19c * local_19c + local_198 * local_198 + local_194 * local_194
                      ));
      fVar4 = _mm_cvtss_f32(auVar5);
      local_19c = fVar4 * local_19c;
      local_198 = local_198 * fVar4;
      local_194 = local_194 * fVar4;
      FUN_00124a30();
      local_8 = *(int *)(param_1 + 0x6c);
      if (*(int *)(local_8 + 0x10) != 0) {
        local_8 = *(int *)(local_8 + 8);
      }
      piVar3 = local_188;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      iVar2 = FUN_000ddd10(*(undefined4 *)(param_1 + 8),&local_18c,local_15c,local_150,param_4,
                           &local_19c,local_120,0x40800000,0);
      if (iVar2 != 0) {
        local_18c = param_2 * 0.05 + 0.5;
        if (1.0 <= local_18c) {
          local_18c = 1.0;
        }
        fVar4 = param_2 * 0.05;
        if (1.0 <= param_2 * 0.05) {
          fVar4 = 1.0;
        }
        local_190 = fVar4 * 0.2 + 0.8;
        FUN_0001d0c0();
        FUN_0001fc40();
        FUN_00213e60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x200),local_17c,local_170,&local_19c,
                     iVar1,local_18c,local_190,local_188[1],0,local_188[1] == 0,1);
      }
    }
  }
  return;
}
