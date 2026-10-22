/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F57287FDFC59293249BD7C5BDB6E03EDDFB773B199842B6ACB8DA4BFE941009B
 * Entry: 0x0002e210, Ghidra index: 301, label: FUN_0002e210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0002e210(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = FUN_000120f0();
  iVar4 = (**(code **)(**(int **)(iVar3 + 0xc) + 0xc))();
  fVar5 = *(float *)(iVar4 + 0x70);
  iVar4 = *(int *)(iVar3 + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar4 + 0x144) + 0x20))();
  if ((((cVar2 == '\0') || (iVar4 = *(int *)(iVar4 + 0x164), iVar4 == 0)) ||
      (*(int *)(*(int *)(iVar4 + 0xc) + 4) != 0x14)) || (iVar4 == 0)) {
    fVar1 = 0.0;
  }
  else {
    iVar4 = *(int *)(iVar3 + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar4 + 0x144) + 0x20))();
    if (((cVar2 == '\0') || (iVar4 = *(int *)(iVar4 + 0x164), iVar4 == 0)) ||
       (*(int *)(*(int *)(iVar4 + 0xc) + 4) != 0x14)) {
      iVar4 = 0;
    }
    fVar1 = *(float *)(*(int *)(iVar4 + 0x228) + 0x24) * 1.7;
  }
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  return (float10)fVar5;
}
