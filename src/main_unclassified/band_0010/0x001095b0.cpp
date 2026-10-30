/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24DB455C631A1C4B7879F6230972F5156EF6D90820CC6B5AA5B4D801D200CC98
 * Entry: 0x001095b0, Ghidra index: 3404, label: FUN_001095b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001095b0(void)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  byte bVar4;
  int *piVar5;
  
  piVar2 = *(int **)(in_ECX + 0x6c);
  bVar4 = *(byte *)(in_ECX + 0x28) >> 2 & 1;
  for (piVar5 = *(int **)(in_ECX + 0x68); piVar5 != piVar2; piVar5 = piVar5 + 2) {
    if (piVar5[1] == 2) {
      piVar3 = (int *)*piVar5;
      bVar1 = *(byte *)(piVar3 + 10);
      if (bVar4 != (bVar1 >> 2 & 1)) {
        *(byte *)(piVar3 + 10) = (bVar4 << 2 ^ bVar1) & 4 ^ bVar1;
        (**(code **)(*piVar3 + 0x28))();
      }
    }
  }
  return 1;
}
