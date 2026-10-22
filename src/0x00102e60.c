/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6624D0BD8B8F96BE6F6D01132F67079854A6068CBE2BF19B7644A1F2FFB45A45
 * Entry: 0x00102e60, Ghidra index: 3283, label: FUN_00102e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00102e60(void)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int unaff_ESI;
  int local_8;
  
  if ((*(int *)(unaff_ESI + 0x7c) == 0) ||
     (iVar4 = *(int *)(unaff_ESI + 0x80) - *(int *)(unaff_ESI + 0x7c) >> 2, iVar4 == 0)) {
    return 0;
  }
  if (in_ECX < 0) {
    if (*(char *)(unaff_ESI + 0xa4) == '\0') {
      in_ECX = 0;
      goto LAB_00102eaa;
    }
  }
  else {
    if (in_ECX < iVar4) goto LAB_00102eaa;
    if (*(char *)(unaff_ESI + 0xa4) != '\0') {
      in_ECX = 0;
      goto LAB_00102eaa;
    }
  }
  in_ECX = iVar4 + -1;
LAB_00102eaa:
  if (in_ECX != *(int *)(unaff_ESI + 0x9c)) {
    piVar6 = (int *)(unaff_ESI + 0xa0);
    *piVar6 = *piVar6 + (in_ECX - *(int *)(unaff_ESI + 0x9c));
    if (*piVar6 < 0) {
      *(undefined4 *)(unaff_ESI + 0xa0) = 0;
    }
    if (*(int *)(unaff_ESI + 0xa8) <= *(int *)(unaff_ESI + 0xa0)) {
      *(int *)(unaff_ESI + 0xa0) = *(int *)(unaff_ESI + 0xa8) + -1;
    }
    *(int *)(unaff_ESI + 0x9c) = in_ECX;
    FUN_00102db0();
    fVar3 = *(float *)(unaff_ESI + 0x18) / (float)*(int *)(unaff_ESI + 0xa8);
    iVar5 = *(int *)(unaff_ESI + 0x9c) - *(int *)(unaff_ESI + 0xa0);
    iVar4 = *(int *)(unaff_ESI + 0xa8) + iVar5;
    local_8 = 0;
    for (; iVar5 < iVar4; iVar5 = iVar5 + 1) {
      if (iVar5 != -1) {
        iVar7 = 0;
        for (piVar6 = *(int **)(unaff_ESI + 0x7c); piVar6 != *(int **)(unaff_ESI + 0x80);
            piVar6 = piVar6 + 1) {
          if (iVar7 == iVar5) {
            piVar6 = (int *)*piVar6;
            if (piVar6 != (int *)0x0) {
              if ((*(byte *)(piVar6 + 10) & 4) == 0) {
                *(byte *)(piVar6 + 10) = *(byte *)(piVar6 + 10) | 4;
                (**(code **)(*piVar6 + 0x28))();
              }
              fVar1 = *(float *)(unaff_ESI + 0xb0);
              piVar6[3] = (int)((*(float *)(unaff_ESI + 0x14) - *(float *)(unaff_ESI + 0xac)) * 0.5)
              ;
              piVar6[4] = (int)((float)local_8 * fVar3 + (fVar3 - fVar1) * 0.5);
              (**(code **)(*piVar6 + 0x1c))();
            }
            break;
          }
          iVar7 = iVar7 + 1;
        }
      }
      local_8 = local_8 + 1;
    }
    piVar6 = *(int **)(*(int *)(unaff_ESI + 0x7c) + *(int *)(unaff_ESI + 0x9c) * 4);
    *(byte *)(piVar6 + 10) = *(byte *)(piVar6 + 10) | 1;
    if ((piVar6[1] != 0) && (piVar2 = *(int **)(piVar6[1] + 0x94), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x28))(piVar6);
    }
    (**(code **)(*piVar6 + 0x20))();
    if ((*(int *)(unaff_ESI + 4) != 0) &&
       (piVar6 = *(int **)(*(int *)(unaff_ESI + 4) + 0x94), piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 0x28))();
    }
  }
  return 1;
}
