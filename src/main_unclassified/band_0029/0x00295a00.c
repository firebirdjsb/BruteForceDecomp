/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A751F2D67AE2702CEDDD38F8A3F034414F1509020C2B5373FB58BEF6D9CE453
 * Entry: 0x00295a00, Ghidra index: 9328, label: FUN_00295a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00295a00(void)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint *unaff_ESI;
  
  while (((uVar3 = *unaff_ESI, uVar3 == 0x20 || (uVar3 == 9)) || (uVar3 == 0xd))) {
    *(int *)unaff_ESI[6] = *(int *)unaff_ESI[6] + -1;
    piVar2 = (int *)unaff_ESI[6];
    if (*piVar2 < 0) {
      uVar3 = (*(code *)piVar2[2])(piVar2);
      *unaff_ESI = uVar3;
    }
    else {
      bVar1 = *(byte *)piVar2[1];
      piVar2[1] = (int)((byte *)piVar2[1] + 1);
      *unaff_ESI = (uint)bVar1;
    }
  }
  return;
}
