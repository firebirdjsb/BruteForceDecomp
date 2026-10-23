/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D287AA0A6FAB1C1898D345F65FF0A73FDBAB25391CC82A1E47D1B6B40FA35AB
 * Entry: 0x0026af00, Ghidra index: 8757, label: FUN_0026af00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffe68;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0026af00(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_10;
  float local_c;
  float local_8;
  float fStack_4;
  
  fVar10 = *(float *)(param_1 + 0x1c) / *(float *)(param_1 + 0x18);
  if (1.0 < fVar10) {
    fVar10 = 1.0;
  }
  fVar10 = fVar10 * fVar10 * fVar10 * 6.95 + (fVar10 * 6.82 - fVar10 * fVar10 * 13.77);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
  FUN_00233b10(&local_10,&DAT_003ffe68,param_1 + 8,fVar10);
  pfVar1 = (float *)(param_1 + 0x24);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar3 = *pfVar1;
  fVar4 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x2c);
  fVar6 = *pfVar1;
  fVar7 = *(float *)(param_1 + 0x28);
  fVar8 = *(float *)(param_1 + 0x2c);
  fVar10 = *pfVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *param_4 = local_10 * *(float *)(param_1 + 0x20) -
             (local_c * *pfVar1 +
             fStack_4 * *(float *)(param_1 + 0x2c) + local_8 * *(float *)(param_1 + 0x28));
  param_4[1] = fVar9 * local_c + local_10 * fVar10 + (fStack_4 * fVar7 - local_8 * fVar8);
  param_4[2] = (local_c * fVar5 - fStack_4 * fVar6) + fVar9 * local_8 + local_10 * (float)uVar2;
  param_4[3] = (local_8 * fVar3 - local_c * fVar4) +
               fVar9 * fStack_4 + local_10 * (float)((ulonglong)uVar2 >> 0x20);
  return;
}
