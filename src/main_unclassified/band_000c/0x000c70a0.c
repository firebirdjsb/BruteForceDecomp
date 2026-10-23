/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46759E850C90FE2023426FD4D235109A6C709B65643772C17CFC719A343BAC88
 * Entry: 0x000c70a0, Ghidra index: 2446, label: FUN_000c70a0
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
extern uint32_t DAT_003f7f1c;
extern uint32_t *DAT_003f7f20;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469aac;
extern uint32_t PTR_LAB_0039f2f0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_000c70a0(int param_1)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined1 in_XMM0 [16];
  __m128 auVar8;
  float local_180;
  float *pfStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c [3];
  undefined4 auStack_150 [11];
  undefined1 auStack_124 [12];
  undefined **appuStack_118 [65];
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar3 = FUN_0006e6b0(DAT_003f7f1c * DAT_003f7f20,-(uint)(*(int *)(param_1 + 0x70) != 0) & 0x14f480
                       ,*(int *)(param_1 + 0x70));
  if ((uVar3 & 4) == 0) {
    return uVar3 & 1;
  }
  if (((uVar3 & 1) != 0) && (*(int *)(DAT_0046995c + 0x1c) == 0)) {
    local_160 = *(float *)(param_1 + 0x38);
    local_168 = *(float *)(param_1 + 0x30);
    local_180 = *(float *)(param_1 + 0x34);
    piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x10) + 0x48);
    local_164 = local_180;
    local_15c[0] = local_168;
    pfVar4 = (float *)(**(code **)(*piVar1 + 0xc))();
    fStack_170 = pfVar4[2] - local_160;
    fStack_174 = pfVar4[1] - local_164;
    fStack_178 = *pfVar4 - local_15c[0];
    fVar2 = fStack_178 * fStack_178 + fStack_174 * fStack_174 + fStack_170 * fStack_170;
    auVar8 = _mm_rsqrt_ss(_mm_set_ss(fVar2));
    fStack_16c = _mm_cvtss_f32(auVar8);
    fVar2 = fStack_16c * fVar2;
    pfStack_17c = &fStack_178;
    local_180 = 0.5;
    fStack_178 = fStack_178 * fStack_16c;
    fStack_174 = fStack_174 * fStack_16c;
    fStack_170 = fStack_170 * fStack_16c;
    puVar6 = auStack_150;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    uStack_8 = 0;
    uStack_14 = 0;
    uStack_10 = 1;
    uStack_4 = 0;
    uStack_c = 0x950;
    appuStack_118[0] = &PTR_LAB_0039f2f0;
    iVar5 = FUN_000ddd10(DAT_00469aac,&local_180,auStack_124,local_15c,&local_168,&fStack_178,
                         appuStack_118,fVar2,1);
    if (((iVar5 == 1) || (iVar5 == 2)) &&
       (fVar7 = (float10)(**(code **)(*piVar1 + 0x24))(),
       (float10)local_180 < (float10)fVar2 - fVar7)) {
      return 0;
    }
    return 1;
  }
  return 0;
}
