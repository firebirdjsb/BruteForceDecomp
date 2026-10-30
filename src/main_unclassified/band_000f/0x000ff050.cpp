/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B69C5981A7AFFE52D36AE17B84342EFADE9B37B35E25C652DF34E0A15E966263
 * Entry: 0x000ff050, Ghidra index: 3188, label: FUN_000ff050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000ff050(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  int *in_ECX;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)in_ECX[2];
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)*piVar3;
  }
  piVar2 = piVar3;
  if (piVar3 != piVar4) {
    do {
      if (*(int *)(*(int *)(piVar2[1] + 8) + 0x60) == param_1) {
        pbVar1 = (byte *)(*(int *)(piVar2[1] + 8) + 0x65);
        *pbVar1 = *pbVar1 | 0x40;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != piVar4);
    if (piVar3 != piVar4) {
      do {
        piVar3 = (int *)piVar3[1];
        piVar2 = (int *)piVar3[2];
        if (piVar2[0x18] == param_1) {
          (**(code **)(*in_ECX + 0x14))(piVar2);
          piVar3 = (int *)in_ECX[2];
          piVar2 = (int *)0x0;
          piVar4 = piVar2;
          if (piVar3 != (int *)0x0) {
            piVar2 = (int *)*piVar3;
            piVar4 = piVar2;
          }
        }
      } while (piVar3 != piVar4);
    }
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}
