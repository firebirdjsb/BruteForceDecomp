/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5198363B57C1445C18EA998D8A4A22AE2692E841CA77E1520C0D04E37120939
 * Entry: 0x00217920, Ghidra index: 7468, label: FUN_00217920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra SSE scalar opcode model; only observed low lane is reconstructed.
 * Original ABI, upper lanes and game behavior remain UNVERIFIED. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00407058;
extern uint32_t DAT_0046cfdc;
extern uint32_t PTR_FUN_003bc654;
void FUN_00217920(int *param_1,int param_2,float *param_3,float *param_4,float *param_5,
                 float param_6,float param_7,undefined4 param_8,int param_9)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  __m128 auVar10;
  int local_554;
  float local_54c;
  float local_548;
  float local_544;
  float local_540;
  char local_539;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  int local_518;
  float fStack_514;
  float local_510;
  float local_50c;
  float local_508;
  float fStack_504;
  float local_500;
  float local_4fc;
  int local_4f8;
  float fStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  float fStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float local_474;
  float local_470;
  float local_46c;
  undefined4 *apuStack_468 [5];
  int local_454;
  undefined1 local_42c [16];
  undefined1 auStack_41c [12];
  undefined4 local_410;
  uint local_40c;
  undefined1 *local_408;
  undefined1 local_404 [1028];
  
  /* XBE 0x00217940 MOVSS and 0x00217946 MAXSS select the scalar
   * float32 bound.  The result is stored as one F32 stack word at
   * 0x0021794C.  No integer widening into an SSE vector occurs.
   * MAXSS also retains the original unordered/NaN choice semantics. */
  fVar1 = _mm_cvtss_f32(_mm_max_ss(_mm_set_ss(param_6),_mm_set_ss(param_7)));
  local_500 = (1.0 / param_7) * 0.5;
  local_4fc = (1.0 / param_6) * 0.5;
  if (*(float *)(param_9 + 0x34) != 0.0) {
    DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
    FUN_0001fc70(local_42c,param_4,
                 ((float)(DAT_0046cfdc >> 9 | 0x40000000) - 3.0) * *(float *)(param_9 + 0x34));
    param_5 = (float *)FUN_0001fb70(local_42c,&local_4a0,param_5);
  }
  local_508 = param_5[2];
  local_50c = param_5[1];
  local_510 = *param_5;
  local_474 = fVar1 + *param_3;
  local_408 = local_404;
  local_470 = fVar1 + param_3[1];
  iVar7 = 0;
  local_46c = fVar1 + param_3[2];
  local_48c = *param_3 - fVar1;
  local_488 = param_3[1] - fVar1;
  local_484 = param_3[2] - fVar1;
  local_410 = 0x100;
  local_40c = 0;
  local_4cc = *param_3;
  local_4c4 = param_3[2];
  local_4c8 = param_3[1];
  local_4c0 = 0;
  local_498 = param_3[1];
  local_4a0 = *(undefined4 *)(*param_1 + 0xa40);
  local_540 = param_3[2];
  local_49c = *param_3;
  local_494 = local_540;
  local_490 = fVar1;
  FUN_000d1420(fVar1);
  if (local_454 != 0) {
    cVar9 = *(int *)(param_9 + 0x38) == 0;
    local_539 = cVar9;
    FUN_000d1420(fVar1);
    iVar4 = FUN_002ea01d(0x28);
    if (iVar4 == 0) {
      local_518 = 0;
    }
    else {
      local_518 = FUN_00213770(iVar4,param_9,param_8,0,0,0xffffffff);
    }
    local_540 = 0.0;
    local_54c = 0.0;
    local_548 = 0.0;
    local_544 = 0.0;
    local_4f8 = 0;
    if (!(bool)cVar9) {
      iVar7 = FUN_002ea01d(0x10);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 4) = 0;
        *(undefined4 *)(iVar7 + 8) = 0;
        *(undefined4 *)(iVar7 + 0xc) = 0;
      }
    }
    local_540 = 0.0;
joined_r0x00217bf0:
    if (local_454 != 0) {
      if ((*(int *)(local_454 + 8) != 0) || (FUN_001f35b0(0x3f800000), *(int *)(local_454 + 8) != 0)
         ) {
        local_540 = (float)((int)local_540 + 1);
        if (local_540 == 1.4013e-45) {
          *(int *)(local_518 + 0xc) = local_454;
        }
        else if (1 < (int)local_540) {
          *(undefined4 *)(local_518 + 0xc) = 0xffffffff;
        }
        (**(code **)(**(int **)(*(int *)(local_454 + 8) + 0x7c) + 0x10))
                  (&local_4cc,fVar1,0,0,0,&local_410);
        local_554 = 0;
        if (0 < (int)(local_40c * 2)) {
          do {
            piVar8 = *(int **)(local_408 + local_554 * 4);
            if (cVar9 != '\0') {
              fStack_52c = local_510 * param_4[1] - local_50c * *param_4;
              fStack_530 = local_508 * *param_4 - local_510 * param_4[2];
              fStack_534 = local_50c * param_4[2] - local_508 * param_4[1];
              fStack_538 = 1.0 / SQRT(fStack_52c * fStack_52c +
                                      fStack_530 * fStack_530 + fStack_534 * fStack_534);
              fStack_534 = fStack_534 * fStack_538;
              fStack_530 = fStack_530 * fStack_538;
              fStack_52c = fStack_52c * fStack_538;
            }
            iVar4 = *piVar8;
            iVar5 = 0;
            puVar6 = (uint *)(piVar8 + 5);
            do {
              apuStack_468[iVar5] = (undefined4 *)((int)piVar8 + (*puVar6 & 0xffff) * 0x10 + iVar4);
              iVar5 = iVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (iVar5 < 3);
            if (cVar9 != '\0') {
              fStack_520 = fStack_530 * *param_4 - fStack_534 * param_4[1];
              fStack_4b8 = fStack_534 * param_4[2] - fStack_52c * *param_4;
              fStack_538 = fStack_52c * param_4[1] - fStack_530 * param_4[2];
              fStack_4f4 = fStack_538 * fStack_538 +
                           fStack_4b8 * fStack_4b8 + fStack_520 * fStack_520;
              auVar10 = _mm_rsqrt_ss(_mm_set_ss(fStack_4f4));
              fStack_51c = _mm_cvtss_f32(auVar10);
              fStack_528 = fStack_51c * fStack_538;
              fStack_524 = fStack_4b8 * fStack_51c;
              fStack_520 = fStack_520 * fStack_51c;
            }
            uStack_4e8 = apuStack_468[0][2];
            uStack_4ec = apuStack_468[0][1];
            uStack_4f0 = *apuStack_468[0];
            uStack_4dc = apuStack_468[1][2];
            uStack_4e0 = apuStack_468[1][1];
            uStack_4e4 = *apuStack_468[1];
            uStack_4d0 = apuStack_468[2][2];
            uStack_4d4 = apuStack_468[2][1];
            uStack_4d8 = *apuStack_468[2];
            uStack_4bc = uStack_4d0;
            uStack_4b4 = uStack_4ec;
            uStack_4b0 = uStack_4e8;
            uStack_4ac = uStack_4d4;
            uStack_4a8 = uStack_4e0;
            uStack_4a4 = uStack_4dc;
            if (cVar9 == '\0') {
              cVar9 = FUN_00216430(param_1,&uStack_4e4,&local_48c,param_3,fVar1,&local_4a0,
                                   &fStack_514,&fStack_480);
              if (cVar9 != '\0') {
                iVar4 = FUN_002ea01d(0x40);
                if (iVar4 == 0) {
                  fStack_538 = 0.0;
                }
                else {
                  fStack_538 = (float)FUN_00217860(&uStack_4f0,&uStack_4e4,&uStack_4d8,fStack_514);
                }
                iVar4 = *(int *)(iVar7 + 4);
                if ((iVar4 == 0) ||
                   ((uint)(*(int *)(iVar7 + 0xc) - iVar4 >> 2) <=
                    (uint)(*(int *)(iVar7 + 8) - iVar4 >> 2))) {
                  FUN_000a7d80(*(undefined4 *)(iVar7 + 8),&fStack_538);
                }
                else {
                  iVar4 = *(int *)(iVar7 + 8);
                  FUN_0003efa0(iVar4,1,iVar7,fStack_514);
                  *(int *)(iVar7 + 8) = iVar4 + 4;
                }
                local_54c = local_54c + fStack_480;
                local_4f8 = local_4f8 + 1;
                local_548 = local_548 + fStack_47c;
                local_544 = local_544 + fStack_478;
              }
            }
            else {
              cVar9 = FUN_00216430(param_1,&uStack_4e4,&local_48c,param_3,fVar1,auStack_41c,
                                   &fStack_504,local_42c);
              if (cVar9 != '\0') {
                FUN_00216560(param_1,local_518 + 0x10,param_3,fVar1,local_500,local_4fc,&fStack_534,
                             &fStack_528,param_4,&uStack_4f0,&uStack_4e4,&uStack_4d8,local_42c,
                             auStack_41c,fStack_504,DAT_00407058);
              }
            }
            local_554 = local_554 + 1;
            cVar9 = local_539;
          } while (local_554 < (int)(local_40c * 2) >> 1);
        }
        local_40c = local_40c & 0x80000000;
      }
      do {
        cVar3 = FUN_000d14d0();
        if (cVar3 == '\0') {
          local_454 = 0;
          break;
        }
      } while (local_454 == 0);
      goto joined_r0x00217bf0;
    }
    local_454 = 0;
    if (cVar9 == '\0') {
      if (0 < local_4f8) {
        fVar2 = 1.0 / (float)local_4f8;
        local_54c = local_54c * fVar2;
        local_548 = fVar2 * local_548;
        fVar2 = fVar2 * local_544;
        fStack_51c = 1.0 / SQRT(local_54c * local_54c + local_548 * local_548 + fVar2 * fVar2);
        local_54c = fStack_51c * local_54c;
        local_548 = fStack_51c * local_548;
        local_544 = fStack_51c * fVar2;
        fStack_52c = local_510 * local_548 - local_50c * local_54c;
        fStack_530 = local_508 * local_54c - local_510 * local_544;
        fStack_534 = local_50c * local_544 - local_508 * local_548;
        fVar2 = 1.0 / SQRT(fStack_534 * fStack_534 +
                           fStack_530 * fStack_530 + fStack_52c * fStack_52c);
        fStack_534 = fStack_534 * fVar2;
        fStack_530 = fStack_530 * fVar2;
        fStack_52c = fStack_52c * fVar2;
        fStack_504 = fStack_530 * local_54c - fStack_534 * local_548;
        fStack_514 = fStack_534 * local_544 - fStack_52c * local_54c;
        fStack_528 = fStack_52c * local_548 - fStack_530 * local_544;
        fStack_520 = 1.0 / SQRT(fStack_528 * fStack_528 +
                                fStack_514 * fStack_514 + fStack_504 * fStack_504);
        fStack_528 = fStack_528 * fStack_520;
        fStack_524 = fStack_514 * fStack_520;
        fStack_520 = fStack_504 * fStack_520;
        piVar8 = *(int **)(iVar7 + 4);
        if (piVar8 != *(int **)(iVar7 + 8)) {
          do {
            iVar4 = *piVar8;
            FUN_00216560(param_1,local_518 + 0x10,param_3,fVar1,local_500,local_4fc,&fStack_534,
                         &fStack_528,&local_54c,iVar4,iVar4 + 0xc,iVar4 + 0x18,iVar4 + 0x30,
                         iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x3c),DAT_00407058);
            piVar8 = piVar8 + 1;
          } while (piVar8 != *(int **)(iVar7 + 8));
        }
        if (*(undefined4 **)(iVar7 + 4) != *(undefined4 **)(iVar7 + 8)) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(**(undefined4 **)(iVar7 + 4));
        }
      }
      if (iVar7 != 0) {
        if (*(int *)(iVar7 + 4) == 0) {
          *(undefined4 *)(iVar7 + 4) = 0;
          *(undefined4 *)(iVar7 + 8) = 0;
          *(undefined4 *)(iVar7 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(iVar7);
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(int *)(iVar7 + 4));
      }
    }
    iVar7 = local_518;
    if ((int)local_540 < 1) {
      if (local_518 != 0) {
        FUN_00213810();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar7);
      }
    }
    else {
      iVar7 = *(int *)(param_2 + 4);
      iVar4 = FUN_000ff730(param_2,iVar7,*(undefined4 *)(iVar7 + 4),&local_518);
      FUN_000b2a50();
      *(int *)(iVar7 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  if (((int)local_40c < 0) && (local_408 != (undefined1 *)0x0)) {
    (*(code *)PTR_FUN_003bc654)(local_408);
    return;
  }
  return;
}
