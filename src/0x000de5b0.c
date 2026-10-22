/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF3540168E441CF118B684DB06BF58AD8FC4338A544EE23DCA57AC4A78871EFF
 * Entry: 0x000de5b0, Ghidra index: 2715, label: FUN_000de5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
undefined1 FUN_000de5b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_15;
  int local_10;
  uint local_c;
  
  bVar5 = false;
  local_15 = 0;
  piVar6 = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0xc28) != (undefined4 *)0x0) {
    piVar6 = (int *)**(undefined4 **)(param_1 + 0xc28);
  }
  uVar9 = local_c;
  uVar4 = 0;
  if (piVar6 != *(int **)(param_1 + 0xc28)) {
    do {
      if (*(int *)(piVar6[2] + 8) == 0) {
        piVar7 = (int *)(piVar6[2] + 0xc);
      }
      else {
        bVar5 = true;
        uVar9 = 0;
        local_c = 0;
        piVar7 = &local_10;
      }
      iVar1 = piVar7[1];
      if (((bVar5) && (bVar5 = false, uVar9 != 0)) && ((uVar9 & 1) == 0)) {
        iVar8 = uVar9 * 0x19660d;
        uVar9 = 0;
        local_c = 0;
        iVar2 = *(int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
        piVar7 = (int *)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar2 != 0) {
          piVar3 = (int *)*piVar7;
          if (piVar3 == &local_10) {
            *piVar7 = *(int *)*piVar7;
            uVar9 = 0;
            break;
          }
          piVar7 = piVar3;
          iVar2 = *piVar3;
        }
      }
      if ((iVar1 == param_2) && (piVar7 = (int *)piVar6[2], piVar7[1] != param_3)) {
        if ((*(byte *)(piVar7 + 5) & 1) != 0) {
          (**(code **)(*piVar7 + 0x20))();
          if ((undefined4 *)piVar6[2] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)piVar6[2])(1);
          }
        }
        piVar7 = (int *)*piVar6;
        if (piVar6 != *(int **)(param_1 + 0xc28)) {
          *(int **)piVar6[1] = piVar7;
          *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar6);
        }
        local_15 = 1;
      }
      else {
        piVar7 = (int *)*piVar6;
      }
      piVar6 = piVar7;
      uVar4 = local_15;
    } while (piVar7 != *(int **)(param_1 + 0xc28));
  }
  return uVar4;
}
