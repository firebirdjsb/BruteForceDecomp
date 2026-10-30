/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62BA053233FC3A5587102AFED93AFFF7B7D1F3A8E9E05EEDD17005F2AEB9E3D7
 * Entry: 0x00166100, Ghidra index: 4709, label: FUN_00166100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00166100(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_EBX;
  int *piVar4;
  int *piVar5;
  
  if ((unaff_EBX != param_1) && (piVar4 = unaff_EBX + 0x148, piVar4 != param_1)) {
    piVar5 = unaff_EBX + 0x290;
    do {
      iVar1 = *piVar4;
      piVar2 = unaff_EBX;
      if (iVar1 < *unaff_EBX) {
joined_r0x00166153:
        if ((piVar2 != piVar4) && (piVar4 != piVar5)) {
          FUN_00166980();
        }
      }
      else {
        piVar3 = piVar5 + -0x290;
        if (iVar1 < piVar5[-0x290]) {
          do {
            piVar2 = piVar3;
            piVar3 = piVar2 + -0x148;
          } while (iVar1 < *piVar3);
          goto joined_r0x00166153;
        }
      }
      piVar4 = piVar4 + 0x148;
      piVar5 = piVar5 + 0x148;
    } while (piVar4 != param_1);
  }
  return;
}
