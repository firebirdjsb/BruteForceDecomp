/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80C2A63D64FAD4C47F5885C9845DA25BF670BC67D50C0FF06AF6C64BF4EBB4E7
 * Entry: 0x00157260, Ghidra index: 4484, label: FUN_00157260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
#include <xmmintrin.h>
_Static_assert(sizeof(float) == 4, "original binary32 storage");

/* All offsets below are byte offsets observed in the original instructions,
 * not inferred structure fields. memcpy preserves the four-byte IEEE words
 * without C aliasing violations or numeric integer/float conversions. */
static float bf_157260_load_f32(const void *base, size_t offset)
{
  float value;
  memcpy(&value, (const unsigned char *)base + offset, 4);
  return value;
}

static void bf_157260_store_f32(void *base, size_t offset, float value)
{
  memcpy((unsigned char *)base + offset, &value, 4);
}

/* Internal storage operation for 0x15741b..0x1574a9, NOT an entry ABI.
 * The three x87 sums round to m32 at FSTP before the SSE multiplication.
 * ABI_UNVERIFIED: host long double does not establish the Xbox x87 precision,
 * rounding mode, exception flags/traps or NaN propagation. No fast-math.
 * Only the first three DWORDs of the earlier five-DWORD object are reused. */
static void bf_157260_sum_scale(void *object, const void *other,
                               uint32_t scratch[5])
{
  float sums[3], scaled[3];
  __m128 half, vector;
  /* Original load/add/store order is +f0/+2c, +ec/+28, then +e8/+24. */
  sums[2] = (float)((long double)bf_157260_load_f32(object, 0xf0) +
                   (long double)bf_157260_load_f32(other, 0x2c));
  sums[1] = (float)((long double)bf_157260_load_f32(object, 0xec) +
                   (long double)bf_157260_load_f32(other, 0x28));
  sums[0] = (float)((long double)bf_157260_load_f32(object, 0xe8) +
                   (long double)bf_157260_load_f32(other, 0x24));
  half = _mm_set_ss(0.5f); /* Immediate m32 word 0x3f000000 at 0x157421. */
  half = _mm_shuffle_ps(half, half, 0);
  vector = _mm_load_ss(sums); /* Memory MOVSS clears upper 96 bits. */
  vector = _mm_loadh_pi(vector, (const __m64 *)(sums + 1));
  /* MULPS lanes are [sum0, +0, sum1, sum2], not a packed XYZ0 vector. */
  vector = _mm_mul_ps(half, vector);
  _mm_store_ss(scaled, vector);
  _mm_storeh_pi((__m64 *)(scaled + 1), vector);
  memcpy(scratch, scaled, 12); /* Stores at stack S+48/S+4c/S+50. */
  memcpy((unsigned char *)object + 0xe8, scratch, 4);
  memcpy((unsigned char *)object + 0xec, scratch + 1, 4);
  memcpy((unsigned char *)object + 0xf0, scratch + 2, 4);
}
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00157260(byte param_1)

{
  float fVar1;
  undefined4 *puVar2;
  long double fVar3;
  float factor;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  int *piVar8;
  int iVar9;
  bool bVar10;
  float fStack_40;
  int *piStack_24;
  uint32_t stack_words[5];
  int local_8;
  
  bVar4 = false;
  if (((*(byte *)(in_ECX + 0x1c) & 1) == 0) && (param_1 == 1)) {
    local_8 = 0;
    if ((*(int *)(in_ECX[3] + 4) == 3) &&
       (((iVar5 = (**(code **)(*in_ECX + 0xf4))(), iVar5 != 0 &&
         (iVar5 = *(int *)(iVar5 + 0x45c), iVar5 != 0)) &&
        (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 3)))) {
      local_8 = iVar5;
    }
    /* 0x1572bc..0x1572dd: contiguous 20-byte object at S+0x48, where
     * S is ESP after the four saved-register pushes. The original PUSH
     * changes store offsets by four. These are guest DWORDs, not host
     * pointers; the first is the immediate guest address 0x003a3fb4.
     * Callee receives ECX unchanged and this pointer on stack; existing
     * C call interface remains ABI_UNVERIFIED (caller ADD ESP,4). */
    stack_words[0] = UINT32_C(0x003a3fb4);
    stack_words[4] = UINT32_MAX;
    stack_words[1] = 6;
    stack_words[3] = (uint32_t)local_8;
    stack_words[2] = 0;
    FUN_001fe3d0(stack_words);
    bVar10 = ((byte)in_ECX[0x6b] & 3) != 1;
    if ((*(int *)(in_ECX[3] + 0x14c) != 0) || (!bVar10)) {
      *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) | 0x40;
      *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) | 0x80;
      FUN_000dff10(in_ECX[2]);
      if (bVar10) {
        puVar2 = *(undefined4 **)(in_ECX[3] + 0x148);
        fStack_40 = 0.0;
        piVar7 = (int *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          piVar7 = (int *)*puVar2;
        }
        piVar8 = *(int **)(in_ECX[3] + 0x148);
        piStack_24 = piVar8;
        if (piVar7 != piVar8) {
          do {
            if (fStack_40 < bf_157260_load_f32(piVar7, 0x10)) {
              /* 0x15738e..0x157391 copies a raw DWORD, not an integer. */
              memcpy(&fStack_40, (unsigned char *)piVar7 + 0x10, 4);
            }
            iVar5 = FUN_00160da0(0xffffffff,1);
            if (iVar5 != 0) {
              if (*(int *)(iVar5 + 4) == 0x11) {
                fVar1 = *(float *)(in_ECX[2] + 0xc58);
                iVar9 = *(int *)(iVar5 + 0xe4);
                iVar5 = *(int *)(iVar5 + 0xe8);
                if (iVar9 != iVar5) {
                  /* 0x1573d2..0x1573ea: x87 chain then one m32 spill.
                   * Exact input words: 3f800000, 3ecccccd, 3f19999a.
                   * Host extended precision/control remains unverified. */
                  factor = (float)(((long double)1.0f - (long double)fVar1) *
                                   (long double)0x1.99999ap-2f +
                                   (long double)0x1.333334p-1f);
                  do {
                    fVar3 = (long double)factor * *(float *)(iVar9 + 8);
                    /* FCOM precedes FSTP m32: do not round before comparing. */
                    if ((long double)bf_157260_load_f32(in_ECX, 0x100) < fVar3) {
                      bf_157260_store_f32(in_ECX, 0x100, (float)fVar3);
                      iVar6 = (**(code **)(*in_ECX + 0x40))();
                      bf_157260_sum_scale(in_ECX, (const void *)(uintptr_t)(uint32_t)iVar6,
                                         stack_words);
                    }
                    iVar9 = iVar9 + 0x1c;
                  } while (iVar9 != iVar5);
                }
              }
              if ((int *)in_ECX[0x67] == (int *)0x0) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)in_ECX[0x67];
              }
              iVar9 = FUN_00155150(in_ECX + 0x66,iVar5,*(undefined4 *)(iVar5 + 4),piVar7 + 2);
              FUN_0017a4b0();
              *(int *)(iVar5 + 4) = iVar9;
              **(int **)(iVar9 + 4) = iVar9;
              piVar8 = piStack_24;
            }
            piVar7 = (int *)*piVar7;
          } while (piVar7 != piVar8);
        }
        /* 0x15751e..0x157522 copies the maximum's binary32 storage. */
        memcpy((unsigned char *)in_ECX + 0xd4, &fStack_40, 4);
      }
      else {
        in_ECX[0x35] = 0;
      }
      if (((*(byte *)((int)in_ECX + 0x26) & 0x10) == 0) && (in_ECX[2] != 0)) {
        piVar7 = (int *)FUN_000e0350(in_ECX[2],&piStack_24,in_ECX);
        in_ECX[5] = *piVar7;
        *(byte *)((int)in_ECX + 0x26) = *(byte *)((int)in_ECX + 0x26) | 0x10;
      }
    }
    FUN_001575d0(in_ECX);
    if (*(int *)(in_ECX[3] + 4) == 3) {
      bVar4 = true;
    }
  }
  *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) ^ (*(byte *)(in_ECX + 0x1c) ^ param_1) & 1;
  if ((bVar4) && (*(int *)(in_ECX[2] + 0x1f8) != 0)) {
    FUN_00057140();
    FUN_00056fe0(*(undefined4 *)(in_ECX[2] + 0x1f8),in_ECX,0);
  }
  return;
}
