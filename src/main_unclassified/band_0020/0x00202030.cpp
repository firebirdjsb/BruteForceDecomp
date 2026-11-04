/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B4FDFC04FD569BEB038601069B45D3CE783155532549F9AC7A7C2404FB2DF1E
 * Entry: 0x00202030, Ghidra index: 7270, label: FUN_00202030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_00039510(void);
void FUN_00202030(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 uStack_8;
  
  iVar5 = 0;
  uVar4 = 0;
LAB_00202040:
  do {
    if ((*(int *)(unaff_ESI + 0x98) == 0) ||
       ((uint)((*(int *)(unaff_ESI + 0x9c) - *(int *)(unaff_ESI + 0x98)) / 0x24) <= uVar4)) {
      return;
    }
    if ((*(int *)(unaff_ESI + 0x98) != 0) &&
       (uVar4 < (uint)((*(int *)(unaff_ESI + 0x9c) - *(int *)(unaff_ESI + 0x98)) / 0x24))) {
      piVar1 = *(int **)(*(int *)(unaff_ESI + 0x98) + 4 + iVar5);
      if ((piVar1 != (int *)0x0) &&
         ((*(int *)piVar1[0x1b] != 0 && (iVar2 = *(int *)(*(int *)piVar1[0x1b] + 0x14), iVar2 != 0))
         )) {
        piVar3 = *(int **)(iVar2 + 4);
        if (piVar3 != *(int **)(iVar2 + 8)) {
          do {
            if (*piVar3 == *(int *)(*(int *)(unaff_ESI + 0x98) + iVar5 + 8)) {
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar1 + 0x40))();
                FUN_00039510();
                *(undefined4 *)(*(int *)(unaff_ESI + 0xa8) + uVar4 * 4) = uStack_8;
              }
              goto LAB_00202102;
            }
            piVar3 = piVar3 + 0xe;
          } while (piVar3 != *(int **)(iVar2 + 8));
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0x24;
          goto LAB_00202040;
        }
      }
    }
LAB_00202102:
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 0x24;
  } while( true );
}
