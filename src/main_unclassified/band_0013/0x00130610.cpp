/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0010929C46DFA0E1562EEBA385AB09E8BD0412C40919F2054F9D18B3D4B87E4B
 * Entry: 0x00130610, Ghidra index: 3825, label: FUN_00130610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00130610(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EDI;
  
  piVar2 = *(int **)(param_1 + 0x38);
  for (piVar3 = *(int **)(param_1 + 0x34); piVar3 != piVar2; piVar3 = piVar3 + 6) {
    piVar1 = (int *)(unaff_EDI + (*piVar3 + 0x32) * 0x14);
    *piVar1 = piVar3[1];
    piVar1[1] = piVar3[2];
    *(char *)(piVar1 + 2) = (char)piVar3[3];
    *(undefined1 *)((int)piVar1 + 9) = *(undefined1 *)((int)piVar3 + 0xd);
    piVar1[3] = piVar3[4];
    piVar1[4] = piVar3[5];
  }
  piVar2 = *(int **)(param_1 + 0x48);
  for (piVar3 = *(int **)(param_1 + 0x44); piVar3 != piVar2; piVar3 = piVar3 + 5) {
    FUN_00145ba0(*piVar3 * 0x60 + 0x438 + unaff_EDI);
  }
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EDI + 0x678) = **(undefined4 **)(param_1 + 0x50);
  }
  return;
}
