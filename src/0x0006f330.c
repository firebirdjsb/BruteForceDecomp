/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68D1984CDEC9F6439A8BBF3A12C7FE078C9A067949B163095A697D34BD1BDD7B
 * Entry: 0x0006f330, Ghidra index: 1261, label: FUN_0006f330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_0006f330(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  uVar3 = *(uint *)(param_1 + 0x148);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = -(uint)((*(byte *)(uVar3 + 0x26) & 0x40) != 0) & uVar3;
    if ((uVar3 != 0) && (uVar6 = uVar3, *(int *)(*(int *)(uVar3 + 0xc) + 4) == 3))
    goto LAB_0006f365;
  }
  uVar6 = 0;
LAB_0006f365:
  if (uVar3 != 0) {
    iVar5 = *(int *)(uVar3 + 0x6c);
    uVar1 = *(undefined4 *)(iVar5 + 0x40);
    if ((*(byte *)(param_1 + 0x250) & 2) == 0) {
      uVar2 = *(undefined4 *)(iVar5 + 0x3c);
      *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)(param_1 + 0x214) = uVar2;
      *(undefined4 *)(param_1 + 0x218) = uVar1;
      uVar1 = *(undefined4 *)(iVar5 + 0x40);
      uVar2 = *(undefined4 *)(iVar5 + 0x3c);
      *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)(param_1 + 0x220) = uVar2;
      *(undefined4 *)(param_1 + 0x224) = uVar1;
      *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 1;
      *(undefined4 *)(param_1 + 0x24c) = 0;
      if (uVar6 == 0) {
        local_8 = -*(float *)(iVar5 + 0x28);
        local_c = -*(float *)(iVar5 + 0x1c);
        local_4 = -*(float *)(iVar5 + 0x34);
        pfVar4 = &local_c;
      }
      else {
        pfVar4 = (float *)(**(code **)(*(int *)(uVar6 + 0x1b4) + 0x30))(&local_c);
      }
      local_4 = pfVar4[2];
      local_8 = pfVar4[1];
      local_c = *pfVar4;
      if (uVar6 == 0) {
        auVar8 = rsqrtss(in_XMM0,local_c * local_c + local_4 * local_4);
        fVar7 = auVar8._0_4_;
        local_c = fVar7 * local_c;
        local_8 = fVar7 * 0.0;
        local_4 = local_4 * fVar7;
      }
      *(undefined4 *)(param_1 + 0x244) = 0;
      *(undefined4 *)(param_1 + 0x240) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      *(undefined4 *)(param_1 + 0x234) = 0;
      *(undefined4 *)(param_1 + 0x230) = 0;
      *(undefined4 *)(param_1 + 0x22c) = 0;
      *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
      FUN_0001d0c0();
      local_14 = 180.0;
      if (((uVar6 != 0) && (*(int *)(uVar6 + 0x1f8) == 8)) && (*(char *)(uVar6 + 0x800) != '\0')) {
        local_14 = 0.0;
      }
      DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
      fVar7 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 11.0;
      iVar5 = (int)fVar7;
      if ((float)iVar5 < fVar7 == ((float)iVar5 == fVar7)) {
        iVar5 = iVar5 + -1;
      }
      FUN_000720d0(param_1 + 0x228,local_14 * 0.017453292 + ((float)iVar5 - 5.5) * 0.17453292);
      FUN_00072010(param_1 + 0x228,0xbf060a92);
      return;
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x3c);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar5 + 0x38);
    *(undefined4 *)(param_1 + 0x214) = uVar2;
    *(undefined4 *)(param_1 + 0x218) = uVar1;
    uVar1 = *(undefined4 *)(iVar5 + 0x40);
    uVar2 = *(undefined4 *)(iVar5 + 0x3c);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(iVar5 + 0x38);
    *(undefined4 *)(param_1 + 0x220) = uVar2;
    *(undefined4 *)(param_1 + 0x224) = uVar1;
    *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 1;
    *(undefined4 *)(param_1 + 0x24c) = 0x40400000;
    if (uVar6 == 0) {
      local_8 = -*(float *)(iVar5 + 0x28);
      local_c = -*(float *)(iVar5 + 0x1c);
      local_4 = -*(float *)(iVar5 + 0x34);
      pfVar4 = &local_c;
    }
    else {
      pfVar4 = (float *)(**(code **)(*(int *)(uVar6 + 0x1b4) + 0x30))(&local_c);
    }
    local_4 = pfVar4[2];
    local_8 = pfVar4[1];
    local_c = *pfVar4;
    if (uVar6 == 0) {
      auVar8 = rsqrtss(in_XMM0,local_c * local_c + local_4 * local_4);
      fVar7 = auVar8._0_4_;
      local_c = fVar7 * local_c;
      local_8 = fVar7 * 0.0;
      local_4 = local_4 * fVar7;
    }
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
    FUN_0001d0c0();
    FUN_00072010(param_1 + 0x228,0xbdb2b8c2);
  }
  return;
}
