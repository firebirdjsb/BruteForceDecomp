/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0268A60214FF02566ABDADAE73F0B64B159843AFB68AC27308F49D66E02B00A2
 * Entry: 0x002b3650, Ghidra index: 9766, label: FUN_002b3650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b3650(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float fStack_b8;
  float fStack_b0;
  float local_ac;
  int *local_a8;
  float guest_float_z; /* original m32fp stack lane, before later pointer reuse */
  undefined4 local_a4;
  undefined4 local_a0;
  int iStack_9c;
  int local_98;
  undefined1 auStack_94 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 auStack_38 [12];
  undefined4 uStack_8;
  
  local_84 = 0;
  puVar6 = local_74;
  iVar7 = 3;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = *(int *)(in_EAX + 0x44);
  iVar8 = param_1[1];
  local_44 = 0;
  local_a0 = 0;
  local_a4 = 0;
  guest_float_z = 0.0f;
  local_ac = 0.0;
  local_98 = iVar8;
  if (iVar7 == 0) {
    (**(code **)(*(int *)param_1[0x1f] + 4))(&local_90);
  }
  else {
    local_8c = *(undefined4 *)(iVar7 + 0x34);
    local_88 = *(undefined4 *)(iVar7 + 0x38);
    local_90 = *(undefined4 *)(iVar7 + 0x30);
  }
  FUN_002b4100();
  local_48 = local_88;
  local_50 = local_90;
  local_4c = local_8c;
  (**(code **)(*param_1 + 8))(local_80);
  iVar7 = param_1[0x24];
  local_a0 = 0;
  if (iVar8 == 2) {
    /* XBE 0x002B374D/52/57 passes original stack output slots
     * [ESP+2C], [ESP+14], and [ESP+40] (after two pushes).
     * [ESP+40] aliases earlier [ESP+38] from 0x002B36CD,
     * the reconstructed local_90 x/y/z output. */
    (**(code **)(*(int *)param_1[0x1f] + 8))(auStack_94,&local_90,&local_a0);
  }
  else if (iVar8 == 3) {
    local_a0 = 0;
  }
  else {
    _DAT_00000000 = 0;
  }
  fVar2 = (float)param_1[0x22] + 0.0;
  *(float *)(iVar7 + 4) = fVar2;
  *(undefined4 *)(iVar7 + 8) = local_a0;
  fStack_b8 = *(float *)(in_EAX + 0x10);
  if (*(float *)(in_EAX + 0x10) < 0.003) {
    fStack_b8 = 1.0;
  }
  pfVar1 = (float *)(iVar7 + 0x14);
  if (*(int *)(in_EAX + 0x14) == 0) {
    uVar4 = *(undefined4 *)(in_EAX + 0x1c);
    fVar2 = *(float *)(in_EAX + 0x20);
    *pfVar1 = *(float *)(in_EAX + 0x18);
    *(undefined4 *)(iVar7 + 0x18) = uVar4;
  }
  else {
    local_a4 = 0;
    if (iStack_9c == 2) {
      (**(code **)(*(int *)param_1[0x1f] + 0xc))(&fStack_b0);
    }
    else if (iStack_9c == 3) {
      fStack_b0 = fVar2 * fVar2 * 0.4;
      local_ac = fStack_b0;
      /* Original x87 0x002B37D0/74/D8 stores 3 separate m32fp
       * lanes to ESP+1C/+20/+24, not a float-to-pointer cast. */
      guest_float_z = fStack_b0;
    }
    else {
      _DAT_00000000 = 0;
    }
    fVar2 = *(float *)(in_EAX + 0x1c);
    fVar3 = *(float *)(in_EAX + 0x20);
    *pfVar1 = fStack_b0 * *(float *)(in_EAX + 0x18) * fStack_b8;
    *(float *)(iVar7 + 0x18) = local_ac * fVar2 * fStack_b8;
    fVar2 = guest_float_z * fVar3 * fStack_b8;
  }
  *(float *)(iVar7 + 0x1c) = fVar2;
  if (*(float *)(in_EAX + 0x28) != 0.0) {
    fVar9 = (float10)FUN_002b67e0(pfVar1);
    fVar9 = fVar9 * (float10)*(float *)(in_EAX + 0x28);
    iVar8 = 0;
    do {
      if ((float10)pfVar1[iVar8] < fVar9) {
        pfVar1[iVar8] = (float)fVar9;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
  }
  *(float *)(iVar7 + 0x20) = fStack_b8;
  *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(in_EAX + 0x2c);
  uVar4 = *(undefined4 *)(in_EAX + 0x34);
  uVar5 = *(undefined4 *)(in_EAX + 0x38);
  *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(in_EAX + 0x30);
  *(undefined4 *)(iVar7 + 0x28) = uVar4;
  puVar6 = auStack_38;
  iVar8 = 3;
  *(undefined4 *)(iVar7 + 0x2c) = uVar5;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  uStack_8 = 0;
  FUN_002b6f90();
  *(undefined4 *)(iVar7 + 0xa4) = 0;
  *(undefined4 *)(iVar7 + 0xa0) = 0;
  *(undefined4 *)(iVar7 + 0x9c) = 0;
  *(undefined4 *)(iVar7 + 0xb4) = 0;
  *(undefined4 *)(iVar7 + 0xb0) = 0;
  *(undefined4 *)(iVar7 + 0xac) = 0;
  FUN_002bb410(iVar7);
  FUN_002bb520();
  iStack_9c = param_1[0x44];
  local_98 = param_1[0x45];
  fVar9 = (float10)*(double *)(param_1 + 0x44) - (float10)*(double *)(param_1 + 0x42);
  /* Original 0x002B3925 MOV [ESP+24],EAX recycles the already
   * consumed z-float scratch DWORD as a guest pointer. Keep separate
   * C lifetimes instead of a float<->pointer cast (ABI_UNVERIFIED). */
  local_a8 = param_1;
  fStack_b0 = (float)fVar9;
  if (fVar9 <= (float10)1e-10) {
    local_ac = 1e+10;
  }
  else {
    local_ac = (float)((float10)1.0 / fVar9);
  }
  FUN_002bafd0();
  return;
}
