/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2ED00073B735620588FEFD53DCDD689A68FB6D7A30D84312922EB66102A4BFF7
 * Entry: 0x000dbdc0, Ghidra index: 2701, label: FUN_000dbdc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0009e9c0(int param_1,float *param_2);

extern uint32_t _DAT_003c0284;
extern uint32_t _DAT_0040d5cc;
extern uint32_t _DAT_0040d5d0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000dbdc0(undefined4 param_1,float *param_2,float *param_3,float *param_4,int *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9,int *param_10,
                 char param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if ((*(byte *)(param_10[3] + 0x50) & 0x10) != 0) {
    if (param_11 == '\0') {
      bVar4 = *(byte *)(param_10 + 0x25) >> 2;
    }
    else {
      bVar4 = *(byte *)(param_10 + 0x25) >> 1;
    }
    if ((bVar4 & 1) != 0) {
      if ((*(byte *)(param_10 + 0x25) & 0x20) == 0) {
        fVar7 = _DAT_003c0284 * (float)param_10[0x23];
      }
      else {
        fVar7 = (float)param_10[0x23];
      }
      if (fVar7 < 0.0 == (fVar7 == 0.0)) {
        iVar5 = (**(code **)(*param_10 + 0x40))();
        fVar1 = *(float *)(iVar5 + 0x2c) - param_9[2];
        fVar2 = *(float *)(iVar5 + 0x28) - param_9[1];
        fVar3 = *(float *)(iVar5 + 0x24) - *param_9;
        fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        fVar7 = (fVar7 - fVar6) / (_DAT_0040d5d0 * fVar7);
        if (fVar7 < 0.0 == (fVar7 == 0.0)) {
          FUN_0009e9c0(param_10,&fStack_10);
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
          fVar8 = (fStack_8 + fStack_c + fStack_10) * (1.0 / (_DAT_0040d5cc * 3.0));
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
          fVar8 = fVar8 * fVar7;
          *param_2 = fVar8 * fVar3 + *param_2;
          param_2[1] = fVar8 * fVar2 + param_2[1];
          param_2[2] = fVar8 * fVar1 + param_2[2];
          *param_3 = fVar6 * fVar8 + *param_3;
          iVar5 = param_10[3];
          fVar7 = *(float *)(iVar5 + 0x5c);
          fVar1 = *(float *)(iVar5 + 0x58);
          *param_7 = fVar8 * *(float *)(iVar5 + 0x54) + *param_7;
          param_7[1] = fVar8 * fVar1 + param_7[1];
          param_7[2] = fVar8 * fVar7 + param_7[2];
          *param_4 = fVar8 + *param_4;
          *param_5 = *param_5 + 1;
          *param_6 = fVar8 * fStack_10 + *param_6;
          param_6[1] = fVar8 * fStack_c + param_6[1];
          param_6[2] = fVar8 * fStack_8 + param_6[2];
          *param_8 = *(float *)(param_10[3] + 100) * fVar8 + *param_8;
        }
      }
    }
  }
  return;
}
