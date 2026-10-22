/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BA3FE6F00219FED5504DD59BDEC97C93F334847E82674F65FBAE9A081FE3F6A
 * Entry: 0x000e3420, Ghidra index: 2812, label: FUN_000e3420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3420(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    piVar5 = param_1 + 2;
    do {
      uVar1 = *(uint *)(*piVar4 + 4);
      piVar3 = param_1;
      if (uVar1 < *(uint *)(*param_1 + 4)) {
joined_r0x000e3483:
        if ((piVar3 != piVar4) && (piVar4 != piVar5)) {
          FUN_00051570(piVar3,piVar4,piVar5,0,0);
        }
      }
      else {
        piVar2 = piVar5 + -2;
        if (uVar1 < *(uint *)(piVar5[-2] + 4)) {
          do {
            piVar3 = piVar2;
            piVar2 = piVar3 + -1;
          } while (uVar1 < *(uint *)(piVar3[-1] + 4));
          goto joined_r0x000e3483;
        }
      }
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (piVar4 != param_2);
  }
  return;
}
