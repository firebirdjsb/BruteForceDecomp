/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8BEAA66C663F51348297492364FEC96A2CD52BA35AED1DDBC829EFAD4257CFA
 * Entry: 0x0026b480, Ghidra index: 8762, label: FUN_0026b480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
float * FUN_0026b480(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 1;
  do {
    fVar1 = (float)(int)uVar7;
    if ((int)uVar7 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    iVar5 = FUN_0026b260(fVar1);
    if ((iVar5 != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar5 * 0x10) == -6)) {
      param_1[1] = 0.0;
      *param_1 = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return param_1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 5);
  iVar5 = FUN_0026b260(0x3f800000);
  if (iVar5 == 0) {
    fVar1 = 0.0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar5 * 0x10) != -1) {
      iVar6 = FUN_00292690();
      if (iVar6 != 0) {
        fVar1 = 0.0;
        goto LAB_0026b560;
      }
    }
    fVar1 = (float)*(double *)(*(int *)(DAT_00469888 + 4) + -8 + iVar5 * 0x10);
  }
LAB_0026b560:
  iVar5 = FUN_0026b260(0x40000000);
  if (iVar5 == 0) {
    fVar2 = 0.0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar5 * 0x10) != -1) {
      iVar6 = FUN_00292690();
      if (iVar6 != 0) {
        fVar2 = 0.0;
        goto LAB_0026b5b7;
      }
    }
    fVar2 = (float)*(double *)(*(int *)(DAT_00469888 + 4) + -8 + iVar5 * 0x10);
  }
LAB_0026b5b7:
  iVar5 = FUN_0026b260(0x40400000);
  if (iVar5 == 0) {
    fVar3 = 0.0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar5 * 0x10) != -1) {
      iVar6 = FUN_00292690();
      if (iVar6 != 0) {
        fVar3 = 0.0;
        goto LAB_0026b60b;
      }
    }
    fVar3 = (float)*(double *)(*(int *)(DAT_00469888 + 4) + -8 + iVar5 * 0x10);
  }
LAB_0026b60b:
  iVar5 = FUN_0026b260(0x40800000);
  if (iVar5 == 0) {
LAB_0026b622:
    fVar4 = 0.0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar5 * 0x10) != -1) {
      iVar6 = FUN_00292690();
      if (iVar6 != 0) goto LAB_0026b622;
    }
    fVar4 = (float)*(double *)(*(int *)(DAT_00469888 + 4) + -8 + iVar5 * 0x10);
  }
  *param_1 = fVar1;
  param_1[3] = fVar4;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  return param_1;
}
