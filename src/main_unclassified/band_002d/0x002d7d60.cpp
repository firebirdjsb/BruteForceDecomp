/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14E56198BC63A97D04124BF257E30A22779E312632229AD2891664E20A2E24D7
 * Entry: 0x002d7d60, Ghidra index: 10248, label: FUN_002d7d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h> /* original 0x002D7FD3 RSQRTSS */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86f0;
undefined4 FUN_002d7d60(int *param_1,uint *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  float10 fVar12;
  float guest_inverse_length;
  float fVar13;
  float fVar14;
  float local_7c;
  int *local_78;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  undefined4 local_54;
  undefined4 local_44;
  undefined4 local_34;
  float local_30 [3];
  undefined4 local_24;
  float local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  in_ECX[1] = in_ECX[1] + -1;
  if ((in_ECX[1] < 0) && (iVar5 = FUN_002c15b0(0,param_2), iVar5 != 0)) {
    return 2;
  }
  local_24 = 0;
  local_14 = 0;
  FUN_00150930();
  iVar5 = *param_1;
  pfVar6 = (float *)(iVar5 + 0x40);
  FUN_002b7910(param_3[2],pfVar6,local_30);
  local_54 = 0;
  uVar1 = *(undefined8 *)(iVar5 + 0x44);
  local_60 = *pfVar6 - local_20;
  local_5c = (float)uVar1 - (float)local_1c;
  fStack_58 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)local_1c >> 0x20);
  fVar12 = (float10)FUN_002b6500(&local_60);
  iVar5 = *in_ECX;
  *(float *)(iVar5 + 100) = local_5c;
  *(float *)(iVar5 + 0x60) = local_60;
  *(float *)(iVar5 + 0x68) = fStack_58;
  *(float *)(*in_ECX + 0x54) = (float)(fVar12 - (float10)*(float *)(*in_ECX + 0x50));
  local_44 = 0;
  uVar1 = *(undefined8 *)(*param_1 + 0x54);
  uVar2 = *(undefined8 *)(param_3[2] + 0x54);
  iVar5 = *in_ECX;
  local_7c = 0.0;
  local_78 = (int *)0x0;
  *(float *)(iVar5 + 0x58) =
       (*(float *)(*param_1 + 0x50) - *(float *)(param_3[2] + 0x50)) * *(float *)(iVar5 + 0x60) +
       ((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20)) *
       *(float *)(iVar5 + 0x68) + ((float)uVar1 - (float)uVar2) * *(float *)(iVar5 + 100);
  pfVar6 = (float *)((*param_2 & 0xffff) * 0x10 + *param_3);
  local_34 = 0;
  /* MOVSS/MOVHPS preserve three adjacent 32-bit float words; this is
   * XYZ subtraction, not numeric conversion of a packed uint64. */
  fVar13 = local_30[1] - pfVar6[1];
  fVar14 = local_30[2] - pfVar6[2];
  piVar10 = (int *)((int)param_2 + *(int *)(&DAT_003b86f0 + ((uint)param_2 & 0xc)));
  piVar7 = piVar10 + ((*piVar10 << 1) >> 0x11);
  while( true ) {
    piVar9 = (int *)(*(int *)(&DAT_003b86f0 + ((uint)piVar7 & 0xc)) + (int)piVar7);
    pfVar11 = (float *)((*(uint *)(*(int *)(&DAT_003b86f0 + ((uint)piVar7 & 0xc)) + (int)piVar7) &
                        0xffff) * 0x10 + *param_3);
    fVar3 = ((local_30[0] - *pfVar6) * *pfVar11 + fVar14 * pfVar11[2] + fVar13 * pfVar11[1]) -
            (fVar14 * pfVar6[2] + fVar13 * pfVar6[1] + (local_30[0] - *pfVar6) * *pfVar6);
    if (0.0 < fVar3) {
      /* Original x87 XYZ dot product stores a rounded float32 to
       * [ESP+0x20]; RSQRTSS at 0x002D7FD3 reads exactly that lane. */
      float dx = *pfVar11 - *pfVar6;
      float dy = pfVar11[1] - pfVar6[1];
      float dz = pfVar11[2] - pfVar6[2];
      float guest_length_sq = (dz * dz + dy * dy) + dx * dx;
      guest_inverse_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));
      fVar4 = guest_inverse_length * fVar3;
      if (local_7c < fVar4) {
        local_7c = fVar4;
        local_78 = piVar9;
      }
    }
    if (piVar9 == piVar10) break;
    piVar7 = piVar9 + ((*piVar9 << 1) >> 0x11);
  }
  if ((local_78 != (int *)0x0) && (FUN_002cd190(local_30), local_64 < 0.0 == (local_64 == 0.0))) {
    if (0.0 <= fVar3) {
      uVar8 = FUN_002d86e0(param_1,local_78,param_3);
      return uVar8;
    }
    uVar8 = FUN_002d7d60(param_1,local_78,param_3);
    return uVar8;
  }
  iVar5 = param_3[4];
  *(uint **)(iVar5 + 0x14) = param_2;
  *(undefined2 *)(iVar5 + 0x1a) = 0;
  return 1;
}
