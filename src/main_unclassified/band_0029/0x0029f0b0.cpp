/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7829B1D0DD9A5AC6808814C44A36E46455FCC7873E9B7F68A93553D3FA485C5
 * Entry: 0x0029f0b0, Ghidra index: 9483, label: FUN_0029f0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original Xbox 0x0029F0B0 uses four 32-bit caller stack arguments,
 * preserving EDI as the transform-source object, EBX as scalar query,
 * EBP as the callback context and ESI as the 3x4 output float matrix.
 * Calls to the per-channel +0x1C interface method return float32 in
 * x87 ST(0), then FSTP to independent guest DWORDs before consumption.
 * The old Ghidra draft mistakenly treated several of those FLOATs as
 * host pointers. The virtual x87 return ABI and the implicit ESI
 * matrix destination of FUN_00212280 remain ABI_UNVERIFIED for native
 * builds; this code is a checked C11 source model, not a linked game. */
undefined4 FUN_0029f0b0(int *source, float query, int *context, float *matrix)
{
  uint32_t flags = (uint32_t)source[2];
  if ((flags & UINT32_C(0x1ff)) == UINT32_C(0x1ff)) {
    /* XBE 0x0029F0C6..F1: identity 3x3, zero translation. */
    matrix[0] = 1.0f; matrix[1] = 0.0f; matrix[2] = 0.0f;
    matrix[3] = 0.0f; matrix[4] = 1.0f; matrix[5] = 0.0f;
    matrix[6] = 0.0f; matrix[7] = 0.0f; matrix[8] = 1.0f;
    matrix[9] = 0.0f; matrix[10] = 0.0f; matrix[11] = 0.0f;
    return 0;
  }
  bool build_rotation = (flags & UINT32_C(0x38)) != UINT32_C(0x38);
  if (build_rotation) {
    /* Original 0x29F12C, 0x29F13C, 0x29F14C each FSTP the
     * sampled x87 float to a separate caller stack DWORD. */
    int *a = (int *)(uintptr_t)(uint32_t)source[7];
    int *b = (int *)(uintptr_t)(uint32_t)source[6];
    int *c = (int *)(uintptr_t)(uint32_t)source[8];
    float a_value = (float)(float10)(**(code **)(*a + 0x1c))(a,query,context);
    float b_value = (float)(float10)(**(code **)(*b + 0x1c))(b,query,context);
    float c_value = (float)(float10)(**(code **)(*c + 0x1c))(c,query,context);
    /* XBE 0x29F15C..0x29F164: PUSH a, PUSH b, PUSH c;
     * in C left-to-right parameters therefore c, b, a.
     * Helper consumes the native-missing ESI output register. */
    FUN_00212280(c_value,b_value,a_value);
  }

  if ((flags & UINT32_C(0x1c0)) == UINT32_C(0x1c0)) {
    if (!build_rotation) {
      /* Original 0x29F25E..0x29F27D identity without translation. */
      matrix[0] = 1.0f; matrix[1] = 0.0f; matrix[2] = 0.0f;
      matrix[3] = 0.0f; matrix[4] = 1.0f; matrix[5] = 0.0f;
      matrix[6] = 0.0f; matrix[7] = 0.0f; matrix[8] = 1.0f;
    }
  } else if (build_rotation) {
    /* XBE 0x29F18A and 0x29F199 store two FSTP float32 words.
     * The third call at 0x29F1A5 leaves x87 ST(0) as multiplier
     * for the final three rows (three repeated FMUL/FSTP). */
    int *a = (int *)(uintptr_t)(uint32_t)source[9];
    int *b = (int *)(uintptr_t)(uint32_t)source[10];
    int *c = (int *)(uintptr_t)(uint32_t)source[11];
    float s0 = (float)(float10)(**(code **)(*a + 0x1c))(a,query,context);
    float s1 = (float)(float10)(**(code **)(*b + 0x1c))(b,query,context);
    float s2 = (float)(float10)(**(code **)(*c + 0x1c))(c,query,context);
    matrix[0] *= s0; matrix[1] *= s0; matrix[2] *= s0;
    matrix[3] *= s1; matrix[4] *= s1; matrix[5] *= s1;
    matrix[6] *= s2; matrix[7] *= s2; matrix[8] *= s2;
  } else {
    /* XBE 0x29F211, 0x29F221 and 0x29F231:
     * original query order source[11], source[9], source[10],
     * with FSTP at each original x87 callback return.
     * The resulting scale matrix has only the diagonal set. */
    int *a = (int *)(uintptr_t)(uint32_t)source[11];
    int *b = (int *)(uintptr_t)(uint32_t)source[9];
    int *c = (int *)(uintptr_t)(uint32_t)source[10];
    float s2 = (float)(float10)(**(code **)(*a + 0x1c))(a,query,context);
    float s1 = (float)(float10)(**(code **)(*b + 0x1c))(b,query,context);
    float s0 = (float)(float10)(**(code **)(*c + 0x1c))(c,query,context);
    matrix[0] = s0; matrix[1] = 0.0f; matrix[2] = 0.0f;
    matrix[3] = 0.0f; matrix[4] = s1; matrix[5] = 0.0f;
    matrix[6] = 0.0f; matrix[7] = 0.0f; matrix[8] = s2;
  }

  if ((flags & 7) == 7) {
    matrix[9] = 0.0f; matrix[10] = 0.0f; matrix[11] = 0.0f;
    return 0;
  }
  /* XBE 0x29F28C..0x29F2D3: sample source[5], [4], [3]
   * in that exact order, FSTP to three independent guest DWORDs,
   * then store into translation matrix[11], [10], [9].
   * Pointer-valued decompiler locals were overlapping float words. */
  int *a = (int *)(uintptr_t)(uint32_t)source[5];
  int *b = (int *)(uintptr_t)(uint32_t)source[4];
  int *c = (int *)(uintptr_t)(uint32_t)source[3];
  float tz = (float)(float10)(**(code **)(*a + 0x1c))(a,query,context);
  float ty = (float)(float10)(**(code **)(*b + 0x1c))(b,query,context);
  float tx = (float)(float10)(**(code **)(*c + 0x1c))(c,query,context);
  matrix[9] = tx; matrix[10] = ty; matrix[11] = tz;
  return 0;
}
