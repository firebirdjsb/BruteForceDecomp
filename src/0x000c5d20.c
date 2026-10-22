/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 541EC0F989DAAE1090082C2F384571E843C0B4A0A5446948150C621DEDF7B66E
 * Entry: 0x000c5d20, Ghidra index: 2430, label: FUN_000c5d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c5d20(float param_1)

{
  char cVar1;
  int iVar2;
  int *unaff_ESI;
  float10 fVar3;
  
  if (unaff_ESI[0x2a] == 0) {
    fVar3 = (float10)param_1;
  }
  else {
    iVar2 = *(int *)(unaff_ESI[0x2a] + 0x2e8);
    cVar1 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x20))();
    if ((((cVar1 != '\0') && (iVar2 = *(int *)(iVar2 + 0x164), iVar2 != 0)) &&
        (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 0x14)) && (iVar2 != 0)) {
      param_1 = param_1 * *(float *)(*(int *)(iVar2 + 0x228) + 0x134);
    }
    fVar3 = (float10)(**(code **)(**(int **)(unaff_ESI[0x2a] + 0x5a4) + 0x100))(param_1);
  }
  unaff_ESI[0x1f] = (int)(float)fVar3;
  iVar2 = (**(code **)(*unaff_ESI + 0x38))();
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x34) = unaff_ESI[0x1f];
  }
  return;
}
