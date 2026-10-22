/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F15F01809C067BF4C8DFF4747713A494F14E3D0B061660F3A32A85C154ECF11
 * Entry: 0x00153210, Ghidra index: 4425, label: FUN_00153210
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
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699b8;
extern uint32_t DAT_004699c0;
extern uint32_t _DAT_0046d2f0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00153210(byte *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  __m128 in_XMM0;
  int local_1c;
  int local_18;
  
  iVar8 = 0;
  if (0 < DAT_004699c0) {
    do {
      iVar6 = *(int *)(*(int *)(DAT_004699b4 + 4) + iVar8 * 4);
      iVar1 = *(int *)(DAT_004699b0 + 4);
      FUN_00150a10(*param_1 >> 4 & 1);
      if ((_DAT_0046d2f0 < *(float *)(iVar6 * 0x54 + iVar1 + 0x34)) && (param_2 < 0.0)) {
        *param_1 = *param_1 & 0xfb;
      }
      iVar6 = DAT_004699c0;
      *(undefined1 *)(*(int *)(DAT_004699b8 + 4) + iVar8) = 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
    if (0 < iVar6) {
      local_1c = 1;
      local_18 = iVar6;
      iVar8 = 0;
      do {
        iVar5 = DAT_004699b4;
        iVar1 = DAT_004699b0;
        iVar7 = *(int *)(iVar8 + *(int *)(DAT_004699b4 + 4)) * 0x54 + *(int *)(DAT_004699b0 + 4);
        if (((*(int *)(iVar7 + 0x48) == 1) || (*(int *)(iVar7 + 0x48) == 0)) &&
           (iVar9 = local_1c, local_1c < iVar6)) {
          do {
            iVar6 = *(int *)(*(int *)(iVar5 + 4) + iVar9 * 4) * 0x54 + *(int *)(iVar1 + 4);
            if (((*(int *)(iVar6 + 0x48) == 1) || (*(int *)(iVar6 + 0x48) == 0)) &&
               (fVar2 = *(float *)(iVar7 + 0x3c) - *(float *)(iVar6 + 0x3c),
               fVar4 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40),
               fVar3 = *(float *)(iVar7 + 0x44) - *(float *)(iVar6 + 0x44),
               fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < 0.1)) {
              fVar2 = *(float *)(iVar7 + 0x30) + *(float *)(iVar6 + 0x30);
              fVar3 = *(float *)(iVar7 + 0x34) + *(float *)(iVar6 + 0x34);
              fVar4 = *(float *)(iVar7 + 0x38) + *(float *)(iVar6 + 0x38);
              in_XMM0 = _mm_rsqrt_ss(_mm_set_ss(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4));
              fVar10 = _mm_cvtss_f32(in_XMM0);
              *(float *)(iVar7 + 0x34) = fVar3 * fVar10;
              *(float *)(iVar7 + 0x30) = fVar10 * fVar2;
              *(float *)(iVar7 + 0x38) = fVar4 * fVar10;
              *(float *)(iVar6 + 0x34) = fVar3 * fVar10;
              *(float *)(iVar6 + 0x30) = fVar10 * fVar2;
              *(float *)(iVar6 + 0x38) = fVar4 * fVar10;
            }
            iVar9 = iVar9 + 1;
            iVar6 = DAT_004699c0;
          } while (iVar9 < DAT_004699c0);
        }
        iVar8 = iVar8 + 4;
        local_1c = local_1c + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  return;
}
