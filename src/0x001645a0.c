/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D753B64EA854964567B4B716BBA4C90BAA7974A692680EC91A0C7DC955E33B95
 * Entry: 0x001645a0, Ghidra index: 4679, label: FUN_001645a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001645a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  
  iVar2 = (in_EAX - param_1) / 0x18;
  iVar6 = iVar2 / 2;
  if (0 < iVar6) {
    piVar5 = (int *)(param_1 + 4 + iVar6 * 0x18);
    do {
      piVar1 = piVar5 + -7;
      piVar5 = piVar5 + -6;
      uStack_18 = param_2;
      iVar6 = iVar6 + -1;
      if (*piVar5 == 0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)FUN_002ea01d(4,*piVar1,0);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = 0;
        }
      }
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        *puVar7 = *(undefined4 *)*piVar5;
      }
      puVar7 = local_28;
      iVar3 = 4 - (int)puVar7;
      iVar4 = 4;
      do {
        *puVar7 = *(undefined4 *)((int)piVar5 + iVar3 + (int)puVar7);
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_00164b40(param_1,iVar2);
    } while (0 < iVar6);
  }
  return;
}
