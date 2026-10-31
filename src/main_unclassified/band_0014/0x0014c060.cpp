/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A095ECDBBB15ABD2CC64E637C48744847DB6BB6F0E1C5365F79F042029E98279
 * Entry: 0x0014c060, Ghidra index: 4333, label: FUN_0014c060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern int FUN_0014bfe0(int param_1);
int FUN_0014c060(int param_1)

{
  int *piVar1;
  char cVar2;
  int *in_EAX;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  iVar6 = 0;
  local_8 = 10;
  do {
    piVar5 = in_EAX + 4;
    piVar7 = (int *)in_EAX[3];
    if (piVar7 != (int *)*piVar5) {
      do {
        piVar1 = (int *)*piVar7;
        if ((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x20))(), cVar2 != '\0')) {
          uVar3 = (**(code **)(*piVar1 + 0x5c))();
          iVar4 = FUN_0014bfe0(uVar3);
          iVar6 = iVar6 + iVar4;
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != (int *)*piVar5);
    }
    local_8 = local_8 + -1;
    in_EAX = piVar5;
  } while (local_8 != 0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return iVar6;
}
