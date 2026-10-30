/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C66011A1EF28B7D259DC354572BAD0594545BA5B2D1A1B9006420E2753D3D72
 * Entry: 0x002b7970, Ghidra index: 9852, label: FUN_002b7970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efb8;
undefined4 * FUN_002b7970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  *param_1 = PTR_FUN_0039efb8;
  *param_1 = PTR_FUN_0039efb8;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  param_1[0x10] = param_2[4];
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = 0;
  param_1[1] = param_2[8];
  param_1[2] = param_2[9];
  param_1[0xc] = param_1[4];
  param_1[0xd] = param_1[5];
  param_1[0xe] = param_1[6];
  param_1[0xf] = 0;
  fVar3 = (float)param_1[1] * 0.5;
  param_1[0xc] = (float)param_1[0xc] + (float)param_1[0x10] * fVar3;
  *(ulonglong *)(param_1 + 0xd) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xd) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x11) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_1 + 0xd) +
                (float)*(undefined8 *)(param_1 + 0x11) * fVar3);
  fVar3 = (float)param_1[1];
  param_1[8] = (float)param_1[4] + (float)param_1[0x10] * fVar3;
  *(ulonglong *)(param_1 + 9) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x11) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_1 + 5) + (float)*(undefined8 *)(param_1 + 0x11) * fVar3
               );
  param_1[0xb] = 0;
  param_1[3] = 0;
  return param_1;
}
