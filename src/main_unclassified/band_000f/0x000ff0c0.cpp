/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC019209E290C8FF88D55E4834E759BF607EB6A1A15A9640C9B77C71020983E2
 * Entry: 0x000ff0c0, Ghidra index: 3189, label: FUN_000ff0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000ff0c0(void)

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
      if ((*(byte *)(*(int *)(piVar2[1] + 8) + 0x28) & 2) != 0) {
        pbVar1 = (byte *)(*(int *)(piVar2[1] + 8) + 0x65);
        *pbVar1 = *pbVar1 | 0x40;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != piVar4);
    if (piVar3 != piVar4) {
      do {
        piVar3 = (int *)piVar3[1];
        piVar2 = (int *)piVar3[2];
        if ((*(byte *)(piVar2 + 10) & 2) != 0) {
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
