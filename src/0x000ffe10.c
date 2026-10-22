/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 166B2D16A5B147E5DB97B58C1BEE033B5198154EAAC400E173C91EA337D1B086
 * Entry: 0x000ffe10, Ghidra index: 3209, label: FUN_000ffe10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000ffe10(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *in_EAX;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    while( true ) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x74) + iVar6 * 4);
      cVar3 = (**(code **)(*in_EAX + 0x14))();
      if ((cVar3 != '\0') && (piVar1 == in_EAX)) break;
      iVar6 = iVar6 + 1;
      if (iVar5 <= iVar6) {
        return 0;
      }
    }
    FUN_000ffd00();
    *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) | 1;
    if ((piVar1[1] != 0) && (piVar2 = *(int **)(piVar1[1] + 0x94), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x28))(piVar1);
    }
    (**(code **)(*piVar1 + 0x20))();
    uVar4 = 1;
  }
  return uVar4;
}
