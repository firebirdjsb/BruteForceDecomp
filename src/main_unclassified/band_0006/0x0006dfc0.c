/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB8D19C22EC7C4C248DA7329C705E6673926F9E7FB9AA9B82127F011FAD87928
 * Entry: 0x0006dfc0, Ghidra index: 1235, label: FUN_0006dfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0006dfc0(int *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float10 fVar11;
  __m128 guest_scale;
  __m128 guest_output_xyz;
  float local_6c;
  float local_68;
  
  local_6c = 1.0;
  local_68 = 1.0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    fVar11 = (float10)(**(code **)(param_1[0x12] + 0x2c))();
    local_6c = (float)fVar11;
    fVar11 = (float10)(**(code **)(param_1[0x12] + 0x1c))();
    local_68 = (float)fVar11;
    FUN_0006e450(param_1[0x33]);
    iVar7 = param_1[0x14];
    if (*(float *)(iVar7 + 0x2c) != local_6c) {
      *(float *)(iVar7 + 0x2c) = local_6c;
      *(float *)(iVar7 + 0x28) = *(float *)(iVar7 + 0x24) / local_6c;
      FUN_0006ad90();
    }
    FUN_0006c840(param_1);
  }
  iVar7 = param_1[0x14];
  fVar8 = (param_3 - *(float *)(iVar7 + 0x30)) / *(float *)(iVar7 + 0x38);
  fVar9 = (param_4 - *(float *)(iVar7 + 0x34)) / *(float *)(iVar7 + 0x3c);
  pfVar10 = (float *)(**(code **)(*param_1 + 0x40))();
  fVar1 = pfVar10[8];
  fVar2 = pfVar10[5];
  fVar3 = pfVar10[7];
  fVar4 = pfVar10[4];
  fVar5 = pfVar10[6];
  fVar6 = pfVar10[3];
  *param_2 = (fVar9 * pfVar10[1] + fVar8 * *pfVar10) - pfVar10[2];
  param_2[1] = (fVar9 * fVar4 + fVar8 * fVar6) - fVar2;
  param_2[2] = (fVar9 * fVar3 + fVar8 * fVar5) - fVar1;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x14] + 0x24))();
  fVar1 = (float)fVar11;
  /* 0x6e1f6..0x6e213: MOVSS/SHUFPS broadcasts the m32fp scalar.
   * Memory MOVSS/MOVHPS forms [X,0,Y,Z]; MULPS uses all four lanes.
   * The old numeric conversion of packed Y/Z bits was not a float load. */
  guest_scale = _mm_set1_ps(fVar1);
  guest_output_xyz = _mm_loadh_pi(_mm_load_ss(param_2), (const __m64 *)(param_2 + 1));
  guest_output_xyz = _mm_mul_ps(guest_output_xyz, guest_scale);
  _mm_store_ss(param_2, guest_output_xyz);
  _mm_storeh_pi((__m64 *)(param_2 + 1), guest_output_xyz);
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    FUN_0006e450(local_68 + local_68);
    iVar7 = param_1[0x14];
    if (*(float *)(iVar7 + 0x2c) != local_6c) {
      *(float *)(iVar7 + 0x2c) = local_6c;
      *(float *)(iVar7 + 0x28) = *(float *)(iVar7 + 0x24) / local_6c;
      FUN_0006ad90();
    }
    FUN_0006c840(param_1);
  }
  return;
}
