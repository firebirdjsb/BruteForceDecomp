/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4AC060F901FDC20A2C2868B8B0007089692E79BDE1E523E4F8068099528F3FF
 * Entry: 0x00024080, Ghidra index: 250, label: FUN_00024080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern float10 FUN_000235d0(int *param_1,int param_2);

extern uint32_t DAT_0046d028;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00024080(int param_1,float *param_2,float param_3)

{
  float10 fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  undefined2 extraout_var;
  uint uVar5;
  float *pfVar6;
  float10 fVar7;
  float fVar10;
  float local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float local_14;
  
  piVar2 = (int *)FUN_000120f0();
  iVar3 = (**(code **)(*piVar2 + 0x40))();
  pfVar6 = (float *)(iVar3 + 0x24);
  local_14 = param_2[2] - *(float *)(iVar3 + 0x2c);
  local_1c = *param_2 - *pfVar6;
  fVar10 = local_1c * local_1c + local_14 * local_14;
  if (0.0 < fVar10) {
    /* Scalar low-lane approximation from recovered RSQRTSS pseudocode.
     * TODO(ABI_UNVERIFIED): confirm instruction and x87 operand rounding in XBE. */
    fVar10 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fVar10)));
    local_1c = fVar10 * local_1c;
    local_14 = fVar10 * local_14;
  }
  if ((*(int *)(param_1 + 0x1ec) == 0) || ((*(byte *)(param_1 + 0x21c) & 2) == 0)) {
    pfVar4 = (float *)&DAT_0046d028;
  }
  else {
    pfVar4 = (float *)(*(int *)(param_1 + 0x1ec) + 0x14);
  }
  fStack_20 = pfVar4[2] - *(float *)(iVar3 + 0x2c);
  local_24 = pfVar4[1] - *(float *)(iVar3 + 0x28);
  local_28 = *pfVar4 - *pfVar6;
  /* All consumers of the packed temporary use only its low float lane.
   * The high-lane source register is unresolved and is not modeled here. */
  fVar10 = (local_24 * local_24 + fStack_20 * fStack_20) + local_28 * local_28;
  if (2e-05 <= fVar10) {
    fVar10 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(fVar10)));
    local_28 = local_28 * fVar10;
    local_24 = local_24 * fVar10;
    fStack_20 = fStack_20 * fVar10;
  }
  fVar10 = local_24 * 0.0 + local_28 * local_1c + fStack_20 * local_14;
  fVar7 = (float10)FUN_000235d0(param_1 + 0x1ec,pfVar6);
  fVar1 = (float10)param_3;
  uVar5 = CONCAT22(extraout_var,
                   (ushort)(fVar7 < fVar1) << 8 | (ushort)(isnan(fVar7) || isnan(fVar1)) << 10 |
                   (ushort)(fVar7 == fVar1) << 0xe);
  if ((fVar7 >= fVar1) ||
     (uVar5 = CONCAT31((int3)(CONCAT22(extraout_var,
                                       (ushort)(fVar10 < 0.3) << 8 | (ushort)isnan(fVar10) << 10 |
                                       (ushort)(fVar10 == 0.3) << 0xe) >> 8),1), fVar10 >= 0.3)) {
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}
