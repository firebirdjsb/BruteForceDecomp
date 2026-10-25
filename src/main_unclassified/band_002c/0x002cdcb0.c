/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68716AE5D7FBAD548E962AD224159A916537D7438301229D54137F5A5B96C875
 * Entry: 0x002cdcb0, Ghidra index: 10172, label: FUN_002cdcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
float10 FUN_002cdcb0(undefined4 param_1)

{
  uint *in_EAX;
  int *in_ECX;
  float *pfVar1;
  float *pfVar2;
  float local_10 [3];
  undefined4 local_4;
  __m128 vector;
  __m128 squared;
  __m128 sum;
  
  pfVar2 = (float *)((*(uint *)((int)in_EAX + *(int *)(&DAT_003b86e0 + ((uint)in_EAX & 0xc))) &
                     0xffff) * 0x10 + *in_ECX + (int)in_ECX);
  pfVar1 = (float *)((*in_EAX & 0xffff) * 0x10 + *in_ECX + (int)in_ECX);
  local_4 = 0;
  FUN_002ccc10(local_10,pfVar1,pfVar2,param_1);
  vector = _mm_load_ss(local_10);
  vector = _mm_loadh_pi(vector,(const __m64 *)(local_10 + 1));
  squared = _mm_mul_ps(vector,vector);
  sum = _mm_shuffle_ps(_mm_undefined_ps(),squared,0x80);
  sum = _mm_add_ps(sum,squared);
  sum = _mm_shuffle_ps(sum,sum,0x03);
  sum = _mm_add_ss(sum,squared);
  return ((float10)1.0 /
         ((float10)(*pfVar1 - *pfVar2) * (float10)(*pfVar1 - *pfVar2) +
         (float10)(pfVar1[1] - pfVar2[1]) * (float10)(pfVar1[1] - pfVar2[1]) +
         (float10)(pfVar1[2] - pfVar2[2]) * (float10)(pfVar1[2] - pfVar2[2]))) *
         (float10)_mm_cvtss_f32(sum);
}
