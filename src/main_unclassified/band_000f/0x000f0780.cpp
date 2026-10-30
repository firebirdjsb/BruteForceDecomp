/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEF2A5E37052D965EB151C90E87F7922178B6E6AFEAA52AF592C2820C56891F5
 * Entry: 0x000f0780, Ghidra index: 3002, label: FUN_000f0780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_000f0780(int param_1,undefined4 *param_2,char param_3)

{
  char extraout_AL;
  int *piVar1;
  int *piVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  int iVar4;
  int *piVar5;
  
  for (piVar1 = *(int **)(param_1 + 0x74);
      (piVar5 = (int *)0x0, piVar1 != *(int **)(param_1 + 0x78) &&
      (piVar5 = (int *)*piVar1, piVar5[9] != 0x1a1cb7a3)); piVar1 = piVar1 + 1) {
  }
  if ((piVar5 == (int *)0x0) || (piVar1 = (int *)(**(code **)(*piVar5 + 4))(), piVar1 != (int *)0x8)
     ) {
    return (uint)piVar1 & 0xffffff00;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x188))();
  piVar1 = piVar2 + 2;
  iVar4 = piVar2[1];
  if (iVar4 != *piVar1) {
    do {
      piVar2 = (int *)piVar5[0x1f];
      if (piVar2 == (int *)piVar5[0x20]) {
LAB_000f07fe:
        *param_2 = *(undefined4 *)(iVar4 + 0x1c);
        FUN_00101a30(1,1,0);
        FUN_00102e10(param_2);
        uVar3 = extraout_var;
        if ((extraout_AL != '\0') && (param_3 != '\0')) {
          piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
          (**(code **)(*piVar1 + 4))(param_1);
          uVar3 = extraout_var_00;
        }
        return CONCAT31(uVar3,extraout_AL);
      }
      while (*(int *)(*piVar2 + 0x24) != *(int *)(iVar4 + 0x1c)) {
        piVar2 = piVar2 + 1;
        if (piVar2 == (int *)piVar5[0x20]) goto LAB_000f07fe;
      }
      iVar4 = iVar4 + 0x3c;
    } while (iVar4 != *piVar1);
  }
  return (uint)piVar2 & 0xffffff00;
}
