/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17C8478E869C4EF8E38119BFCF0B5E22D536D43BFA521C190E254FB96843EF2C
 * Entry: 0x0011e1d0, Ghidra index: 3626, label: FUN_0011e1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar low lane, not an exact source/ABI reconstruction.
 * Original upper XMM lanes and machine-code correspondence remain unverified. */
void FUN_0011e1d0(int param_1)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  float fVar5;
  undefined1 in_XMM0 [16];
  __m128 auVar6;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_c [12];
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x1fc) + 0x251);
  bVar4 = ~(bVar1 >> 4) & 1;
  if ((*(int *)(param_1 + 0x64c) == 0) && (*(char *)(param_1 + 0x670) == '\0')) {
    if ((*(byte *)(param_1 + 0x7d8) & 0x10) == 0) {
      if ((((bVar1 & 2) != 0) && ((*(byte *)(param_1 + 0x262) & 8) == 0)) &&
         (iVar2 = (**(code **)(*(int *)(param_1 + 0x1b4) + 0x2c))(&local_24),
         fVar5 = ABS(*(float *)(iVar2 + 4) - -0.15), fVar5 < 0.1 != (fVar5 == 0.1))) {
        pfVar3 = (float *)FUN_0001fdd0();
        local_1c = -pfVar3[2];
        local_20 = -pfVar3[1];
        local_24 = -*pfVar3;
        pfVar3 = (float *)(**(code **)(*(int *)(param_1 + 0x1b4) + 0x30))(local_c);
        if (0.95 < local_24 * *pfVar3 + local_1c * pfVar3[2] + local_20 * pfVar3[1]) {
          bVar4 = 0;
        }
      }
    }
    else {
      bVar4 = 0;
    }
  }
  else {
    bVar4 = 1;
  }
  if (((*(byte *)(param_1 + 0x70) & 1) == 0) && (bVar4 != 0)) {
    if ((*(byte *)(param_1 + 0x262) & 8) == 0) {
      local_1c = -*(float *)(*(int *)(param_1 + 0x6c) + 0x34);
      local_24 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
      auVar6 = _mm_rsqrt_ss(_mm_set_ss(local_24 * local_24 + local_1c * local_1c));
      fVar5 = _mm_cvtss_f32(auVar6);
      local_24 = fVar5 * local_24;
      local_20 = fVar5 * 0.0;
      local_1c = local_1c * fVar5;
      pfVar3 = (float *)(**(code **)(*(int *)(param_1 + 0x1b4) + 0x30))(local_c);
      fVar5 = local_24 * *pfVar3 + local_20 * pfVar3[1] + local_1c * pfVar3[2];
      if (fVar5 < 0.1 != (fVar5 == 0.1)) goto LAB_0011e3d2;
    }
    if (*(int *)(param_1 + 0x274) == -1) {
      FUN_0011f720();
      return;
    }
  }
  else {
LAB_0011e3d2:
    if (*(int *)(param_1 + 0x274) != -1) {
      FUN_0011fcd0();
    }
  }
  return;
}
