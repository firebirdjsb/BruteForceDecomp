/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0456827B74FA7AF39D550DB7275E2ED4CB05E8BF74F177A4F5FFB4D60A28A641
 * Entry: 0x00123430, Ghidra index: 3673, label: FUN_00123430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar opcode model; original XMM upper lanes not recovered.
 * ABI/behavior remain unverified, despite C11 syntax repair. */
undefined4 FUN_00123430(int param_1,int *param_2,float param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined1 in_XMM0 [16];
  __m128 auVar9;
  int unaff_retaddr;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined4 local_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int local_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  float local_1c;
  float fStack_18;
  float local_14;
  uint local_10;
  byte bStack_c;
  int iStack_4;
  
  if ((param_2 != (int *)0x0) && (*param_2 == 2)) {
    if ((param_3 != 0.0) && ((*(int *)(param_1 + 0x76c) != 0 && (param_2[1] != 0)))) {
      local_1c = 0.0;
      puVar7 = local_60;
      for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_14 = param_3;
      local_10 = 0x3f800000;
      local_24 = param_2[2];
      local_2c = param_1;
      local_2c = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0xbec) + 0xc))(param_1);
      if (iStack_20 != *(int *)(param_1 + 4)) {
        FUN_0008f6a0(*(int *)(param_1 + 4));
      }
      uStack_64 = 0;
      local_60[2] = *(undefined4 *)(param_1 + 0x14);
      local_60[1] = *(undefined4 *)(param_1 + 0x10);
      local_60[0] = *(undefined4 *)(param_1 + 0xc);
      uStack_50 = *(undefined4 *)(param_1 + 0x1c);
      uStack_4c = *(undefined4 *)(param_1 + 0x20);
      local_60[3] = *(undefined4 *)(param_1 + 0x18);
      fStack_40 = -*(float *)(param_1 + 0x20);
      fStack_44 = -*(float *)(param_1 + 0x1c);
      bStack_c = bStack_c | 0xd;
      fStack_48 = -*(float *)(param_1 + 0x18);
      local_10 = *(uint *)(param_1 + 0x28) >> 2 & 0x1f;
      piVar1 = *(int **)(param_1 + 4);
      if (*(int *)(piVar1[3] + 4) == 3) {
        iVar6 = (**(code **)(*piVar1 + 0x40))();
        fVar2 = *(float *)(*(int *)(unaff_retaddr + 0x6c) + 0x40) - *(float *)(iVar6 + 0x2c);
        fVar3 = *(float *)(*(int *)(unaff_retaddr + 0x6c) + 0x38) - *(float *)(iVar6 + 0x24);
        fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
        auVar9 = _mm_rsqrt_ss(_mm_set_ss(fVar2));
        if (iStack_28 != 0) {
          fVar8 = (float10)FUN_001259b0();
          fStack_18 = (float)(fVar8 * (float10)fStack_18);
        }
        pfVar5 = (float *)(**(code **)(piVar1[0x6d] + 0x30))(auStack_70);
        if (fVar2 * *pfVar5 + _mm_cvtss_f32(auVar9) * fVar3 * pfVar5[1] + _mm_cvtss_f32(auVar9) * 0.0 * pfVar5[2] <
            -0.4) {
          local_1c = local_1c * 5.0;
        }
        if (piVar1[0x167] == *(int *)(iStack_4 + 0x59c)) {
          local_1c = local_1c * 0.3;
        }
        (**(code **)(*piVar1 + 0xf4))();
        iVar6 = FUN_0010fe20(unaff_retaddr);
        if (iVar6 == 0) {
          (**(code **)(piVar1[0x6d] + 0x9c))();
          cVar4 = FUN_000a8520();
          if (cVar4 != '\0') {
            fStack_18 = fStack_18 * 5.0;
          }
        }
      }
      (**(code **)(*(int *)(*(int *)(unaff_retaddr + 0x76c) + 0x1d4) + 8))
                (*(undefined4 *)(unaff_retaddr + 8),&uStack_64,1);
      if (local_2c != 0) {
        FUN_0008f6e0();
      }
      return 1;
    }
  }
  return 0;
}
