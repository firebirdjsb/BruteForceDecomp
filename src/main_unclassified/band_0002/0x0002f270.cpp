/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96B4BA7A1A3AB1E0B4D1AC6021874B9D129062D5437D8201040CA35F44872C27
 * Entry: 0x0002f270, Ghidra index: 312, label: FUN_0002f270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
#include <xmmintrin.h>
/* Retain the explicit x87-proxy operations and m32fp spill boundaries when
 * optimizing. This does not supply original x87/MXCSR state or exception ABI. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00055a60(void);
extern undefined4 FUN_00055aa0(void);
extern int FUN_000388b0(int param_1);
extern void FUN_00023b20(undefined4 param_1);
extern void FUN_00023990(undefined4 param_1,undefined4 param_2);
extern void FUN_0004d520(int *param_1);
extern undefined4 FUN_00023d00(void);
extern void FUN_00020170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern uint FUN_000594a0(int param_1,undefined4 *param_2,int param_3);
extern void FUN_0011dfa0(void);
extern char FUN_000416a0(int param_1,uint param_2);
extern undefined4 FUN_00025730(int param_1,undefined4 param_2,int param_3);
extern undefined4 FUN_0004c480(float *param_1);
extern void FUN_00012600(uint32_t in_EAX, int32_t in_ECX);
extern void FUN_000233d0(void);
extern int FUN_0005bca0(void);
extern void FUN_0002f140(void);
extern void FUN_00045250(undefined4 param_1,undefined4 param_2,int *param_3);
extern int FUN_00140a60(int param_1,int *param_2);

#pragma STDC FENV_ACCESS ON
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a400c;
extern uint32_t PTR_LAB_0039cc18;
undefined4 FUN_0002f270(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  float *pfVar13;
  float fVar14;
  undefined4 local_3fc;
  /* S = ESP after SUB ESP,0x3fc and saved EBX/EBP/ESI/EDI.
   * S+0x14/+0x18/+0x1c are three adjacent raw DWORDs. The earlier query
   * record and the later float3 share these bytes in the original frame.
   * ABI_UNVERIFIED: host stack addresses still need guest-memory binding. */
  uint32_t scratch_3f8[3];
  float *local_3ec;
  int *local_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  int iStack_3d4;
  byte bStack_3d0;
  undefined1 auStack_3cc [88];
  undefined **appuStack_374 [72];
  undefined1 auStack_254 [4];
  int aiStack_250 [64];
  int iStack_150;
  byte bStack_10;
  
  *(undefined4 *)(param_1 + 0x544) = param_2;
  *(undefined4 *)(param_1 + 0x548) = param_3;
  local_3fc = 0;
  piVar7 = (int *)FUN_000120f0();
  if (*(int *)(param_1 + 0x42c) == 0) {
    FUN_00055a60(param_1 + 0x41c);
  }
  local_3ec = (float *)(*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c));
  uVar8 = (int)local_3ec - 1;
  if (*(uint *)(param_1 + 0x424) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(param_1 + 0x424);
  }
  piVar12 = *(int **)(*(int *)(*(int *)(param_1 + 0x420) + uVar8 * 4) + 0x58);
  local_3e4 = piVar12;
  iVar9 = (**(code **)(*piVar7 + 0x40))();
  pfVar13 = (float *)(iVar9 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x3c4);
  local_3ec = pfVar13;
  if (piVar12 != (int *)0x0) {
    FUN_00055aa0();
    iVar9 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358));
    if ((iVar9 != 0) && ((*(uint *)(iVar9 + 0x80) >> 3 & 1) != 0)) {
      FUN_00023b20(0x25);
      FUN_00023990(piVar7,0x41700000);
      FUN_0004d520(appuStack_374,auStack_3cc);
      cVar6 = FUN_00023d00();
      appuStack_374[0] = &PTR_LAB_0039cc18;
      if (cVar6 == '\0') {
        FUN_00012440();
        return 0;
      }
      FUN_00012440();
      pfVar13 = local_3ec;
    }
  }
  if (*(int *)(param_1 + 0x42c) == 0) {
    FUN_00055a60(param_1 + 0x41c);
  }
  local_3ec = (float *)(*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c));
  uVar8 = (int)local_3ec - 1;
  if (*(uint *)(param_1 + 0x424) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(param_1 + 0x424);
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x420) + uVar8 * 4) + 0x14) != 0) {
    iVar9 = FUN_00055aa0();
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x14) + 0x3c))();
    if (iVar9 == 10) {
      iVar9 = FUN_00055aa0();
      iVar9 = *(int *)(iVar9 + 0x14);
LAB_0002f44c:
      if (iVar9 == 0) {
        return 0;
      }
      goto LAB_0002f454;
    }
  }
  if (local_3e4 == (int *)0x0) {
    return 0;
  }
  FUN_00020170(piVar7,pfVar13,param_2,param_3);
  bStack_10 = bStack_10 ^ ((~(byte)((uint)uVar2 >> 8) & 1) << 2 ^ bStack_10) & 4;
  if (*(int *)(param_1 + 0x510) != 0) {
    aiStack_250[iStack_150] = *(int *)(param_1 + 0x510);
    iStack_150 = iStack_150 + 1;
  }
  scratch_3f8[1] = (uint32_t)(uintptr_t)auStack_254;
  scratch_3f8[0] = UINT32_C(0x003a400c); /* 0x2f749: literal guest code/data word. */
  scratch_3f8[2] = 10; /* 0x2f751: raw DWORD, not a numeric float conversion. */
  while( true ) {
    piVar7[0x94] = piVar7[0x94] | 1;
    (**(code **)(*piVar7 + 0x40))();
    bStack_3d0 = bStack_3d0 & 0xfd | 1;
    iVar9 = FUN_000594a0(piVar7[0x93],scratch_3f8,0);
    if (iVar9 != 0) break;
    if ((bStack_10 & 4) == 0) goto LAB_0002f44c;
    bStack_10 = bStack_10 & 0xfb;
  }
LAB_0002f454:
  iVar10 = FUN_00055aa0();
  if (((*(byte *)(iVar10 + 0x88) & 4) == 0) || ((*(byte *)(iVar9 + 0x28) & 1) == 0)) {
    bStack_3d0 = bStack_3d0 & 0xfc;
    uStack_3d8 = 0;
    uStack_3dc = 0;
    uStack_3e0 = 0;
    iStack_3d4 = iVar9;
    FUN_000120f0();
    FUN_0011dfa0();
    cVar6 = FUN_000416a0(param_1 + 0x930,1);
    if (cVar6 != '\0') {
      FUN_00025730(param_1 + 0x930,1,0);
      *(undefined4 *)(param_1 + 0x518) = 0;
      /* 0x2f508..0x2f523 keeps both differences in x87 until their
       * squared sum is spilled as m32fp at S+0x20. float10 remains a
       * host proxy, not a complete model of x87 precision/control. */
      float10 delta_x = (float10)*pfVar13 - (float10)*(float *)(iVar9 + 0x14);
      float10 delta_z = (float10)pfVar13[2] - (float10)*(float *)(iVar9 + 0x1c);
      float distance_squared = (float)(delta_x * delta_x + delta_z * delta_z);
      /* SQRTSS at 0x2f525 stores only its low DWORD. Upper guest XMM0
       * bits at calls/entry/exit remain unresolved; no packed use is modeled. */
      *(float *)(param_1 + 0x540) =
          _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(distance_squared)));
      /* 0x2f55d..0x2f570 reuses S+0x20 for a signed count. SUB wraps
       * in 32 bits; the IMUL/SAR/sign correction is signed division by 24. */
      uint32_t begin_word = *(uint32_t *)(param_1 + 0x934);
      if (begin_word != 0) {
        uint32_t span_bits = *(uint32_t *)(param_1 + 0x938) - begin_word;
        int32_t entry_count;
        memcpy(&entry_count, &span_bits, sizeof(entry_count));
        entry_count /= 24;
        if ((entry_count != 0) && (local_3e4 != (int *)0x0)) {
          (**(code **)(*local_3e4 + 0x40))();
          FUN_0004c480(param_1 + 0x488);
          FUN_00012650();
          FUN_00012600();
          puVar11 = (undefined4 *)FUN_000233d0();
          uVar2 = puVar11[2];
          uVar3 = puVar11[1];
          *(undefined4 *)(param_1 + 0x478) = *puVar11;
          *(undefined4 *)(param_1 + 0x480) = uVar2;
          *(undefined4 *)(param_1 + 0x47c) = uVar3;
          /* 0x2f606..0x2f631 keeps Z unspilled, loads receiver X, writes
           * +0.0 to Y, subtracts input X, then spills Z and X. Retain this
           * ordering rather than assuming the input cannot alias a slot.
           * The virtual call at 0x2f6ce receives this 12-byte base. */
          float10 vector_delta_z = (float10)*(float *)(param_1 + 0x480) -
                                   (float10)pfVar13[2];
          float10 vector_delta_x = (float10)*(float *)(param_1 + 0x478);
          scratch_3f8[1] = 0;
          vector_delta_x -= (float10)*pfVar13;
          scratch_3f8[2] = bf_x86_f32_word((float)vector_delta_z);
          scratch_3f8[0] = bf_x86_f32_word((float)vector_delta_x);
          *(uint *)(param_1 + 0x534) = *(uint *)(param_1 + 0x534) & 0xfffffeff;
          float10 norm_x = (float10)bf_x86_word_to_f32(scratch_3f8[0]);
          float10 norm_y = (float10)bf_x86_word_to_f32(scratch_3f8[1]);
          float10 norm_z = (float10)bf_x86_word_to_f32(scratch_3f8[2]);
          float10 norm_squared = (norm_x * norm_x + norm_y * norm_y) + norm_z * norm_z;
          /* FCOM at 0x2f663 precedes the FSTP at 0x2f674. TEST AH,0x41
           * rejects <= and unordered. Pinned m32fp threshold is 0x34000000. */
          if ((float10)0x1p-23f < norm_squared) {
            float reciprocal = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss((float)norm_squared)));
            /* The three original FMUL/FSTP pairs round to m32fp separately.
             * Preserve reciprocal*X, reciprocal*Y and Z*reciprocal order;
             * do not replace the explicit Y multiply with a constant zero. */
            scratch_3f8[0] = bf_x86_f32_word((float)((float10)reciprocal * norm_x));
            scratch_3f8[1] = bf_x86_f32_word((float)((float10)reciprocal * norm_y));
            scratch_3f8[2] = bf_x86_f32_word((float)(norm_z * (float10)reciprocal));
            *(uint *)(param_1 + 0x3c4) = *(uint *)(param_1 + 0x3c4) | 0x4000;
            (**(code **)(piVar7[0x6d] + 0x3c))(scratch_3f8);
          }
        }
      }
      *(uint *)(param_1 + 0x534) = *(uint *)(param_1 + 0x534) & 0xfffffffe;
      if (*(int *)(param_1 + 0x510) != 0) {
        puVar1 = (uint *)(*(int *)(param_1 + 0x510) + 0x28);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      *(int *)(param_1 + 0x510) = iVar9;
      *(uint *)(iVar9 + 0x28) = *(uint *)(iVar9 + 0x28) | 1;
      iVar9 = FUN_000120f0();
      if ((iVar9 == 0) || (*(int *)(iVar9 + 0x59c) == 0)) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = (int *)FUN_0005bca0();
      }
      if (piVar12 == piVar7) {
        FUN_0002f140();
        FUN_00012320(0x40);
        FUN_00045250(param_1,auStack_3cc,appuStack_374);
        FUN_00012440();
      }
      FUN_00140a60(*(undefined4 *)(piVar7[2] + 0xbe8),piVar7,0xe7ff021,0);
      fVar14 = 23.0;
      if (piVar7[0x167] != 0) {
        fVar14 = 10.0;
      }
      if (1.1920929e-07 < fVar14) {
        *(float *)(param_1 + 0x568) = fVar14;
        *(float *)(param_1 + 0x560) = fVar14;
        *(byte *)(param_1 + 0x564) = *(byte *)(param_1 + 0x564) & 0xf9 | 1;
      }
      local_3fc = 1;
    }
  }
  return local_3fc;
}
