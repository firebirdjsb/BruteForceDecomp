/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3D5B07169B3A7FD89EE896D10F739CD61BC806454036064A42B1A06BA65238C
 * Entry: 0x002aace0, Ghidra index: 9657, label: FUN_002aace0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_001376b0(void);
undefined4 FUN_002aace0(int param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_4;
  if (param_4 != 0) {
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      do {
        if ((((param_2[3] == piVar1[1]) && (param_2[1] == piVar1[3])) && (param_2[2] == *piVar1)) &&
           (*param_2 == piVar1[2])) {
          return 0x80004005;
        }
        piVar1 = piVar1 + 4;
      } while (piVar1 != *(int **)(param_1 + 0x10));
    }
  }
  FUN_001376b0();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar2;
  }
  piVar1 = (int *)(param_1 + 0x38);
  *(int *)(*(int *)(param_1 + 0x10) + -0xc) = iVar2;
  param_4 = iVar2;
  piVar3 = &param_4;
  if (iVar2 <= *piVar1) {
    piVar3 = piVar1;
  }
  *piVar1 = *piVar3;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  return 0;
}
