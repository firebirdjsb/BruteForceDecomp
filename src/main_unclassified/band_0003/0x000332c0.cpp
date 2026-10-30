/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45EBCF39C46F3DFE4F6027300235157B15E155635CBEA0568DD5464DD742F09B
 * Entry: 0x000332c0, Ghidra index: 334, label: FUN_000332c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined1 FUN_000330b0(int param_1,float *param_2);

int * FUN_000332c0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  
  iVar4 = *(int *)(unaff_ESI + 4);
  if ((iVar4 == 0) || ((*(int *)(unaff_ESI + 8) - iVar4) / 0x18 == 0)) {
    return (int *)0x0;
  }
  piVar3 = *(int **)(iVar4 + 0x14);
  iVar4 = 0;
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0x3c))();
    if ((((iVar2 == 6) || ((0x19 < iVar2 && (iVar2 < 0x1c)))) &&
        (iVar2 = *(int *)(unaff_ESI + 4), iVar2 != 0)) &&
       (1 < (uint)((*(int *)(unaff_ESI + 8) - iVar2) / 0x18))) {
      piVar3 = *(int **)(iVar2 + 0x2c);
      iVar4 = 1;
    }
    if ((piVar3 != (int *)0x0) && (cVar1 = FUN_000330b0(), cVar1 != '\0')) {
      return *(int **)(*(int *)(unaff_ESI + 4) + 0x2c + iVar4 * 0x18);
    }
  }
  return piVar3;
}
