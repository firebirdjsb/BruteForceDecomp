/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E0820F76A31B92862D63AB95B8B0FD0ECF00BC3215012203514AA9AE8C0DE8A
 * Entry: 0x001241b0, Ghidra index: 3679, label: FUN_001241b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_00222ac0(int param_1,int param_2);
void FUN_001241b0(void)

{
  char cVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x2e8);
  cVar1 = (*(int *)(in_EAX + 0x7a8) == 0) + '\x01';
  cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
  if ((((cVar2 != '\0') && (iVar3 = *(int *)(iVar3 + 0x164), iVar3 != 0)) &&
      (*(int *)(*(int *)(iVar3 + 0xc) + 4) == 0x14)) && (iVar3 != 0)) {
    iVar3 = *(int *)(in_EAX + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
    if (((cVar2 == '\0') || (iVar3 = *(int *)(iVar3 + 0x164), iVar3 == 0)) ||
       (*(int *)(*(int *)(iVar3 + 0xc) + 4) != 0x14)) {
      iVar3 = 0;
    }
    FUN_00222ac0(iVar3 + 0x1d0,cVar1);
  }
  iVar3 = *(int *)(in_EAX + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar3 + 0x178) + 0x20))();
  if ((cVar2 != '\0') && (*(int *)(iVar3 + 0x198) != 0)) {
    iVar3 = *(int *)(in_EAX + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar3 + 0x178) + 0x20))();
    if (cVar2 != '\0') {
      FUN_00222ac0(*(int *)(iVar3 + 0x198) + 0x1d0,cVar1);
      return;
    }
    FUN_00222ac0(0x1d0,cVar1);
  }
  return;
}
