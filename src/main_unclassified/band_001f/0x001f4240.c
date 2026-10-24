/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CDA4A1D1F3BC829BAF8687F3739DD445B9D853BC8DFB496D5F41C53395F276A
 * Entry: 0x001f4240, Ghidra index: 7032, label: FUN_001f4240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Verified matching-XBE immediate guest32 addresses below are NOT
 * safe host pointers/callbacks. ABI and native relocation remain TODO. */
#include <xmmintrin.h>
/* Ghidra scalar SSE opcode model; XMM upper lanes remain unobserved.
 * ABI/behavior remain unverified despite host C11 syntax repair. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7f20;
extern uint32_t DAT_0046b2e8;
void FUN_001f4240(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  undefined1 in_XMM0 [16];
  __m128 auVar17;
  
  iVar12 = *(int *)((int)param_1[6] + 0x18);
  uVar11 = FUN_0006e6b0(0x7fffffff,UINT32_C(0x001f3710),param_1);
  if ((uVar11 & 2) == 0) {
    if ((uVar11 & 4) == 0) {
      if (((uVar11 & 1) != 0) &&
         (iVar12 = FUN_0006ea50(((int)param_1 - iVar12 >> 6) + 0x1000), iVar12 < DAT_003f7f20)) {
        return;
      }
      iVar12 = FUN_001f39b0(param_1,param_2);
      if (iVar12 < 3) {
        return;
      }
    }
    else if ((uVar11 & 1) == 0) {
      return;
    }
    fVar1 = param_1[6];
    fVar2 = (*param_1 - *(float *)((int)fVar1 + 0x10)) - 4.1;
    fVar3 = *(float *)((int)fVar1 + 0x10) + *param_1 + 4.1;
    fVar4 = *(float *)((int)param_1[0xe] + 8) - 0.5;
    fVar5 = *(float *)((int)param_1[0xe] + 4) + 0.5;
    fVar6 = (param_1[1] - *(float *)((int)fVar1 + 0x10)) - 2.1;
    fVar1 = param_1[1] + *(float *)((int)fVar1 + 0x10) + 2.1;
    fVar14 = (float10)(**(code **)(param_2[0x12] + 0x24))();
    fVar15 = (float10)(**(code **)(param_2[0x12] + 0x38))();
    fVar16 = (float10)(**(code **)(param_2[0x12] + 0x3c))();
    fVar14 = (float10)(float)fVar14 * (float10)(float)fVar14 +
             (float10)(float)fVar15 * (float10)(float)fVar15 + fVar16 * fVar16;
    auVar17 = _mm_rsqrt_ss(_mm_set_ss((float)fVar14));
    fVar7 = _mm_cvtss_f32(auVar17) * (float)fVar14;
    iVar12 = (**(code **)(*param_2 + 0x40))();
    if (((((fVar7 + *(float *)(iVar12 + 0x24) < fVar2) ||
          (fVar8 = *(float *)(iVar12 + 0x24) - fVar7, fVar8 < fVar3 == (fVar8 == fVar3))) ||
         (fVar7 + *(float *)(iVar12 + 0x2c) < fVar6)) ||
        (((fVar8 = *(float *)(iVar12 + 0x2c) - fVar7, fVar8 < fVar1 == (fVar8 == fVar1) ||
          (fVar7 + *(float *)(iVar12 + 0x28) < fVar4)) ||
         (fVar7 = *(float *)(iVar12 + 0x28) - fVar7, fVar7 < fVar5 == (fVar7 == fVar5))))) &&
       (sVar10 = FUN_0006e7f0(), sVar10 != 0)) {
      FUN_0015b950(&DAT_0046b2e8);
      FUN_002386d0();
      puVar13 = (undefined4 *)FUN_003721b0();
      puVar13[4] = fVar4;
      puVar13[7] = fVar4;
      puVar13[10] = fVar4;
      puVar13[0xb] = fVar1;
      puVar13[0xd] = fVar4;
      puVar13[0xe] = fVar1;
      puVar13[0x11] = fVar1;
      puVar13[0x14] = fVar1;
      puVar13[0x17] = fVar1;
      puVar13[0x19] = fVar4;
      puVar13[0x1a] = fVar1;
      puVar13[0x1f] = fVar4;
      puVar13[0x25] = fVar4;
      puVar13[0x28] = fVar4;
      puVar13[0x29] = fVar1;
      puVar13[0x2b] = fVar4;
      puVar13[0x2c] = fVar1;
      puVar13[0x32] = fVar1;
      puVar13[0x38] = fVar1;
      puVar9 = D3D8__D3D_g_pDevice;
      *puVar13 = 0x417fc;
      puVar13[1] = 6;
      puVar13[2] = 0x40d81818;
      puVar13[3] = fVar2;
      puVar13[5] = fVar6;
      puVar13[6] = fVar3;
      puVar13[8] = fVar6;
      puVar13[9] = fVar2;
      puVar13[0xc] = fVar3;
      puVar13[0xf] = fVar2;
      puVar13[0x10] = fVar5;
      puVar13[0x12] = fVar3;
      puVar13[0x13] = fVar5;
      puVar13[0x15] = fVar3;
      puVar13[0x16] = fVar5;
      puVar13[0x18] = fVar3;
      puVar13[0x1b] = fVar3;
      puVar13[0x1c] = fVar5;
      puVar13[0x1d] = fVar6;
      puVar13[0x1e] = fVar3;
      puVar13[0x20] = fVar6;
      puVar13[0x21] = fVar2;
      puVar13[0x22] = fVar5;
      puVar13[0x23] = fVar6;
      puVar13[0x24] = fVar2;
      puVar13[0x26] = fVar6;
      puVar13[0x27] = fVar2;
      puVar13[0x2a] = fVar2;
      puVar13[0x2d] = fVar2;
      puVar13[0x2e] = fVar5;
      puVar13[0x2f] = fVar6;
      puVar13[0x30] = fVar2;
      puVar13[0x31] = fVar5;
      puVar13[0x33] = fVar3;
      puVar13[0x34] = fVar5;
      puVar13[0x35] = fVar6;
      puVar13[0x36] = fVar3;
      puVar13[0x37] = fVar5;
      puVar13[0x39] = 0x417fc;
      puVar13[0x3a] = 0;
      *puVar9 = puVar13 + 0x3b;
      D3D8LTCG__D3DDevice_EndVisibilityTest_0();
      FUN_0006e5d0();
    }
  }
  return;
}
