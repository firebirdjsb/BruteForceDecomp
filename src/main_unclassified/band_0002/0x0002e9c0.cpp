/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 474C989663A63E2BA444EF3E0A19F584BB6FC6CBC1B4CE25E3786DEE3E939E1C
 * Entry: 0x0002e9c0, Ghidra index: 307, label: FUN_0002e9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra indicates scalar RCPSS; use the x86 low-lane approximation, not 1/x or 1/sqrt(x).
 * Upper XMM lanes are not reconstructed; original opcode/ABI remain UNVERIFIED. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0002e9c0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  __m128 auVar14;
  undefined4 local_e4;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_bc;
  
  piVar5 = (int *)FUN_000120f0();
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(in_ECX + 0x3dc);
  }
  uVar6 = (*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec)) - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar6) {
    uVar6 = uVar6 - *(uint *)(in_ECX + 0x3e4);
  }
  piVar8 = *(int **)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar6 * 4) + 0x58);
  iVar7 = 0;
  if ((piVar8 != (int *)0x0) && ((*(byte *)(piVar8 + 0x1c) & 1) == 0)) {
    iVar7 = FUN_000388b0(*(undefined4 *)(in_ECX + 0x318));
  }
  if (iVar7 == 0) {
    iVar7 = FUN_00055aa0();
    if ((*(uint *)(iVar7 + 0x88) >> 0xd & 1) == 0) {
      return 0;
    }
    iVar7 = FUN_00049c60();
    piVar8 = (int *)FUN_00049ca0();
  }
  local_d0 = 0.0;
  local_d4 = 0.0;
  local_d8 = 0.0;
  local_bc = 0.0;
  if ((piVar8 != (int *)0x0) && (iVar7 != 0)) {
    if ((*(int *)(in_ECX + 0x4a8) != 3) &&
       ((*(int *)(in_ECX + 0x4a8) != 1 && (cVar4 = FUN_00023d00(), cVar4 == '\0')))) {
      cVar4 = FUN_00023ee0();
      if (cVar4 == '\0') {
        FUN_00012320(0x5d);
        FUN_0004dff0(in_ECX + -0x40);
        FUN_00012440();
        return 0;
      }
      *(undefined4 *)(in_ECX + 0x4a8) = 1;
      *(undefined4 *)(in_ECX + 0x354) = 0;
      *(undefined4 *)(in_ECX + 0x34c) = 0;
      *(byte *)(in_ECX + 0x350) = *(byte *)(in_ECX + 0x350) & 0xfa | 2;
    }
    iVar9 = (**(code **)(*piVar5 + 0x40))();
    iVar10 = (**(code **)(*piVar8 + 0x40))();
    local_d0 = *(float *)(iVar10 + 0x2c) - *(float *)(iVar9 + 0x2c);
    local_d4 = *(float *)(iVar10 + 0x28) - *(float *)(iVar9 + 0x28);
    local_d8 = *(float *)(iVar10 + 0x24) - *(float *)(iVar9 + 0x24);
    local_bc = SQRT(local_d4 * local_d4 + local_d8 * local_d8 + local_d0 * local_d0);
  }
  local_e4 = 3;
  while (iVar9 = *(int *)(in_ECX + 0x4a8), iVar9 == 1) {
    if (piVar8 == (int *)0x0) {
      return 0;
    }
    fVar11 = (float10)FUN_00023e40();
    fVar12 = (float10)FUN_00023da0();
    fVar1 = (float)((fVar12 + (float10)(float)(fVar11 * (float10)3.0)) * (float10)0.25);
    auVar14 = _mm_rcp_ss(_mm_set_ss(local_bc));
    fVar13 = _mm_cvtss_f32(auVar14);
    iVar9 = (**(code **)(*piVar8 + 0x40))();
    fVar2 = *(float *)(iVar9 + 0x2c);
    fVar3 = *(float *)(iVar9 + 0x28);
    *(float *)(in_ECX + 0x174) = fVar1 * -(fVar13 * local_d8) + *(float *)(iVar9 + 0x24);
    *(float *)(in_ECX + 0x178) = fVar1 * -(fVar13 * local_d4) + fVar3;
    *(float *)(in_ECX + 0x17c) = fVar1 * -(fVar13 * local_d0) + fVar2;
    if (local_bc < fVar1 == (local_bc == fVar1)) {
      fVar11 = (float10)FUN_00023e40();
      if (fVar11 < (float10)local_bc) {
        local_e4 = 4;
      }
      if (((((*(byte *)(in_ECX + 0x350) & 1) != 0) && ((*(byte *)(in_ECX + 0x350) >> 1 & 1) != 0))
          || (cVar4 = FUN_00012620(), cVar4 != '\0')) &&
         (cVar4 = FUN_0002e800(in_ECX + -0x40,iVar7), cVar4 == '\0')) {
        *(uint *)(iVar7 + 0x80) = *(uint *)(iVar7 + 0x80) | 0x40;
        *(undefined4 *)(iVar7 + 0x84) = 0x40000000;
      }
      if (*(int *)(in_ECX + 0x8f4) == 0) {
        return 0;
      }
      if ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 == 0) {
        return 0;
      }
      cVar4 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
      if (cVar4 == '\0') {
        iVar7 = FUN_00055aa0();
        *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 2;
        *(undefined4 *)(in_ECX + 0x17c) = 0;
        *(undefined4 *)(in_ECX + 0x178) = 0;
        *(undefined4 *)(in_ECX + 0x174) = 0;
      }
      goto LAB_0002efd7;
    }
    FUN_0004e8f0();
    *(undefined4 *)(in_ECX + 0x4a8) = 2;
    *(undefined4 *)(in_ECX + 0x17c) = 0;
    *(undefined4 *)(in_ECX + 0x178) = 0;
    *(undefined4 *)(in_ECX + 0x174) = 0;
  }
  if (iVar9 == 2) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    cVar4 = FUN_00023ee0();
    if (((cVar4 != '\0') && (iVar9 = FUN_00055aa0(), (*(uint *)(iVar9 + 0x88) >> 0xd & 1) == 0)) &&
       (fVar11 = (float10)FUN_00023e40(), fVar11 < (float10)local_bc)) {
      *(undefined4 *)(in_ECX + 0x4a8) = 1;
    }
LAB_0002ef6d:
    if (piVar8 == (int *)0x0) goto LAB_0002efd7;
  }
  else {
    if (iVar9 != 3) {
      return 0;
    }
    if (((*(int *)(in_ECX + 0x8f4) != 0) &&
        ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 != 0)) &&
       (cVar4 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000),
       cVar4 == '\0')) {
      iVar9 = FUN_00055aa0();
      *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) | 2;
      *(undefined4 *)(in_ECX + 0x4a8) = 2;
    }
    iVar9 = FUN_00055aa0();
    if ((*(uint *)(iVar9 + 0x88) & 0x800) == 0) goto LAB_0002ef6d;
    if (piVar8 == (int *)0x0) {
      return 2;
    }
  }
  if (iVar7 != 0) {
    *(float *)(in_ECX + 0x448) = local_d8;
    *(float *)(in_ECX + 0x44c) = local_d4;
    *(float *)(in_ECX + 0x450) = local_d0;
    *(undefined4 *)(in_ECX + 0x44c) = 0;
    FUN_0001fd40();
    FUN_00024f80(in_ECX + -0x40,piVar8,0x41c80000,0);
  }
LAB_0002efd7:
  FUN_000255d0(param_1,0);
  FUN_0004d970(in_ECX + -0x40,param_1,local_e4,1,1);
  return 1;
}
