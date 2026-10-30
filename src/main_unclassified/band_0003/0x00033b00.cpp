/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33AD99064A1DD6C9AF61A4554CB5258CC3F42E58B721BB80EC6698A4875F4AC8
 * Entry: 0x00033b00, Ghidra index: 338, label: FUN_00033b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_normalize3.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* 0x33bac-33be7 and 0x33bff-33c3a: MOVSS/MOVHPS read the
 * three stack floats into lanes 0, 2, 3; memory-source MOVSS clears lane 1.
 * Inherited XMM1 lanes do not feed the selected low sum or three stores.
 * Packed FP exception state and the implicit register ABI remain unverified.
 */

undefined4 FUN_00033b00(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  float *pfVar6;
  int iVar7;
  float first[3];
  float second[3];
  
  if (in_EAX == 0) {
    return 0;
  }
  iVar1 = *(int *)(in_EAX + 0x24c);
  if (iVar1 != 0) {
    if (1 < *(int *)(iVar1 + 0x34)) {
      if (*(int *)(iVar1 + 0x34) != 2) {
        return 0;
      }
      pfVar6 = (float *)(**(code **)(*(int *)(iVar1 + 8) + 4))();
      iVar7 = 0;
      if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
        iVar7 = **(int **)(iVar1 + 0x30);
      }
      fVar2 = *(float *)(*(int *)(iVar7 + 0xc) + 0x1c) - pfVar6[2];
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x30) + 4) + 0xc);
      fVar3 = *(float *)(*(int *)(iVar7 + 0xc) + 0x14) - *pfVar6;
      fVar4 = *(float *)(iVar1 + 0x1c) - pfVar6[2];
      fVar5 = *(float *)(iVar1 + 0x14) - *pfVar6;
      first[0] = fVar3; first[1] = 0.0f; first[2] = fVar2;
      second[0] = fVar5; second[1] = 0.0f; second[2] = fVar4;
      if (bf_x86_normalize3(first) && bf_x86_normalize3(second)) {
        float dot = second[2] * first[2] + second[0] * first[0];
        /* 0x33c53-33c5e: FCOMP, TEST AH,5, JP includes unordered. */
        if (!(dot < -0.5f)) return 0;
      }
    }
    return 1;
  }
  return 0;
}
