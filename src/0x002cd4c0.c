/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55A3C56AF0919A2FBCD0F81985480EC911CB64DFC5654DAC83733AE60D186323
 * Entry: 0x002cd4c0, Ghidra index: 10167, label: FUN_002cd4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
undefined4 *
FUN_002cd4c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined1 local_10 [12];
  undefined4 local_4;
  
  puVar4 = param_1 + 5;
  iVar6 = 2;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0x19] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = param_3;
  FUN_002cd080(param_5,param_1 + 10);
  param_1[0x14] = param_4;
  param_1[0x15] = param_5;
  local_4 = 0;
  FUN_00150930();
  FUN_002b7360(param_5[2] + 0x10,local_10,param_1 + 2);
  local_4 = 0;
  FUN_00150930();
  FUN_002b7360(param_5[2] + 0x10,local_10,param_1 + 6);
  puVar3 = (uint *)param_1[0x13];
  pfVar5 = (float *)((*puVar3 & 0xffff) * 0x10 + *param_5);
  pfVar7 = (float *)((*(uint *)((int)puVar3 + *(int *)(&DAT_003b86e0 + ((uint)puVar3 & 0xc))) &
                     0xffff) * 0x10 + *param_5);
  *param_1 = pfVar5;
  param_1[1] = pfVar7;
  uVar1 = *(undefined8 *)(pfVar7 + 1);
  uVar2 = *(undefined8 *)(pfVar5 + 1);
  param_1[0xe] = *pfVar7 - *pfVar5;
  *(ulonglong *)(param_1 + 0xf) =
       CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                (float)uVar1 - (float)uVar2);
  param_1[0x16] =
       (float)param_1[0xb] * (float)param_1[0x10] - (float)param_1[0xc] * (float)param_1[0xf];
  param_1[0x17] =
       (float)param_1[0xe] * (float)param_1[0xc] - (float)param_1[10] * (float)param_1[0x10];
  param_1[0x18] =
       (float)param_1[10] * (float)param_1[0xf] - (float)param_1[0xe] * (float)param_1[0xb];
  return param_1;
}
