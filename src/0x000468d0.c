/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0A37F850988ADFFF7CF49C0F2B7C661AE2ABA6BA621D5BE303A68C85142D3B1
 * Entry: 0x000468d0, Ghidra index: 551, label: FUN_000468d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar low-lane opcode model; unobserved upper lanes omitted.
 * Original x86 ABI/behavior still ABI_UNVERIFIED. */
undefined4 FUN_000468d0(undefined4 param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  undefined4 uVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  undefined1 in_XMM0 [16];
  __m128 auVar13;
  undefined4 local_24;
  int *local_20;
  
  piVar6 = (int *)FUN_000120f0();
  iVar7 = FUN_000388b0(in_ECX[0xc6]);
  if ((iVar7 != 0) && ((iVar8 = *(int *)(iVar7 + 100), iVar8 == 0 || ((2 < iVar8 && (iVar8 < 5))))))
  {
    iVar7 = 0;
  }
  iVar8 = FUN_000120f0();
  if ((iVar8 == 0) || (*(int *)(iVar8 + 0x59c) == 0)) {
    local_20 = (int *)0x0;
  }
  else {
    local_20 = (int *)FUN_0005bca0();
  }
  local_24 = 3;
  if (local_20 != (int *)0x0) {
    if (local_20 == piVar6) {
      return 1;
    }
    if ((iVar7 == 0) || (*(float *)(iVar7 + 0x14) < 1.5)) {
      in_ECX[0x114] = 0;
      in_ECX[0x113] = 0;
      in_ECX[0x112] = 0;
      if ((in_ECX[0x23d] != 0) && ((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18 != 0)) {
        local_24 = 4;
      }
    }
    else {
      piVar1 = *(int **)(iVar7 + 4);
      FUN_00024f80(in_ECX + -0x10,piVar1,0x41a00000,0);
      iVar7 = (**(code **)(*piVar6 + 0x40))();
      iVar8 = (**(code **)(*piVar1 + 0x40))();
      fVar2 = *(float *)(iVar8 + 0x2c) - *(float *)(iVar7 + 0x2c);
      fVar3 = *(float *)(iVar8 + 0x28) - *(float *)(iVar7 + 0x28);
      fVar4 = *(float *)(iVar8 + 0x24) - *(float *)(iVar7 + 0x24);
      auVar13 = _mm_rsqrt_ss(_mm_set_ss(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2));
      fVar12 = _mm_cvtss_f32(auVar13);
      in_ECX[0x114] = (int)(fVar2 * fVar12);
      in_ECX[0x113] = (int)(fVar3 * fVar12);
      in_ECX[0x112] = (int)(fVar12 * fVar4);
      local_24 = 3;
    }
    if ((in_ECX[0x23d] == 0) || ((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18 == 0)) {
      iVar7 = (**(code **)(*in_ECX + 0x498))();
      if (iVar7 == 0) {
        return 0;
      }
    }
    else {
      cVar5 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x40000000);
      if (cVar5 == '\0') {
        iVar7 = FUN_00055aa0();
        *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 2;
        return 1;
      }
      FUN_000255d0(param_1,0);
      FUN_0004d970(in_ECX + -0x10,param_1,local_24,1,1);
    }
    (**(code **)(*local_20 + 0x40))();
    (**(code **)(*piVar6 + 0x40))();
    fVar10 = (float10)FUN_00039460();
    iVar7 = FUN_000120f0();
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x1b4) + 8))();
    fVar11 = (float10)*(float *)(iVar7 + 0x38) * (float10)0.5;
    if (in_ECX[6] == 1) {
      fVar11 = (float10)FUN_00045230();
      fVar11 = fVar11 * (float10)0.9;
    }
    uVar9 = 1;
    if ((float10)(float)fVar10 < fVar11 * fVar11) {
      piVar6 = *(int **)(in_ECX[0xc6] + 4);
      piVar1 = (int *)*piVar6;
      while( true ) {
        if (piVar1 == piVar6) {
          uVar9 = FUN_000464d0();
          return uVar9;
        }
        if ((piVar1[0x1c] == 1) && (((uint)piVar1[0x23] >> 3 & 1) != 0)) break;
        FUN_0001c5d0();
      }
      uVar9 = 2;
    }
    return uVar9;
  }
  return 0;
}
