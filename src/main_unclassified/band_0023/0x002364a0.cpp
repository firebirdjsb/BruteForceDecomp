/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 481188FE8A17BC940F6605348A7FAD5A2A40EF16F625CA07748108367DF48CFB
 * Entry: 0x002364a0, Ghidra index: 7830, label: FUN_002364a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra SSE scalar low lane only; no verified ABI or Xbox runtime equivalence.
 * High-lane vector contents remain unmodeled. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002364a0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  undefined1 in_XMM0 [16];
  __m128 auVar8;
  
  fVar3 = in_EDX[2] - in_ECX[2];
  fVar4 = in_EDX[1] - in_ECX[1];
  fVar5 = *in_EDX - *in_ECX;
  fVar6 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  fVar7 = param_1 - *unaff_ESI;
  if (fVar7 * fVar7 < fVar6) {
    auVar8 = _mm_rsqrt_ss(_mm_set_ss(fVar6));
    fVar7 = _mm_cvtss_f32(auVar8) * fVar7;
    fVar1 = in_EDX[2];
    fVar2 = in_EDX[1];
    *in_ECX = (*in_ECX + *in_EDX + fVar7 * fVar5) * 0.5;
    in_ECX[1] = (fVar7 * fVar4 + in_ECX[1] + fVar2) * 0.5;
    in_ECX[2] = (fVar7 * fVar3 + in_ECX[2] + fVar1) * 0.5;
    *unaff_ESI = (_mm_cvtss_f32(auVar8) * fVar6 + *unaff_ESI + param_1) * 0.5;
    return;
  }
  if (*unaff_ESI < param_1) {
    fVar3 = in_EDX[2];
    fVar4 = in_EDX[1];
    *in_ECX = *in_EDX;
    in_ECX[1] = fVar4;
    in_ECX[2] = fVar3;
    *unaff_ESI = param_1;
  }
  return;
}
