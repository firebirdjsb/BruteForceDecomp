/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80514F8A1F126C935AA9BC127F9DBED949D92177F0BE5C9316CC5F543D63149A
 * Entry: 0x00021d10, Ghidra index: 192, label: FUN_00021d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00021d10(undefined4 param_1,undefined1 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 *puVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int unaff_ESI;
  
  puVar7 = param_2;
  iVar11 = *(int *)(unaff_ESI + 0x6f4);
  param_2 = (undefined1 *)0x1;
  if (iVar11 == 0) {
    if (*(char *)(unaff_ESI + 0x6f8) == '\0') {
      *(undefined4 *)(unaff_ESI + 0x6ac) = 0;
      *puVar7 = 1;
      return 1;
    }
    *(undefined4 *)(unaff_ESI + 0x6ac) = 0xf;
    *puVar7 = 1;
    return 1;
  }
  if ((*(float *)(puVar7 + 4) <= *(float *)(unaff_ESI + 0x71c) - 2.0) ||
     (*(int *)(unaff_ESI + 0x730) < 4)) {
    if ((*(float *)(puVar7 + 4) < *(float *)(unaff_ESI + 0x718)) &&
       (*(int *)(unaff_ESI + 0x730) < 4)) {
      *(undefined4 *)(unaff_ESI + 0x730) = 4;
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x730) = 3;
  }
  if ((*(int *)(unaff_ESI + 0x934) == 0) ||
     ((*(int *)(unaff_ESI + 0x938) - *(int *)(unaff_ESI + 0x934)) / 0x18 == 0)) {
    param_2 = (undefined1 *)FUN_00021b70(puVar7);
  }
  else if (*(int *)(*(int *)(unaff_ESI + 0x938) + -4) == iVar11) {
    cVar8 = FUN_00026d80(unaff_ESI,unaff_ESI + 0x930,unaff_ESI + 0x478,0,0x3fc00000);
    if (cVar8 == '\0') {
      FUN_0004e8f0();
      param_2 = (undefined1 *)FUN_00021b70(puVar7);
    }
    else if (*(float *)(unaff_ESI + 0x71c) < *(float *)(puVar7 + 4)) {
      piVar9 = (int *)FUN_000120f0();
      iVar10 = (**(code **)(*piVar9 + 0x40))();
      fVar1 = *(float *)(iVar11 + 0x1c) - *(float *)(iVar10 + 0x2c);
      fVar2 = *(float *)(iVar11 + 0x18) - *(float *)(iVar10 + 0x28);
      fVar3 = *(float *)(iVar11 + 0x14) - *(float *)(iVar10 + 0x24);
      iVar10 = (**(code **)(**(int **)(puVar7 + 0x2c) + 0x40))();
      fVar4 = *(float *)(iVar11 + 0x1c) - *(float *)(iVar10 + 0x2c);
      fVar5 = *(float *)(iVar11 + 0x18) - *(float *)(iVar10 + 0x28);
      fVar6 = *(float *)(iVar11 + 0x14) - *(float *)(iVar10 + 0x24);
      if (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 <
          fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) {
        FUN_0004e8f0();
        *(undefined4 *)(unaff_ESI + 0x6ac) = 0xb;
        *(undefined4 *)(unaff_ESI + 0x1bc) = 0;
        *(undefined4 *)(unaff_ESI + 0x1b8) = 0;
        *(undefined4 *)(unaff_ESI + 0x1b4) = 0;
        *puVar7 = 1;
      }
    }
    FUN_000255d0(param_1,0);
    FUN_0004d970(unaff_ESI,param_1,*(undefined4 *)(unaff_ESI + 0x730),1,0);
  }
  else {
    param_2 = (undefined1 *)FUN_00021b70(puVar7);
  }
  if ((((*(byte *)(unaff_ESI + 0x390) & 1) == 0) ||
      (*(float *)(unaff_ESI + 0x38c) < 0.0 != (*(float *)(unaff_ESI + 0x38c) == 0.0))) &&
     (param_2 == (undefined1 *)0x1)) {
    iVar11 = FUN_00021b70(puVar7);
    return iVar11;
  }
  return (int)param_2;
}
