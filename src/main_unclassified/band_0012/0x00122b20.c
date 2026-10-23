/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B74AD9CF9A551AD00834EF51BE067CEB6B5AF5332235650FEB1FF3C88071F244
 * Entry: 0x00122b20, Ghidra index: 3665, label: FUN_00122b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00122b20(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  
  piVar4 = *(int **)(unaff_EDI + 0x2e8);
  cVar1 = (**(code **)(*piVar4 + 0x20))();
  if ((cVar1 == '\0') || (iVar6 = piVar4[8], iVar6 == 0)) {
    iVar6 = *(int *)(unaff_EDI + 0x2e8);
    cVar1 = (**(code **)(*(int *)(iVar6 + 0x44) + 0x20))();
    if (cVar1 == '\0') {
      return 0;
    }
    iVar6 = *(int *)(iVar6 + 100);
    if (iVar6 == 0) {
      return 0;
    }
  }
  iVar3 = *(int *)(unaff_EDI + 0x2e8);
  cVar1 = (**(code **)(*(int *)(iVar3 + 0x178) + 0x20))();
  if ((cVar1 != '\0') && (*(int *)(iVar3 + 0x198) != 0)) {
    return 0;
  }
  cVar1 = (**(code **)(**(int **)(unaff_EDI + 0x5a4) + 0xf4))();
  iVar3 = *(int *)(unaff_EDI + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
  if ((((cVar2 == '\0') || (iVar3 = *(int *)(iVar3 + 0x164), iVar3 == 0)) ||
      (*(int *)(*(int *)(iVar3 + 0xc) + 4) != 0x14)) || (iVar3 == 0)) {
    iVar5 = 0;
    piVar4 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
    iVar3 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
    if (**(int **)(iVar6 + 0x228) == 1) {
      if (0 < iVar3) {
        do {
          if (*piVar4 == 0xc) goto LAB_00122d52;
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 0x13;
        } while (iVar5 < iVar3);
      }
    }
    else if (0 < iVar3) {
      do {
        if (*piVar4 == 0xb) goto LAB_00122d52;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar5 < iVar3);
    }
  }
  else {
    iVar3 = FUN_0014d2e0();
    if (**(int **)(iVar3 + 0x228) == 1) {
      iVar5 = 0;
      piVar4 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
      iVar3 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
      if (**(int **)(iVar6 + 0x228) == 1) {
        if (cVar1 == '\0') {
          if (0 < iVar3) {
            do {
              if (*piVar4 == 0x2a) goto LAB_00122d52;
              iVar5 = iVar5 + 1;
              piVar4 = piVar4 + 0x13;
            } while (iVar5 < iVar3);
          }
        }
        else if (0 < iVar3) {
          do {
            if (*piVar4 == 5) goto LAB_00122d52;
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 0x13;
          } while (iVar5 < iVar3);
        }
      }
      else if (cVar1 == '\0') {
        if (0 < iVar3) {
          do {
            if (*piVar4 == 0x29) goto LAB_00122d52;
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 0x13;
          } while (iVar5 < iVar3);
        }
      }
      else if (0 < iVar3) {
        do {
          if (*piVar4 == 4) goto LAB_00122d52;
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 0x13;
        } while (iVar5 < iVar3);
      }
    }
    else {
      iVar5 = 0;
      piVar4 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
      iVar3 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
      if (**(int **)(iVar6 + 0x228) == 1) {
        if (cVar1 == '\0') {
          if (0 < iVar3) {
            do {
              if (*piVar4 == 0xc) goto LAB_00122d52;
              iVar5 = iVar5 + 1;
              piVar4 = piVar4 + 0x13;
            } while (iVar5 < iVar3);
          }
        }
        else if (0 < iVar3) {
          do {
            if (*piVar4 == 3) goto LAB_00122d52;
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 0x13;
          } while (iVar5 < iVar3);
        }
      }
      else if (cVar1 == '\0') {
        if (0 < iVar3) {
          do {
            if (*piVar4 == 0xb) goto LAB_00122d52;
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 0x13;
          } while (iVar5 < iVar3);
        }
      }
      else if (0 < iVar3) {
        do {
          if (*piVar4 == 2) goto LAB_00122d52;
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 0x13;
        } while (iVar5 < iVar3);
      }
    }
  }
LAB_00122d7a:
  if (0.0 < *(float *)(unaff_EDI + 0x7dc)) {
    FUN_00123f60();
  }
  return 1;
LAB_00122d52:
  if ((*(byte *)((int)piVar4 + 0x3d) & 4) == 0) {
    if (*(int *)(unaff_EDI + 0x218) == 0) {
      *(int **)(unaff_EDI + 0x218) = piVar4;
    }
  }
  else if (*(int *)(unaff_EDI + 0x244) == 0) {
    *(int **)(unaff_EDI + 0x244) = piVar4;
  }
  goto LAB_00122d7a;
}
