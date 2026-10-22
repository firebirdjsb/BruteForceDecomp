/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFBFFEEDA5DC4A5B6A9DA6B0EBA2F6DF5D5A5D4C874F90F051535D95451F6E57
 * Entry: 0x001643b0, Ghidra index: 4677, label: FUN_001643b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001643b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_EBX;
  int *piVar4;
  int *piVar5;
  
  if ((unaff_EBX != param_1) && (piVar4 = unaff_EBX + 5, piVar4 != param_1)) {
    piVar5 = unaff_EBX + 10;
    do {
      iVar1 = *piVar4;
      piVar2 = unaff_EBX;
      if (iVar1 < *unaff_EBX) {
joined_r0x001643f0:
        if ((piVar2 != piVar4) && (piVar4 != piVar5)) {
          FUN_00165730();
        }
      }
      else {
        piVar3 = piVar5 + -10;
        if (iVar1 < piVar5[-10]) {
          do {
            piVar2 = piVar3;
            piVar3 = piVar2 + -5;
          } while (iVar1 < *piVar3);
          goto joined_r0x001643f0;
        }
      }
      piVar4 = piVar4 + 5;
      piVar5 = piVar5 + 5;
    } while (piVar4 != param_1);
  }
  return;
}
