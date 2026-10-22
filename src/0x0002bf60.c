/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B33CBC085A87E7C4F7CA2DEBA5E1513EAC9401C7937F34B51CEA6AA6FD6D8EFF
 * Entry: 0x0002bf60, Ghidra index: 293, label: FUN_0002bf60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Original RSQRTSS affects low scalar lane; upper lanes not consumed. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cc18;
undefined4 FUN_0002bf60(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  float fVar9;
  __m128 reciprocal_sqrt_low_lane;
  int local_180;
  int local_17c;
  int local_178;
  undefined4 local_174;
  char cStack_16d;
  undefined4 local_16c;
  undefined1 local_168 [64];
  undefined **local_128 [73];
  
  local_16c = 1;
  piVar5 = (int *)FUN_000120f0();
  piVar6 = (int *)FUN_00049ca0();
  if (in_ECX[0xfb] == 0) {
    FUN_00055a60(in_ECX + 0xf7);
  }
  iVar7 = FUN_000388b0(in_ECX[0xc6]);
  if ((piVar6 == (int *)0x0) || (iVar7 == 0)) {
    return 2;
  }
  if (((*(byte *)(in_ECX + 0x165) & 1) != 0) && ((*(byte *)(in_ECX + 0x165) >> 1 & 1) != 0)) {
    FUN_000124f0(0x40400000);
    FUN_00023b20(0x25);
    FUN_00023990(piVar5,0x41700000);
    FUN_0004d520(local_128,local_168);
    local_128[0] = &PTR_LAB_0039cc18;
    FUN_00012440();
  }
  switch(in_ECX[0x15b]) {
  case 0:
    (**(code **)in_ECX[0x15f])(in_ECX[0x100]);
    if (((*(byte *)(in_ECX + 0x161) & 1) == 0) || ((*(byte *)(in_ECX + 0x161) >> 1 & 1) == 0)) {
      FUN_00024f80(in_ECX + -0x10,piVar6,0x41c80000,0);
      iVar7 = (**(code **)(*piVar5 + 0x40))();
      iVar8 = (**(code **)(*piVar6 + 0x40))();
      fVar1 = *(float *)(iVar8 + 0x2c) - *(float *)(iVar7 + 0x2c);
      fVar2 = *(float *)(iVar8 + 0x28) - *(float *)(iVar7 + 0x28);
      fVar3 = *(float *)(iVar8 + 0x24) - *(float *)(iVar7 + 0x24);
      reciprocal_sqrt_low_lane = _mm_rsqrt_ss(_mm_set_ss(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1));
      fVar9 = _mm_cvtss_f32(reciprocal_sqrt_low_lane);
      in_ECX[0x114] = (int)(fVar1 * fVar9);
      in_ECX[0x113] = (int)(fVar2 * fVar9);
      in_ECX[0x112] = (int)(fVar9 * fVar3);
    }
    else {
      in_ECX[0x15b] = 1;
    }
    break;
  case 1:
    piVar5[0x1f7] = 0;
    in_ECX[0x114] = 0;
    in_ECX[0x113] = 0;
    in_ECX[0x112] = 0;
    (**(code **)in_ECX[0x167])(in_ECX[0x100]);
    if (((*(byte *)(in_ECX + 0x169) & 1) != 0) && ((*(byte *)(in_ECX + 0x169) >> 1 & 1) != 0)) {
      in_ECX[0x16a] = 0;
      in_ECX[0x168] = 0;
      *(byte *)(in_ECX + 0x169) = *(byte *)(in_ECX + 0x169) & 0xfa | 2;
      iVar7 = (**(code **)(*in_ECX + 0x3b8))();
      if (iVar7 == 1) {
        *(undefined1 *)(in_ECX + 0x16b) = 1;
      }
    }
    cVar4 = FUN_00012620();
    if (cVar4 == '\0') {
      cVar4 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x40000000);
      cStack_16d = '\x01' - (cVar4 != '\0');
      local_178 = in_ECX[0x110];
      local_17c = in_ECX[0x10f];
      local_180 = in_ECX[0x10e];
      if (cStack_16d != '\0') {
        iVar7 = FUN_00055aa0();
        *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 2;
        (**(code **)(*in_ECX + 8))();
        in_ECX[0x15b] = 2;
      }
      FUN_000255d0(param_1,0);
      FUN_0004d970(in_ECX + -0x10,param_1,3,1,1);
    }
    break;
  case 2:
    cVar4 = FUN_00126ba0();
    if (cVar4 == '\0') {
      (**(code **)(*in_ECX + 0x10))(param_1);
    }
    else {
      FUN_00023a80(0x26);
      FUN_00023990(piVar5,0x42200000);
      FUN_0004d520(local_128,local_168);
      in_ECX[0x15b] = 3;
      local_128[0] = &PTR_LAB_0039cc18;
      FUN_00012440();
    }
    break;
  case 3:
    if ((char)in_ECX[0x16b] == '\0') {
      local_16c = 2;
      break;
    }
    goto LAB_0002c377;
  }
  if ((char)in_ECX[0x16b] != '\0') {
LAB_0002c377:
    local_178 = 0;
    local_17c = 0;
    local_180 = 0;
    local_174 = 0;
    iVar7 = (**(code **)(*in_ECX + 0x3c0))(&local_180);
    if (iVar7 == 2) {
      FUN_000124f0(0x40000000);
      *(undefined1 *)(in_ECX + 0x16b) = 0;
    }
  }
  return local_16c;
}
