/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F3760B098D4D6DB24D333D2EBF5FE307F36F167E3A320AE99C4E7E8AAA328C7
 * Entry: 0x00236980, Ghidra index: 7834, label: FUN_00236980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00236980(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  piVar1 = *(int **)(in_ECX + 0x58);
  iVar6 = 0;
  if ((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0xc))(piVar1), cVar3 != '\0')) {
    iVar6 = 1;
  }
  iVar2 = *(int *)(in_ECX + 0x50);
  for (iVar5 = *(int *)(in_ECX + 0x4c); iVar5 != iVar2; iVar5 = iVar5 + 4) {
    iVar4 = FUN_00236980(param_1);
    iVar6 = iVar6 + iVar4;
  }
  if ((*(int *)(in_ECX + 8) == 0) && (iVar6 == 0)) {
    *(uint *)(in_ECX + 0x44) = *(uint *)(in_ECX + 0x44) & 0xffffffbf;
    cVar3 = FUN_00236940();
    if (cVar3 == '\0') {
      *(uint *)(in_ECX + 0x44) = *(uint *)(in_ECX + 0x44) & 0xfffffdff;
    }
  }
  return iVar6;
}
