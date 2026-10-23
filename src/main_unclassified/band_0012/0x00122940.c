/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA1BB860576E5BFF85D438AE2F202E8F0CFDCAE95C25C70F40BC56F3156C1529
 * Entry: 0x00122940, Ghidra index: 3664, label: FUN_00122940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00122940(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar4 = *(int *)(unaff_EDI + 0x2e8);
  cVar1 = (**(code **)(*(int *)(iVar4 + 0x178) + 0x20))();
  if ((cVar1 != '\0') && (*(int *)(iVar4 + 0x198) != 0)) {
    return 0;
  }
  piVar2 = *(int **)(unaff_EDI + 0x2e8);
  cVar1 = (**(code **)(*piVar2 + 0x20))();
  if ((cVar1 == '\0') || (piVar2[8] == 0)) {
    iVar4 = *(int *)(unaff_EDI + 0x2e8);
    cVar1 = (**(code **)(*(int *)(iVar4 + 0x44) + 0x20))();
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(int *)(iVar4 + 100) == 0) {
      return 0;
    }
  }
  iVar4 = *(int *)(unaff_EDI + 0x2e8);
  cVar1 = (**(code **)(*(int *)(iVar4 + 0x144) + 0x20))();
  if ((((cVar1 == '\0') || (iVar4 = *(int *)(iVar4 + 0x164), iVar4 == 0)) ||
      (*(int *)(*(int *)(iVar4 + 0xc) + 4) != 0x14)) || (iVar4 == 0)) {
    piVar2 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
    iVar4 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        if (*piVar2 == 0x38) goto LAB_00122ad4;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0x13;
      } while (iVar3 < iVar4);
    }
  }
  else {
    piVar2 = *(int **)(unaff_EDI + 0x2e8);
    cVar1 = (**(code **)(*piVar2 + 0x20))();
    if ((cVar1 == '\0') || (piVar2[8] == 0)) {
      iVar4 = *(int *)(unaff_EDI + 0x2e8);
      cVar1 = (**(code **)(*(int *)(iVar4 + 0x44) + 0x20))();
      if (cVar1 == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 100);
      }
      piVar2 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
      iVar3 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
      if (**(int **)(iVar4 + 0x228) == 2) {
        iVar4 = 0;
        if (0 < iVar3) {
          do {
            if (*piVar2 == 0x35) goto LAB_00122ad4;
            iVar4 = iVar4 + 1;
            piVar2 = piVar2 + 0x13;
          } while (iVar4 < iVar3);
        }
      }
      else {
        iVar4 = 0;
        if (0 < iVar3) {
          do {
            if (*piVar2 == 0x36) goto LAB_00122ad4;
            iVar4 = iVar4 + 1;
            piVar2 = piVar2 + 0x13;
          } while (iVar4 < iVar3);
        }
      }
    }
    else {
      iVar3 = FUN_0014d2e0();
      piVar2 = *(int **)(*(int *)(unaff_EDI + 0xc) + 0x2cc);
      iVar4 = *(int *)(*(int *)(unaff_EDI + 0xc) + 0x2c8);
      if (**(int **)(iVar3 + 0x228) == 2) {
        iVar3 = 0;
        if (0 < iVar4) {
          do {
            if (*piVar2 == 0x37) goto LAB_00122ad4;
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 0x13;
          } while (iVar3 < iVar4);
        }
      }
      else {
        iVar3 = 0;
        if (0 < iVar4) {
          do {
            if (*piVar2 == 0x38) goto LAB_00122ad4;
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 0x13;
          } while (iVar3 < iVar4);
        }
      }
    }
  }
LAB_00122afc:
  if (0.0 < *(float *)(unaff_EDI + 0x7dc)) {
    FUN_00123f60();
  }
  return 1;
LAB_00122ad4:
  if ((*(byte *)((int)piVar2 + 0x3d) & 4) == 0) {
    if (*(int *)(unaff_EDI + 0x218) == 0) {
      *(int **)(unaff_EDI + 0x218) = piVar2;
    }
  }
  else if (*(int *)(unaff_EDI + 0x244) == 0) {
    *(int **)(unaff_EDI + 0x244) = piVar2;
  }
  goto LAB_00122afc;
}
