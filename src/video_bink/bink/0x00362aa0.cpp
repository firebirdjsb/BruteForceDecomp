/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF93A649436EC85092CEE46A76BA4441CBE5EDE39DD4FED7986585A8B15F601B
 * Entry: 0x00362aa0, Ghidra index: 13234, label: FUN_00362aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_XBE_FILE_HEADER_0038a1e0;
void FUN_00362aa0(char *param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int *piVar1;
  char *pcVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_12c [6];
  int local_114 [2];
  int local_10c [8];
  int local_ec [8];
  int local_cc [8];
  int local_ac [8];
  int local_8c [8];
  int local_6c [8];
  int local_4c [8];
  int local_2c;
  short *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  ppuVar3 = &PTR_XBE_FILE_HEADER_0038a1e0 + param_4 * 0x40;
  piVar1 = local_12c;
  local_2c = 8;
  do {
    iVar7 = (int)*param_3 * (int)*ppuVar3 >> 0xb;
    if ((((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      *piVar1 = iVar7;
      piVar1[8] = iVar7;
      piVar1[0x10] = iVar7;
      piVar1[0x18] = iVar7;
      piVar1[0x20] = iVar7;
      piVar1[0x28] = iVar7;
      piVar1[0x30] = iVar7;
      piVar1[0x38] = iVar7;
    }
    else {
      iVar5 = (int)ppuVar3[0x20] * (int)param_3[0x20] >> 0xb;
      iVar9 = iVar5 + iVar7;
      iVar7 = iVar7 - iVar5;
      iVar6 = (int)ppuVar3[0x30] * (int)param_3[0x30] >> 0xb;
      iVar4 = (int)ppuVar3[0x10] * (int)param_3[0x10] >> 0xb;
      iVar5 = iVar6 + iVar4;
      iVar6 = ((iVar4 - iVar6) * 0xb50 >> 0xb) - iVar5;
      iVar4 = iVar5 + iVar9;
      local_18 = iVar9 - iVar5;
      local_24 = iVar4;
      local_1c = iVar7 - iVar6;
      local_20 = iVar6 + iVar7;
      local_10 = (int)ppuVar3[0x18] * (int)param_3[0x18] >> 0xb;
      iVar9 = (int)ppuVar3[0x28] * (int)param_3[0x28] >> 0xb;
      iVar5 = local_10 + iVar9;
      iVar9 = iVar9 - local_10;
      iVar6 = (int)ppuVar3[0x38] * (int)param_3[0x38] >> 0xb;
      iVar7 = (int)ppuVar3[8] * (int)param_3[8] >> 0xb;
      iVar8 = iVar6 + iVar7;
      iVar7 = iVar7 - iVar6;
      local_8 = iVar5 + iVar8;
      iVar6 = (iVar7 + iVar9) * 0xec8 >> 0xb;
      iVar9 = ((iVar9 * -0x14e8 >> 0xb) - local_8) + iVar6;
      iVar5 = ((iVar8 - iVar5) * 0xb50 >> 0xb) - iVar9;
      local_14 = ((iVar7 * 0x8a9 >> 0xb) - iVar6) + iVar5;
      local_28 = param_3;
      *piVar1 = local_8 + iVar4;
      piVar1[0x38] = iVar4 - local_8;
      piVar1[0x30] = local_20 - iVar9;
      piVar1[0x28] = local_1c - iVar5;
      piVar1[0x10] = iVar5 + local_1c;
      piVar1[0x18] = local_18 - local_14;
      piVar1[8] = iVar9 + local_20;
      piVar1[0x20] = local_14 + local_18;
      param_3 = local_28;
    }
    param_3 = param_3 + 1;
    ppuVar3 = ppuVar3 + 1;
    piVar1 = piVar1 + 1;
    local_2c = local_2c + -1;
    local_28 = param_3;
  } while (local_2c != 0);
  pcVar2 = (char *)(param_5 + 1);
  piVar1 = local_114;
  param_5 = 2;
  do {
    local_18 = piVar1[-6] + piVar1[-2];
    local_1c = piVar1[-6] - piVar1[-2];
    iVar5 = *piVar1 + piVar1[-4];
    iVar7 = ((piVar1[-4] - *piVar1) * 0xb50 >> 0xb) - iVar5;
    local_24 = iVar5 + local_18;
    local_18 = local_18 - iVar5;
    local_20 = iVar7 + local_1c;
    local_1c = local_1c - iVar7;
    iVar7 = piVar1[-3] + piVar1[-1];
    iVar4 = piVar1[-1] - piVar1[-3];
    iVar5 = piVar1[-5] + piVar1[1];
    iVar9 = piVar1[-5] - piVar1[1];
    local_8 = iVar7 + iVar5;
    iVar6 = (iVar9 + iVar4) * 0xec8 >> 0xb;
    iVar4 = ((iVar4 * -0x14e8 >> 0xb) - local_8) + iVar6;
    local_10 = ((iVar5 - iVar7) * 0xb50 >> 0xb) - iVar4;
    local_14 = ((iVar9 * 0x8a9 >> 0xb) - iVar6) + local_10;
    *param_1 = (char)((uint)(local_8 + 0x7f + local_24) >> 8) + pcVar2[-1];
    param_1[7] = (char)((uint)((local_24 - local_8) + 0x7f) >> 8) + pcVar2[6];
    param_1[1] = (char)((uint)(iVar4 + 0x7f + local_20) >> 8) + *pcVar2;
    param_1[6] = (char)((uint)((local_20 - iVar4) + 0x7f) >> 8) + pcVar2[5];
    param_1[2] = (char)((uint)(local_10 + 0x7f + local_1c) >> 8) + pcVar2[1];
    param_1[5] = (char)((uint)((local_1c - local_10) + 0x7f) >> 8) + pcVar2[4];
    param_1[4] = (char)((uint)(local_14 + 0x7f + local_18) >> 8) + pcVar2[3];
    local_1c = piVar1[6];
    param_1[3] = (char)((uint)((local_18 - local_14) + 0x7f) >> 8) + pcVar2[2];
    param_1 = param_1 + param_2;
    local_18 = piVar1[2] + local_1c;
    local_1c = piVar1[2] - local_1c;
    iVar5 = piVar1[8] + piVar1[4];
    iVar7 = ((piVar1[4] - piVar1[8]) * 0xb50 >> 0xb) - iVar5;
    local_24 = iVar5 + local_18;
    local_18 = local_18 - iVar5;
    local_20 = iVar7 + local_1c;
    local_1c = local_1c - iVar7;
    iVar7 = piVar1[5] + piVar1[7];
    iVar4 = piVar1[7] - piVar1[5];
    iVar5 = piVar1[3] + piVar1[9];
    iVar9 = piVar1[3] - piVar1[9];
    local_8 = iVar7 + iVar5;
    iVar6 = (iVar9 + iVar4) * 0xec8 >> 0xb;
    iVar4 = ((iVar4 * -0x14e8 >> 0xb) - local_8) + iVar6;
    local_10 = ((iVar5 - iVar7) * 0xb50 >> 0xb) - iVar4;
    local_14 = ((iVar9 * 0x8a9 >> 0xb) - iVar6) + local_10;
    *param_1 = (char)((uint)(local_8 + 0x7f + local_24) >> 8) + pcVar2[7];
    param_1[7] = (char)((uint)((local_24 - local_8) + 0x7f) >> 8) + pcVar2[0xe];
    param_1[1] = (char)((uint)(iVar4 + 0x7f + local_20) >> 8) + pcVar2[8];
    param_1[6] = (char)((uint)((local_20 - iVar4) + 0x7f) >> 8) + pcVar2[0xd];
    param_1[2] = (char)((uint)(local_10 + 0x7f + local_1c) >> 8) + pcVar2[9];
    param_1[5] = (char)((uint)((local_1c - local_10) + 0x7f) >> 8) + pcVar2[0xc];
    param_1[4] = (char)((uint)(local_14 + 0x7f + local_18) >> 8) + pcVar2[0xb];
    param_1[3] = (char)((uint)((local_18 - local_14) + 0x7f) >> 8) + pcVar2[10];
    param_1 = param_1 + param_2;
    local_18 = piVar1[10] + piVar1[0xe];
    local_1c = piVar1[10] - piVar1[0xe];
    iVar5 = piVar1[0x10] + piVar1[0xc];
    iVar7 = ((piVar1[0xc] - piVar1[0x10]) * 0xb50 >> 0xb) - iVar5;
    local_24 = iVar5 + local_18;
    local_18 = local_18 - iVar5;
    local_20 = iVar7 + local_1c;
    local_1c = local_1c - iVar7;
    iVar7 = piVar1[0xd] + piVar1[0xf];
    iVar4 = piVar1[0xf] - piVar1[0xd];
    iVar5 = piVar1[0xb] + piVar1[0x11];
    iVar9 = piVar1[0xb] - piVar1[0x11];
    local_8 = iVar7 + iVar5;
    iVar6 = (iVar9 + iVar4) * 0xec8 >> 0xb;
    iVar4 = ((iVar4 * -0x14e8 >> 0xb) - local_8) + iVar6;
    local_10 = ((iVar5 - iVar7) * 0xb50 >> 0xb) - iVar4;
    local_14 = ((iVar9 * 0x8a9 >> 0xb) - iVar6) + local_10;
    *param_1 = (char)((uint)(local_8 + 0x7f + local_24) >> 8) + pcVar2[0xf];
    param_1[7] = (char)((uint)((local_24 - local_8) + 0x7f) >> 8) + pcVar2[0x16];
    param_1[1] = (char)((uint)(iVar4 + 0x7f + local_20) >> 8) + pcVar2[0x10];
    param_1[6] = (char)((uint)((local_20 - iVar4) + 0x7f) >> 8) + pcVar2[0x15];
    param_1[2] = (char)((uint)(local_10 + 0x7f + local_1c) >> 8) + pcVar2[0x11];
    param_1[5] = (char)((uint)((local_1c - local_10) + 0x7f) >> 8) + pcVar2[0x14];
    param_1[4] = (char)((uint)(local_14 + 0x7f + local_18) >> 8) + pcVar2[0x13];
    param_1[3] = (char)((uint)((local_18 - local_14) + 0x7f) >> 8) + pcVar2[0x12];
    param_1 = param_1 + param_2;
    local_18 = piVar1[0x12] + piVar1[0x16];
    local_1c = piVar1[0x12] - piVar1[0x16];
    iVar5 = piVar1[0x18] + piVar1[0x14];
    iVar7 = ((piVar1[0x14] - piVar1[0x18]) * 0xb50 >> 0xb) - iVar5;
    local_24 = iVar5 + local_18;
    local_18 = local_18 - iVar5;
    local_20 = iVar7 + local_1c;
    local_1c = local_1c - iVar7;
    iVar7 = piVar1[0x15] + piVar1[0x17];
    iVar4 = piVar1[0x17] - piVar1[0x15];
    iVar5 = piVar1[0x13] + piVar1[0x19];
    iVar9 = piVar1[0x13] - piVar1[0x19];
    local_8 = iVar7 + iVar5;
    iVar6 = (iVar9 + iVar4) * 0xec8 >> 0xb;
    iVar4 = ((iVar4 * -0x14e8 >> 0xb) - local_8) + iVar6;
    local_10 = ((iVar5 - iVar7) * 0xb50 >> 0xb) - iVar4;
    local_14 = ((iVar9 * 0x8a9 >> 0xb) - iVar6) + local_10;
    *param_1 = (char)((uint)(local_8 + 0x7f + local_24) >> 8) + pcVar2[0x17];
    piVar1 = piVar1 + 0x20;
    param_1[7] = (char)((uint)((local_24 - local_8) + 0x7f) >> 8) + pcVar2[0x1e];
    param_1[1] = (char)((uint)(iVar4 + 0x7f + local_20) >> 8) + pcVar2[0x18];
    param_1[6] = (char)((uint)((local_20 - iVar4) + 0x7f) >> 8) + pcVar2[0x1d];
    param_1[2] = (char)((uint)(local_10 + 0x7f + local_1c) >> 8) + pcVar2[0x19];
    param_1[5] = (char)((uint)((local_1c - local_10) + 0x7f) >> 8) + pcVar2[0x1c];
    param_1[4] = (char)((uint)(local_14 + 0x7f + local_18) >> 8) + pcVar2[0x1b];
    param_1[3] = (char)((uint)((local_18 - local_14) + 0x7f) >> 8) + pcVar2[0x1a];
    param_1 = param_1 + param_2;
    param_5 = param_5 + -1;
    pcVar2 = pcVar2 + 0x20;
  } while (param_5 != 0);
  return;
}
