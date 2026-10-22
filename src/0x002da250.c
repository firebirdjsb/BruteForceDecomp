/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2611516579540F6D0B78E3B6887172A5EDB9CB2F25C3E4C0655FF1B238723D96
 * Entry: 0x002da250, Ghidra index: 10265, label: FUN_002da250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002da250(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  int in_EAX;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(in_EAX + 0x44);
  if (iVar7 < *(int *)(in_EAX + 0x3c)) {
    do {
      piVar3 = *(int **)(in_EAX + 0x34);
      fVar5 = 0.0;
      piVar1 = piVar3 + iVar7;
      iVar2 = *(int *)(in_EAX + 0xbc) + *(int *)(in_EAX + 0x40) * *piVar1 * 4;
      iVar8 = *(int *)(in_EAX + 0x44);
      if (0 < iVar8) {
        piVar6 = piVar3;
        do {
          iVar4 = *piVar6;
          piVar6 = piVar6 + 1;
          iVar8 = iVar8 + -1;
          fVar5 = *(float *)(*(int *)(in_EAX + 0x20) + iVar4 * 4) * *(float *)(iVar2 + iVar4 * 4) +
                  fVar5;
        } while (iVar8 != 0);
      }
      iVar7 = iVar7 + 1;
      *(float *)(*(int *)(in_EAX + 0x28) + *piVar1 * 4) =
           fVar5 + *(float *)(iVar2 + piVar3[*(int *)(in_EAX + 0x4c)] * 4);
    } while (iVar7 < *(int *)(in_EAX + 0x3c));
  }
  return;
}
