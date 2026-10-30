/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFFFA0D914BEC0D2A682294E332AD0F77956D84BD0C7F83556225735C2D549C0
 * Entry: 0x0016e3c0, Ghidra index: 4815, label: FUN_0016e3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e3c0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    piVar5 = param_1 + 2;
    do {
      iVar1 = *(int *)(*piVar4 + 0xc);
      piVar3 = param_1;
      if (iVar1 < *(int *)(*param_1 + 0xc)) {
joined_r0x0016e423:
        if ((piVar3 != piVar4) && (piVar4 != piVar5)) {
          FUN_00051570(piVar3,piVar4,piVar5,0,0);
        }
      }
      else {
        piVar2 = piVar5 + -2;
        if (iVar1 < *(int *)(piVar5[-2] + 0xc)) {
          do {
            piVar3 = piVar2;
            piVar2 = piVar3 + -1;
          } while (iVar1 < *(int *)(piVar3[-1] + 0xc));
          goto joined_r0x0016e423;
        }
      }
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (piVar4 != param_2);
  }
  return;
}
