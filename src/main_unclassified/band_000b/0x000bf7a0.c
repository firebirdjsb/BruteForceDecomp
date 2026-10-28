/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 762D235EBA97653EA681FA7726DE9FCF54CD4D582A8662525AAC0420ED6163F7
 * Entry: 0x000bf7a0, Ghidra index: 2333, label: FUN_000bf7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
#include "../../contracts/bf_000a0c60_memory_operation.h"
/* 0x6dfc0 reads four stack words and RET 16; its existing definition agrees.
 * Explicit float argument widths avoid default double promotion. Its body,
 * virtual calls and original guest entry remain ABI_UNVERIFIED. */
extern void FUN_0006dfc0(int *, float *, float, float);

static __m128 bf_000bf7a0_load_xyz(const float *words)
{
  /* Original memory MOVSS clears lanes 1..3; MOVHPS loads Y/Z into 2/3. */
  return _mm_loadh_pi(_mm_load_ss(words), (const __m64 *)(words + 1));
}

static void bf_000bf7a0_store_xyz(float *words, __m128 lanes)
{
  /* Original four-byte MOVSS then eight-byte MOVHPS, without a lane-1 store. */
  _mm_store_ss(words, lanes);
  _mm_storeh_pi((__m64 *)(words + 1), lanes);
}
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c053c;
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039f73c;
/* XBE 0x000BF8B2 pushes 0x000A3D50 as a callback to 0x0001FE40.
 * Target 0x000A3D50 is MOV EAX,ECX; RET (guest32 register identity).
 * Host callback calling convention is NOT established by this declaration. */
extern uint32_t FUN_000a3d50(uint32_t guest_ecx);
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_000bf7a0(int param_1,int param_2,int *param_3,undefined4 *param_4,float *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float fVar12;
  /* Low scalar only: original RCPSS at 0x000BF942. */
  int iStack_1e8;
  int *piStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  float guest_vec_2c[3];
  float guest_vec_54[3];
  float guest_vec_6c[3];
  float guest_scale_18;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int *piStack_19c;
  int *local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 auStack_180 [24];
  undefined **appuStack_120 [65];
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  cVar5 = FUN_000bf6d0(param_1,param_2);
  if (cVar5 == '\0') {
    return 0;
  }
  iVar9 = *(int *)(param_2 + 0xe0);
  iVar8 = *(int *)(iVar9 + 0x2e8);
  piVar1 = *(int **)(param_2 + 0x10);
  local_198 = piVar1;
  cVar5 = (**(code **)(*(int *)(iVar8 + 0x144) + 0x20))();
  if ((((cVar5 != '\0') && (iStack_1ac = *(int *)(iVar8 + 0x164), iStack_1ac != 0)) &&
      (*(int *)(*(int *)(iStack_1ac + 0xc) + 4) == 0x14)) && (iStack_1ac != 0)) {
    iVar8 = *(int *)(iVar9 + 0x2e8);
    cVar5 = (**(code **)(*(int *)(iVar8 + 0x178) + 0x20))();
    if (cVar5 == '\0') {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x198);
    }
    fVar11 = (float10)FUN_00232520();
    iVar6 = (**(code **)(*DAT_00469b54 + 0x48))();
    fStack_1d8 = (float)fVar11 * *(float *)(iVar6 + 0x18c);
    if (iVar8 != 0) {
      fVar11 = (float10)FUN_00232520();
      iVar6 = (**(code **)(*DAT_00469b54 + 0x48))();
      fVar12 = (float)fVar11 * *(float *)(iVar6 + 0x18c);
      if (fVar12 < fStack_1d8) {
        fStack_1d8 = fVar12;
        iStack_1ac = iVar8;
      }
    }
    fStack_1d8 = fStack_1d8 * fStack_1d8;
    FUN_0001fe40(auStack_180,0xc,8,FUN_000a3d50);
    if (DAT_003c053c == '\0') {
      iStack_1a8 = (**(code **)(*param_3 + 0x130))(auStack_180,8);
    }
    else {
      pfVar7 = (float *)(**(code **)(*param_3 + 0x134))();
      FUN_000ab390(*(undefined4 *)(param_2 + 0xf0),&iStack_1d4);
      /* 0xbf90d/0xbf91c supplies the same twelve bytes read at 0xbf946. */
      FUN_0006dfc0(piVar1,guest_vec_2c,(float)iStack_1d4,(float)iStack_1d0);
      fVar11 = (float10)(**(code **)(piVar1[0x12] + 0x24))();
      /* XBE 0x000BF92C stores ST0 to m32fp, 0x000BF938 loads
       * MOVSS into XMM1, and 0x000BF942 applies approximate RCPSS.
       * No float-to-uint conversion or 16-byte array assignment. */
      fVar12 = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss((float)fVar11)));
      /* 0xbf946..0xbf959: all four MULPS lanes, including 0*reciprocal. */
      bf_000bf7a0_store_xyz(guest_vec_2c,
          _mm_mul_ps(bf_000bf7a0_load_xyz(guest_vec_2c), _mm_set1_ps(fVar12)));
      fStack_184 = pfVar7[5] + pfVar7[2];
      fStack_188 = pfVar7[4] + pfVar7[1];
      fStack_18c = *pfVar7 + pfVar7[3];
      guest_vec_6c[0] = fStack_18c;
      guest_vec_6c[1] = fStack_188;
      guest_vec_6c[2] = fStack_184;
      /* 0xbf99a..0xbf9bb: broadcast 0.5 is the LEFT MULPS operand. */
      bf_000bf7a0_store_xyz(guest_vec_54,
          _mm_mul_ps(_mm_set1_ps(0.5f), bf_000bf7a0_load_xyz(guest_vec_6c)));
      iVar8 = (**(code **)(*piVar1 + 0x40))();
      /* 0xbf9ee/0xbf9f2/0xbf9f6 bind EDX/EAX/ECX for 0xa0c60.
       * Original EAX survives as the output address; its +8 word is used.
       * The preceding virtual receiver/return ABI remains unverified. */
      bf_000a0c60_produce(guest_vec_6c,
          (const void *)(uintptr_t)(uint32_t)iVar8, guest_vec_54);
      guest_scale_18 = -guest_vec_6c[2];
      bf_000bf7a0_store_xyz(guest_vec_2c,
          _mm_mul_ps(bf_000bf7a0_load_xyz(guest_vec_2c),
                     _mm_set1_ps(guest_scale_18)));
      /* 0xbfa2f..0xbfa56: three x87 additions, each FSTP m32fp. */
      guest_vec_2c[0] = (float)((float10)guest_vec_2c[0] +
                              (float10)*(float *)(iVar8 + 0x24));
      guest_vec_2c[1] = (float)((float10)guest_vec_2c[1] +
                              (float10)*(float *)(iVar8 + 0x28));
      guest_vec_2c[2] = (float)((float10)guest_vec_2c[2] +
                              (float10)*(float *)(iVar8 + 0x2c));
      FUN_0015b450(pfVar7,guest_vec_2c,auStack_180);
      iStack_1a8 = 1;
    }
    uStack_1c = 0;
    uStack_18 = 1;
    uStack_c = 0;
    appuStack_120[0] = &PTR_LAB_0039f73c;
    uStack_14 = 0xfffffff8;
    uStack_10 = 0x400000;
    iStack_8 = *(int *)(iVar9 + 0x6c);
    iStack_4 = iStack_8;
    if (*(int *)(iStack_8 + 0x10) != 0) {
      iStack_4 = *(int *)(iStack_8 + 8);
    }
    uStack_190 = 0x3f99999a;
    if (*(int **)(param_1 + 8) != param_3) {
      uStack_190 = 0x3f800000;
    }
    iStack_1e8 = 0;
    if (0 < iStack_1a8) {
      puVar10 = auStack_180;
      do {
        cVar5 = FUN_000bff40(param_1,fStack_1d8,puVar10);
        if (cVar5 != '\0') {
          fStack_1b0 = 0.0;
          uStack_194 = 0;
          iStack_1d4 = 0;
          cVar5 = FUN_0006e270(&iStack_1d4,&uStack_194,&fStack_1b0,puVar10);
          uVar2 = uStack_194;
          iVar9 = iStack_1d4;
          if ((cVar5 != '\0') && (fStack_1b0 < 206.0 != (fStack_1b0 == 206.0))) {
            FUN_000beb40(param_1,param_2,iStack_1d4,uStack_194,uStack_190,&fStack_1dc,&fStack_1c0);
            *param_5 = fStack_1dc;
            param_5[1] = 0.0;
            param_5[2] = fStack_1b0;
            if (*(float *)(param_1 + 0x44) < fStack_1c0) {
              cVar5 = FUN_000bfeb0();
              if (cVar5 == '\0') {
                piStack_1e0 = (int *)0x0;
                iVar9 = FUN_000becf0(param_1,&piStack_1e0,local_198,iVar9,uVar2,appuStack_120,
                                     &uStack_1bc,0x43800000);
                if (piStack_1e0 == (int *)0x0) {
                  if (iVar9 != 1) {
                    *(float *)(param_1 + 0x44) = fStack_1c0;
                    FUN_0012ac00();
                    if (*(float *)(param_1 + 0x40) < fStack_1dc) goto LAB_000bfc49;
                  }
                }
                else if (piStack_1e0 == param_3) {
                  FUN_000be9c0();
                  *(float *)(param_1 + 0x44) = fStack_1c0;
                  FUN_0012ac00();
                  if (*(float *)(param_1 + 0x40) < fStack_1dc) {
                    *(float *)(param_1 + 0x40) = fStack_1dc;
                    *(undefined4 *)(param_1 + 0x1c) = uStack_1bc;
                    *(undefined4 *)(param_1 + 0x20) = uStack_1b8;
                    *(undefined4 *)(param_1 + 0x24) = uStack_1b4;
                    if (param_4 != (undefined4 *)0x0) {
                      *param_4 = uStack_1bc;
                      param_4[1] = uStack_1b8;
                      param_4[2] = uStack_1b4;
                    }
                    return 1;
                  }
                }
              }
              else {
                FUN_000be9c0();
                *(float *)(param_1 + 0x44) = fStack_1c0;
                FUN_0012ac00();
                if (*(float *)(param_1 + 0x40) < fStack_1dc) {
LAB_000bfc49:
                  *(float *)(param_1 + 0x40) = fStack_1dc;
                  uVar2 = puVar10[2];
                  uVar3 = puVar10[1];
                  *(undefined4 *)(param_1 + 0x1c) = *puVar10;
                  *(undefined4 *)(param_1 + 0x20) = uVar3;
                  *(undefined4 *)(param_1 + 0x24) = uVar2;
                  if (param_4 != (undefined4 *)0x0) {
                    uVar2 = puVar10[2];
                    uVar3 = puVar10[1];
                    *param_4 = *puVar10;
                    param_4[1] = uVar3;
                    param_4[2] = uVar2;
                  }
                  return 1;
                }
              }
            }
          }
        }
        iStack_1e8 = iStack_1e8 + 1;
        puVar10 = puVar10 + 3;
      } while (iStack_1e8 < iStack_1a8);
    }
  }
  return 0;
}
