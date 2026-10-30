/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16D4477CEE80B20138499EF0AED97717447CC56859D7E05001DF1D7F35F39950
 * Entry: 0x00250ea0, Ghidra index: 8356, label: FUN_00250ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00250ea0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    piVar5 = param_1 + 2;
    do {
      iVar1 = *piVar6;
      piVar3 = piVar6;
      if (((iVar1 == 0) || (*param_1 == 0)) ||
         (piVar4 = param_1, *(int *)(*param_1 + 0x10) <= *(int *)(iVar1 + 0x10))) {
        do {
          piVar4 = piVar3;
          if ((iVar1 == 0) || (iVar2 = piVar4[-1], iVar2 == 0)) break;
          piVar3 = piVar4 + -1;
        } while (*(int *)(iVar1 + 0x10) < *(int *)(iVar2 + 0x10));
      }
      if ((piVar4 != piVar6) && (piVar6 != piVar5)) {
        FUN_00051570(piVar4,piVar6,piVar5,0,0);
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (piVar6 != param_2);
  }
  return;
}
