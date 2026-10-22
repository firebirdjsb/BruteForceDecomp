/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E591A82196FC0FFCC80EC2576D37D2E8C5C0871801B0A49836031BF27041A4A2
 * Entry: 0x00122da0, Ghidra index: 3666, label: FUN_00122da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00122da0(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int *piVar3;
  int in_ECX;
  int iVar4;
  
  if (*(int *)(in_ECX + 0x5b0) == in_EAX) {
    return 0;
  }
  if (in_EAX == 1) {
    piVar3 = *(int **)(in_ECX + 0x2e8);
    cVar2 = (**(code **)(*piVar3 + 0x20))();
    if ((cVar2 == '\0') || (piVar3[8] == 0)) {
      return 0;
    }
    if (*(int *)(in_ECX + 0x5b0) == 2) {
      piVar3 = *(int **)(*(int *)(in_ECX + 0xc) + 0x2cc);
      iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x2c8);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          if (*piVar3 == 0x39) goto LAB_00122e53;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0x13;
        } while (iVar4 < iVar1);
      }
    }
  }
  else if (in_EAX == 2) {
    iVar1 = *(int *)(in_ECX + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar1 + 0x44) + 0x20))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(int *)(iVar1 + 100) == 0) {
      return 0;
    }
    if (*(int *)(in_ECX + 0x5b0) == 1) {
      piVar3 = *(int **)(*(int *)(in_ECX + 0xc) + 0x2cc);
      iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x2c8);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          if (*piVar3 == 0x34) goto LAB_00122e53;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0x13;
        } while (iVar4 < iVar1);
      }
    }
  }
LAB_00122e7b:
  if (0.0 < *(float *)(in_ECX + 0x7dc)) {
    FUN_00123f60();
  }
  return 1;
LAB_00122e53:
  if ((*(byte *)((int)piVar3 + 0x3d) & 4) == 0) {
    if (*(int *)(in_ECX + 0x218) == 0) {
      *(int **)(in_ECX + 0x218) = piVar3;
    }
  }
  else if (*(int *)(in_ECX + 0x244) == 0) {
    *(int **)(in_ECX + 0x244) = piVar3;
  }
  goto LAB_00122e7b;
}
