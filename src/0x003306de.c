/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FF181C43BEFEC6C313C6A58F578D60B09AFAC675B35D520CCF791857F2687BA
 * Entry: 0x003306de, Ghidra index: 12366, label: FUN_003306de
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003306de(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  *param_2 = -1;
  uVar2 = 0;
  *param_1 = 0;
  piVar4 = param_2;
  if ((LaunchDataPage_exref != (code *)0x0) &&
     (piVar1 = *(int **)LaunchDataPage_exref, piVar1 != (int *)0x0)) {
    piVar4 = piVar1;
    if ((*(byte *)(piVar1 + 0x85) & 1) == 0) {
      *param_2 = *piVar1;
    }
    else {
      *param_2 = piVar1[0x86];
      *param_1 = piVar1 + 0x87;
      uVar2 = 1;
    }
  }
  if (*param_2 != -1) {
    piVar4 = piVar4 + 0x100;
    for (iVar3 = 0x300; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *piVar4;
      piVar4 = piVar4 + 1;
      param_3 = param_3 + 1;
    }
  }
  return uVar2;
}
