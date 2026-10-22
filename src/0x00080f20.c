/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C888F11410B7AB795D5561732855A395606059CF3BEDADE502EDD3E7E869572C
 * Entry: 0x00080f20, Ghidra index: 1517, label: FUN_00080f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00080f20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *in_ECX;
  int iStack_14;
  
  iVar2 = (**(code **)(*in_ECX + 0xe4))();
  if (iVar2 != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x1a8))();
    if (iVar3 != 0) {
      iStack_14 = 0;
      do {
        piVar1 = *(int **)(iVar2 + 0x44);
        piVar4 = *(int **)(iVar2 + 0x40);
        if (piVar4 == piVar1) {
LAB_00080f82:
          iVar5 = FUN_00160da0(0xffffffff,1);
          if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 3)) {
            FUN_00074fb0();
            FUN_00074fb0();
          }
        }
        else {
          do {
            if (*piVar4 == *(int *)(iStack_14 * 8 + 0x5c + iVar3)) break;
            piVar4 = piVar4 + 1;
          } while (piVar4 != piVar1);
          if (piVar4 == piVar1) goto LAB_00080f82;
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < 4);
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}
