/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAE593E47823155D8211412EBE892D46F8807AF683369BAAF818B83CCC645587
 * Entry: 0x000718f0, Ghidra index: 1269, label: FUN_000718f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <stdint.h>
#include <string.h>

/* Raw F32 bits, not a numeric conversion of guest address bits.
 * Original x87 stores to m32fp and SSE MOVSS maintain 4-byte lanes. */
static float bf_000718f0_float_bits(uint32_t bits)
{
  float value;
  memcpy(&value,&bits,sizeof(value));
  return value;
}
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7f18;
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699b8;
float10 FUN_000718f0(int param_1,float *param_2,float param_3,float param_4,undefined4 param_5,
                    float param_6)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  float local_334;
  float *local_330;
  float *local_32c;
  float *local_328;
  float local_324;
  float local_320 [4];
  float *local_310;
  float *local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float *local_2f8;
  /* The original stack DWORDs are reused across different lifetimes:
   * the 0x3F060A92 F32 angle increment, a stored FSIN result,
   * the six F32 radius scales, and a later pointer to result data.
   * Keep their scalar lives separate from host pointer storage. */
  float guest_angle_step;
  float guest_sin_component;
  float guest_radius_scale;
  float guest_quarter_radius;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  undefined8 local_2e4;
  float local_218;
  undefined8 local_214 [22];
  float afStack_164 [16];
  undefined1 local_124 [292];
  
  guest_angle_step = bf_000718f0_float_bits(UINT32_C(0x3f060a92));
  local_304 = 0.5;
  local_300 = 1.0;
  local_2fc = 0.5;
  fVar3 = (float10)fcos((float10)(0.08726647 - param_4));
  fVar13 = (float10)fsin((float10)(0.08726647 - param_4));
  local_320[0] = (float)fVar3;
  local_320[2] = (float)fVar13;
  /* The former pointer-typed local_330 is an FSIN m32fp lane
   * until the later guest data-buffer address assignment. */
  local_324 = -param_4 - 0.08726647;
  fVar3 = (float10)fcos((float10)local_324);
  fVar13 = (float10)fsin((float10)local_324);
  local_320[1] = (float)fVar3;
  local_320[3] = (float)fVar13;
  local_2f8 = &guest_sin_component;
  local_30c = &local_324;
  local_308 = (param_3 + 3.1415927) - 0.5235988;
  pfVar10 = afStack_164 + 1;
  iVar9 = 0;
  pfVar12 = &local_218;
  do {
    local_334 = local_308;
    *pfVar10 = local_304;
    pfVar10[1] = local_300;
    pfVar10[2] = local_2fc;
    iVar11 = 3;
    pfVar10 = pfVar10 + 3;
    pfVar8 = pfVar12;
    do {
      fVar3 = (float10)fcos((float10)local_334);
      fVar13 = (float10)fsin((float10)local_334);
      *local_30c = (float)fVar3;
      *local_2f8 = (float)fVar13;
      fVar1 = *(float *)((int)local_320 + iVar9);
      pfVar8[1] = *(float *)((int)local_320 + iVar9 + 8);
      iVar11 = iVar11 + -1;
      fVar2 = *(float *)((int)local_320 + iVar9);
      pfVar8[2] = -(local_324 * fVar1);
      *pfVar8 = -(guest_sin_component * fVar2);
      local_334 = local_334 + guest_angle_step;
      pfVar8 = pfVar8 + 3;
    } while (iVar11 != 0);
    iVar9 = iVar9 + 4;
    pfVar12 = pfVar12 + 9;
  } while (iVar9 < 8);
  local_2ec = param_2[2];
  local_2f0 = param_2[1];
  local_2f4 = *param_2;
  iVar11 = 1;
  iVar9 = 0;
  do {
    local_32c = (float *)((int)&local_218 + iVar9);
    guest_radius_scale = param_6 * afStack_164[iVar11];
    local_328 = (float *)((int)&local_2e8 + iVar9);
    *local_328 = *local_32c * guest_radius_scale;
    *(ulonglong *)((int)&local_2e4 + iVar9) =
         CONCAT44((float)((ulonglong)*(undefined8 *)((int)local_214 + iVar9) >> 0x20) *
                  guest_radius_scale,(float)*(undefined8 *)((int)local_214 + iVar9) * guest_radius_scale
                 );
    iVar11 = iVar11 + 1;
    *local_328 = *param_2 + *local_328;
    *(float *)((int)&local_2e4 + iVar9) = param_2[1] + *(float *)((int)&local_2e4 + iVar9);
    *(float *)((int)&local_2e4 + iVar9 + 4) = param_2[2] + *(float *)((int)&local_2e4 + iVar9 + 4);
    iVar9 = iVar9 + 0xc;
  } while (iVar11 < 7);
  FUN_0006ef40();
  uVar6 = FUN_00152a50(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc54),local_124);
  if (uVar6 != 0) {
    if (*(int *)(DAT_004699b4 + 4) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)(DAT_004699b4 + 8) - *(int *)(DAT_004699b4 + 4) >> 2;
    }
    if (uVar7 < uVar6) {
      FUN_0024a600(0);
    }
    local_330 = *(float **)(DAT_004699b8 + 4);
    if (0 < (int)uVar6) {
      pfVar10 = local_330;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pfVar10 = 0.0;
        pfVar10 = pfVar10 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)pfVar10 = 0;
        pfVar10 = (float *)((int)pfVar10 + 1);
      }
    }
    guest_quarter_radius = param_6 * 0.25f;
    local_334 = 1.4013e-45;
    bVar4 = true;
    do {
      if (!bVar4) break;
      iVar11 = 1;
      param_6 = param_6 - guest_quarter_radius;
      iVar9 = 0;
      do {
        local_310 = (float *)((int)&local_218 + iVar9);
        guest_radius_scale = param_6 * afStack_164[iVar11];
        local_32c = (float *)((int)&local_2e8 + iVar9);
        *local_32c = *local_310 * guest_radius_scale;
        *(ulonglong *)((int)&local_2e4 + iVar9) =
             CONCAT44((float)((ulonglong)*(undefined8 *)((int)local_214 + iVar9) >> 0x20) *
                      guest_radius_scale,
                      (float)*(undefined8 *)((int)local_214 + iVar9) * guest_radius_scale);
        iVar11 = iVar11 + 1;
        *local_32c = *local_32c + *param_2;
        *(float *)((int)&local_2e4 + iVar9) = param_2[1] + *(float *)((int)&local_2e4 + iVar9);
        *(float *)((int)&local_2e4 + iVar9 + 4) =
             param_2[2] + *(float *)((int)&local_2e4 + iVar9 + 4);
        iVar9 = iVar9 + 0xc;
      } while (iVar11 < 7);
      iVar9 = *(int *)(DAT_004699b0 + 4);
      bVar4 = false;
      iVar11 = 0;
      if (0 < (int)uVar6) {
        do {
          if (*(char *)((int)local_330 + iVar11) != '\x01') {
            cVar5 = FUN_00167c40(iVar9,iVar9 + 0xc,iVar9 + 0x18,&local_2f4,7);
            if (cVar5 == '\x01') {
              bVar4 = true;
              break;
            }
            *(undefined1 *)((int)local_330 + iVar11) = 1;
          }
          iVar11 = iVar11 + 1;
          iVar9 = iVar9 + 0x54;
        } while (iVar11 < (int)uVar6);
      }
      local_334 = (float)((int)local_334 + 1);
    } while ((int)local_334 < 4);
    if (local_334 == 5.60519e-45) {
      param_6 = DAT_003f7f18;
    }
  }
  return (float10)param_6;
}
