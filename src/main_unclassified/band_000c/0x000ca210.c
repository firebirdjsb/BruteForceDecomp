/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 774B001416A6CE7BC0AB6EEC5A12B711DFE02D95CC1FCB046B14276581DA4429
 * Entry: 0x000ca210, Ghidra index: 2501, label: FUN_000ca210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ca210(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int in_EAX;
  
  piVar3 = *(int **)(in_EAX + 0x6c);
  cVar5 = FUN_000c9920();
  if (cVar5 != '\0') {
    fVar1 = (float)piVar3[6];
    iVar4 = piVar3[0xb];
    *(byte *)(piVar3 + 0x12) = *(byte *)(piVar3 + 0x12) & 0xe7;
    fVar2 = *(float *)(iVar4 + 0x40);
    *(float *)(iVar4 + 0x40) = fVar1;
    if (fVar1 != fVar2) {
      FUN_000c9890(iVar4);
    }
    (**(code **)(*piVar3 + 0x30))();
  }
  return;
}
