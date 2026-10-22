/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 204AC9E1FCB622C9B5BF6C5CE5264CA514F61849CE6427F92B2D6B89EE763AE8
 * Entry: 0x0002a110, Ghidra index: 282, label: FUN_0002a110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0002a110(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  piVar5 = (int *)FUN_000120f0();
  piVar6 = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    piVar6 = (int *)**(undefined4 **)(param_1 + 0x30);
  }
  if (piVar6 != *(int **)(param_1 + 0x30)) {
    while (((iVar8 = piVar6[3], (*(byte *)(iVar8 + 0x28) & 4) == 0 ||
            (iVar7 = (**(code **)(*piVar5 + 0x40))(),
            fVar1 = *(float *)(iVar8 + 0x1c) - *(float *)(iVar7 + 0x2c),
            fVar2 = *(float *)(iVar8 + 0x18) - *(float *)(iVar7 + 0x28),
            fVar3 = *(float *)(iVar8 + 0x14) - *(float *)(iVar7 + 0x24),
            fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 <= 2.25)) ||
           (cVar4 = FUN_0004cbc0(param_2), cVar4 == '\0'))) {
      piVar6 = (int *)*piVar6;
      if (piVar6 == (int *)*(int *)(param_1 + 0x30)) {
        return 0;
      }
    }
  }
  return iVar8;
}
