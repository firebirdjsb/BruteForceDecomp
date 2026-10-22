/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 054F469B4D6656138C80E4E7F112C2634E09BE7B2D20EEA21BE0BDCDB44AD7D2
 * Entry: 0x00356526, Ghidra index: 13141, label: FUN_00356526
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00356b80;
undefined4 FUN_00356526(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int aiStack_94 [15];
  int local_58 [19];
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = param_1[0x12];
  uVar5 = param_1[0x11];
  uVar6 = param_1[0x14];
  local_58[0x11] = param_1[0x13];
  local_58[0x12] = (int)local_58 - (int)param_1;
  piVar3 = param_1;
  do {
    piVar3 = piVar3 + 1;
    iVar2 = *piVar3;
    *piVar3 = 0;
    *(int *)(local_58[0x12] + (int)piVar3) = iVar2;
    iVar1 = local_8 + 1;
    piVar4 = aiStack_94 + local_8;
    local_8 = iVar1;
    *piVar4 = iVar2;
  } while (iVar1 != 0x10);
  local_8 = -0x10;
  piVar3 = &DAT_00356b80;
  do {
    piVar4 = piVar3 + 4;
    uVar5 = ((uVar6 ^ local_58[0x11]) & local_c ^ uVar6) + local_58[local_8 + 1] + *piVar3 + uVar5;
    uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + local_c;
    uVar6 = ((local_58[0x11] ^ local_c) & uVar5 ^ local_58[0x11]) + local_58[local_8 + 2] +
            piVar3[1] + uVar6;
    uVar6 = (uVar6 * 0x1000 | uVar6 >> 0x14) + uVar5;
    local_58[0x11] =
         ((local_c ^ uVar5) & uVar6 ^ local_c) + local_58[local_8 + 3] + piVar3[2] + local_58[0x11];
    local_58[0x11] = (local_58[0x11] * 0x20000 | (uint)local_58[0x11] >> 0xf) + uVar6;
    local_c = ((uVar6 ^ uVar5) & local_58[0x11] ^ uVar5) + local_58[local_8 + 4] + piVar3[3] +
              local_c;
    local_c = (local_c * 0x400000 | local_c >> 10) + local_58[0x11];
    local_8 = local_8 + 4;
    piVar3 = piVar4;
  } while (local_8 != 0);
  local_8 = -0x10;
  do {
    uVar5 = ((local_58[0x11] ^ local_c) & uVar6 ^ local_58[0x11]) + local_58[local_8 + 2] + *piVar4
            + uVar5;
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + local_c;
    uVar6 = ((local_c ^ uVar5) & local_58[0x11] ^ local_c) + local_58[local_8 + 7] + piVar4[1] +
            uVar6;
    uVar6 = (uVar6 * 0x200 | uVar6 >> 0x17) + uVar5;
    local_58[0x11] =
         ((uVar6 ^ uVar5) & local_c ^ uVar5) + local_58[local_8 + 0xc] + piVar4[2] + local_58[0x11];
    local_58[0x11] = (local_58[0x11] * 0x4000 | (uint)local_58[0x11] >> 0x12) + uVar6;
    local_c = ((uVar6 ^ local_58[0x11]) & uVar5 ^ uVar6) + local_58[local_8 + 1] + piVar4[3] +
              local_c;
    local_c = (local_c * 0x100000 | local_c >> 0xc) + local_58[0x11];
    piVar4 = piVar4 + 4;
    local_8 = local_8 + 4;
  } while (local_8 != 0);
  local_58[0x12] = uVar6 ^ local_58[0x11];
  local_8 = 0x10;
  do {
    uVar5 = (local_58[0x12] ^ local_c) + aiStack_94[local_8 + 5] + *piVar4 + uVar5;
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + local_c;
    uVar6 = (local_58[0x11] ^ local_c ^ uVar5) + aiStack_94[local_8 + 8] + piVar4[1] + uVar6;
    uVar6 = (uVar6 * 0x800 | uVar6 >> 0x15) + uVar5;
    local_58[0x12] = uVar6;
    local_58[0x11] =
         (uVar6 ^ local_c ^ uVar5) + aiStack_94[local_8 + 0xb] + piVar4[2] + local_58[0x11];
    local_58[0x11] = (local_58[0x11] * 0x10000 | (uint)local_58[0x11] >> 0x10) + uVar6;
    local_58[0x12] = uVar6 ^ local_58[0x11];
    local_c = (uVar6 ^ local_58[0x11] ^ uVar5) + aiStack_94[local_8 + 0xe] + piVar4[3] + local_c;
    local_c = (local_c * 0x800000 | local_c >> 9) + local_58[0x11];
    piVar4 = piVar4 + 4;
    local_8 = local_8 + -4;
  } while (local_8 != 0);
  local_8 = 0x10;
  do {
    uVar5 = ((~uVar6 | local_c) ^ local_58[0x11]) + aiStack_94[local_8] + *piVar4 + uVar5;
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + local_c;
    uVar6 = ((~local_58[0x11] | uVar5) ^ local_c) + aiStack_94[local_8 + 7] + piVar4[1] + uVar6;
    uVar6 = (uVar6 * 0x400 | uVar6 >> 0x16) + uVar5;
    local_58[0x11] =
         ((~local_c | uVar6) ^ uVar5) + aiStack_94[local_8 + 0xe] + piVar4[2] + local_58[0x11];
    local_58[0x11] = (local_58[0x11] * 0x8000 | (uint)local_58[0x11] >> 0x11) + uVar6;
    local_c = ((~uVar5 | local_58[0x11]) ^ uVar6) + aiStack_94[local_8 + 5] + piVar4[3] + local_c;
    local_c = (local_c * 0x200000 | local_c >> 0xb) + local_58[0x11];
    local_8 = local_8 + -4;
    piVar4 = piVar4 + 4;
  } while (local_8 != 0);
  param_1[0x12] = param_1[0x12] + local_c;
  param_1[0x13] = param_1[0x13] + local_58[0x11];
  param_1[0x11] = param_1[0x11] + uVar5;
  param_1[0x14] = param_1[0x14] + uVar6;
  return 1;
}
