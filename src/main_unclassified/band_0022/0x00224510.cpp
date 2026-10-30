/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BF1A613C64008D2761E6B167AB544830F1FE6A62C9F9F04899383B7F01A2BFA
 * Entry: 0x00224510, Ghidra index: 7618, label: FUN_00224510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc6f4;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00224510(byte *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float local_28;
  
  uVar1 = param_4[2];
  uVar2 = param_4[1];
  param_2[1] = *param_4;
  param_2[3] = uVar1;
  param_2[2] = uVar2;
  uVar1 = param_4[5];
  uVar2 = param_4[4];
  param_2[4] = param_4[3];
  param_2[5] = uVar2;
  param_2[6] = uVar1;
  param_2[0xf] = param_4[7];
  if (param_2[0x11] != param_3) {
    FUN_0008f6a0(param_3);
  }
  param_2[0x13] = param_4[6];
  param_2[0x15] = param_4[8];
  *param_2 = param_1;
  param_2[0xd] = *(undefined4 *)(param_1 + 0x48);
  param_2[0xe] = *(undefined4 *)(param_1 + 0x6c);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  param_2[10] = *(undefined4 *)(param_1 + 4);
  param_2[0xc] = uVar1;
  param_2[0xb] = uVar2;
  *(byte *)(param_2 + 0x16) =
       *(byte *)(param_2 + 0x16) ^ (*param_1 >> 1 ^ *(byte *)(param_2 + 0x16)) & 8;
  *(byte *)(param_2 + 0x16) =
       *(byte *)(param_2 + 0x16) ^ (*param_1 >> 6 ^ *(byte *)(param_2 + 0x16)) & 2;
  if ((*(float *)(param_1 + 0x1c) == 0.0) ||
     (fVar4 = *(float *)(param_1 + 0x10),
     *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
     *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) + fVar4 * fVar4 == 0.0)) {
    fVar3 = DAT_003bc6f4 * -(float)param_2[4];
    fVar4 = DAT_003bc6f4 * -(float)param_2[5];
    local_28 = DAT_003bc6f4 * -(float)param_2[6];
  }
  else {
    local_28 = *(float *)(param_1 + 0x1c);
    fVar3 = local_28 * *(float *)(param_1 + 0x10);
    fVar4 = local_28 * (float)*(undefined8 *)(param_1 + 0x14);
    local_28 = local_28 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
  }
  param_2[7] = fVar3;
  param_2[8] = fVar4;
  param_2[9] = local_28;
  param_2[0x12] = (param_2[0x11] != 0) + 1;
  return;
}
