/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 717230C766FEB727BE5FA6857ABE1257254C74266195A0F018455677C0B7F83B
 * Entry: 0x0005acb0, Ghidra index: 913, label: FUN_0005acb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h> /* XBE 0x0005AE61 uses approximate RSQRTSS */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffca0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0005acb0(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float *pfVar9;
  float in_XMM1_Da;
  float fVar12;
  float guest_length_sq;
  float guest_inv_length;
  float local_28;
  float local_24;
  float fStack_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float *local_c;
  undefined1 local_5;
  
  if ((((DAT_003ffca0 != '\0') && ((*(byte *)(param_1 + 0x10) & 1) != 0)) &&
      ((*(int *)(param_1 + 4) != 0 || (FUN_0005a7d0(), *(int *)(param_1 + 4) != 0)))) &&
     ((*(byte *)(param_1 + 0x10) & 6) != 0)) {
    iVar5 = (**(code **)(*param_2 + 0x40))();
    local_c = (float *)(iVar5 + 0x24);
    local_18 = FUN_000e0c80(local_1c);
    local_14 = 0;
    FUN_0005a950(*(undefined4 *)(param_1 + 4));
    local_10 = (float)FUN_0005a890();
    if (local_10 == *(float *)(param_1 + 4)) {
      iVar5 = FUN_0005ab70(local_1c);
      pfVar9 = local_c;
      if (iVar5 != 0) {
        *(int *)(param_1 + 4) = iVar5;
        FUN_0005a950(*(undefined4 *)(param_1 + 4));
        pfVar9 = local_c;
      }
    }
    else {
      cVar4 = FUN_0005a860();
      if (cVar4 != '\0') {
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
        bVar1 = *(byte *)(param_1 + 0x10);
        *(byte *)(param_1 + 0x10) = (~(bVar1 >> 3) << 3 ^ bVar1) & 8 ^ bVar1;
        iVar2 = param_2[0x167];
        iVar6 = (**(code **)(*param_2 + 0xf4))();
        if ((((iVar2 != 0) && (iVar6 != 0)) && (piVar7 = (int *)FUN_000456c0(), param_2 == piVar7))
           && (*(int *)(iVar2 + 0x28) != 0)) {
          FUN_0005e4f0();
        }
      }
      *(float *)(param_1 + 4) = local_10;
      pfVar9 = (float *)(iVar5 + 0x24);
    }
    FUN_0005a8d0();
    iVar5 = FUN_0005a890();
    if (iVar5 != 0) {
      iVar2 = *(int *)(param_1 + 4);
      fStack_20 = *(float *)(iVar5 + 0x1c) - *(float *)(iVar2 + 0x1c);
      local_24 = *(float *)(iVar5 + 0x18) - *(float *)(iVar2 + 0x18);
      local_28 = *(float *)(iVar5 + 0x14) - *(float *)(iVar2 + 0x14);
      in_XMM1_Da = in_XMM1_Da + local_28 * local_28;
      fVar12 = local_24 * local_24 + fStack_20 * fStack_20;
      /* Original MOVSS/MOVHPS, MULPS, SHUFPS, ADDPS, ADDSS combine
       * the three contiguous float32 deltas at 0x0005AE35..0x0005AE4E.
       * RSQRTSS at 0x0005AE61 is approximate, NOT 1/sqrtf(). */
      guest_length_sq = (local_24 * local_24 + fStack_20 * fStack_20) + local_28 * local_28;
      if (2e-05 <= guest_length_sq) {
        guest_inv_length = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(guest_length_sq)));
        fVar12 = guest_inv_length;
        local_28 = local_28 * fVar12;
        local_24 = local_24 * fVar12;
        fStack_20 = fStack_20 * fVar12;
      }
      else {
        local_5 = 0;
      }
      iVar5 = *(int *)(param_1 + 4);
      fVar12 = pfVar9[2] - *(float *)(iVar5 + 0x1c);
      local_10 = pfVar9[1] - *(float *)(iVar5 + 0x18);
      fVar3 = *pfVar9 - *(float *)(iVar5 + 0x14);
      local_c = (float *)(local_28 * fVar3 + local_10 * local_24 + fVar12 * fStack_20);
      if ((fVar3 * fVar3 + local_10 * local_10 + fVar12 * fVar12) - (float)local_c * (float)local_c
          <= 100.0) {
        *(int *)(param_1 + 8) = iVar5;
      }
      else {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      *(float **)(param_1 + 0xc) = local_c;
      uVar8 = FUN_0005a800();
      if (uVar8 != (*(byte *)(param_1 + 0x10) & 8) >> 3) {
        *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * -1.0;
      }
    }
    FUN_00085620();
  }
  return;
}
