/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C10E0B11EE8131AED668ABAB37C232624976811CCC9FF51D44CDCD5CF31CBA5
 * Entry: 0x00023e40, Ghidra index: 248, label: FUN_00023e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00023e40(void)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  float10 fVar4;
  float fVar5;
  
  fVar4 = (float10)(**(code **)(*(int *)(in_EAX + 0x1b4) + 0xcc))();
  fVar1 = (float)fVar4;
  iVar2 = *(int *)(in_EAX + 0x2e8);
  cVar3 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x20))();
  if ((((cVar3 != '\0') && (iVar2 = *(int *)(iVar2 + 0x164), iVar2 != 0)) &&
      (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 0x14)) && (iVar2 != 0)) {
    iVar2 = *(int *)(iVar2 + 0x228);
    fVar4 = (float10)FUN_00232520();
    if (*(int *)(iVar2 + 0x34) == 2) {
      fVar4 = fVar4 * (float10)0.8;
    }
    fVar5 = (float)fVar4;
    if (fVar1 <= (float)fVar4) {
      fVar5 = fVar1;
    }
    return (float10)fVar5;
  }
  return (float10)fVar1;
}
