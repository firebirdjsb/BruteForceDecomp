/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABDD8C3C23116DB5FA99A8E06D433BAE8ECD5F2D2DE182BB2C4C078D9C9B81CB
 * Entry: 0x0026b2e0, Ghidra index: 8761, label: FUN_0026b2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
float * FUN_0026b2e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 1;
  do {
    fVar1 = (float)(int)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    iVar4 = FUN_0026b260(fVar1);
    if ((iVar4 != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar4 * 0x10) == -6)) {
      param_1[1] = 0.0;
      *param_1 = 0.0;
      param_1[2] = 0.0;
      return param_1;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  iVar4 = FUN_0026b260(0x3f800000);
  if (iVar4 == 0) {
    fVar1 = 0.0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar4 * 0x10) != -1) {
      iVar5 = FUN_00292690();
      if (iVar5 != 0) {
        fVar1 = 0.0;
        goto LAB_0026b3ae;
      }
    }
    fVar1 = (float)*(double *)(*(int *)(DAT_00469888 + 4) + -8 + iVar4 * 0x10);
  }
LAB_0026b3ae:
  iVar4 = FUN_0026b260(0x40000000);
  if (iVar4 == 0) {
    fVar2 = 0.0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar4 * 0x10) != -1) {
      iVar5 = FUN_00292690();
      if (iVar5 != 0) {
        fVar2 = 0.0;
        goto LAB_0026b405;
      }
    }
    fVar2 = (float)*(double *)(*(int *)(DAT_00469888 + 4) + -8 + iVar4 * 0x10);
  }
LAB_0026b405:
  iVar4 = FUN_0026b260(0x40400000);
  if (iVar4 == 0) {
LAB_0026b41c:
    fVar3 = 0.0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar4 * 0x10) != -1) {
      iVar5 = FUN_00292690();
      if (iVar5 != 0) goto LAB_0026b41c;
    }
    fVar3 = (float)*(double *)(*(int *)(DAT_00469888 + 4) + -8 + iVar4 * 0x10);
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  return param_1;
}
