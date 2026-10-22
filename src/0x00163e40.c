/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA994B76481FBFA23D2DA78AA8358AD324EA6C5CB279FE8143328049A4A45A3A
 * Entry: 0x00163e40, Ghidra index: 4674, label: FUN_00163e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00163e40(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_EBX;
  int *piVar4;
  int *piVar5;
  
  if ((unaff_EBX != param_1) && (piVar4 = unaff_EBX + 6, piVar4 != param_1)) {
    piVar5 = unaff_EBX + 0xc;
    do {
      iVar1 = *piVar4;
      piVar2 = unaff_EBX;
      if (iVar1 < *unaff_EBX) {
joined_r0x00163e80:
        if ((piVar2 != piVar4) && (piVar4 != piVar5)) {
          FUN_001654c0();
        }
      }
      else {
        piVar3 = piVar5 + -0xc;
        if (iVar1 < piVar5[-0xc]) {
          do {
            piVar2 = piVar3;
            piVar3 = piVar2 + -6;
          } while (iVar1 < *piVar3);
          goto joined_r0x00163e80;
        }
      }
      piVar4 = piVar4 + 6;
      piVar5 = piVar5 + 6;
    } while (piVar4 != param_1);
  }
  return;
}
