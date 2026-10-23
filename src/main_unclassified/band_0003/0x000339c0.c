/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64931A14C63F1A1B1E36135CBF137515C284A96D3A61F34EB06F00BEBFAD94D5
 * Entry: 0x000339c0, Ghidra index: 336, label: FUN_000339c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
void FUN_000339c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  *(int *)(param_1 + 0x680) = param_2;
  piVar1 = (int *)FUN_000120f0();
  iVar2 = (**(code **)(*piVar1 + 0x40))();
  fStack_4 = *(float *)(param_2 + 0x1c) - *(float *)(iVar2 + 0x2c);
  fStack_8 = *(float *)(param_2 + 0x18) - *(float *)(iVar2 + 0x28);
  fStack_c = *(float *)(param_2 + 0x14) - *(float *)(iVar2 + 0x24);
  /* 0x00033a15-0x00033a3b: sum fStack_4^2 + fStack_8^2, then
   * fStack_c^2, round to a 4-byte float and apply RSQRTSS. Only the
   * low 32-bit result is consumed; x87 intermediate precision is unverified. */
  fVar3 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(
      (fStack_4 * fStack_4 + fStack_8 * fStack_8) + fStack_c * fStack_c)));
  fStack_c = fVar3 * fStack_c;
  fStack_8 = fStack_8 * fVar3;
  fStack_4 = fStack_4 * fVar3;
  FUN_000337f0(param_1,&fStack_c,0x3f7ae148);
  return;
}
