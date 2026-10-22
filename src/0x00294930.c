/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6A24671808A465A4B038CC01BB7E88575285427F90CB89F3F94334CAA58FC53
 * Entry: 0x00294930, Ghidra index: 9298, label: FUN_00294930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9768;
extern uint32_t DAT_00469888;
int FUN_00294930(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  FUN_00294900();
  iVar4 = 0;
  do {
    piVar2 = (int *)(*(int *)(DAT_00469888 + 0x60) + iVar4);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(DAT_00469888 + 0x60) + iVar4)) {
      do {
        piVar1 = *(int **)(piVar2[2] + iVar3 * 4);
        if (piVar1 != (int *)0x0) {
          if (piVar1[1] == 1) {
            piVar1[1] = 0;
          }
          else if (piVar1[1] == 0) {
            *piVar1 = (int)piVar5;
            *(undefined **)(piVar2[2] + iVar3 * 4) = &DAT_003b9768;
            piVar5 = piVar1;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar2);
    }
    iVar4 = iVar4 + 0xc;
  } while (iVar4 < 0x2e8);
  return (int)piVar5;
}
