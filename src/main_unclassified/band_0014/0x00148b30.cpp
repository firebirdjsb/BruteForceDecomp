/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B39107A497FF7E53DC8051A03F9D34D19E73E116DB733D2D7DA55123BC37CAFF
 * Entry: 0x00148b30, Ghidra index: 4263, label: FUN_00148b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00148b30(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  cVar2 = (**(code **)(*param_1 + 0x20))();
  if (cVar2 != '\0') {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x58))(param_1);
    if (piVar3 != (int *)0x0) {
      if ((int *)piVar3[5] != param_1) {
        FUN_0008f6a0(param_1);
      }
      FUN_00122900(piVar3);
      iVar1 = *piVar3;
      uVar4 = (**(code **)(*param_1 + 0x5c))();
      (**(code **)(iVar1 + 8))(uVar4);
      return 1;
    }
  }
  return 0;
}
