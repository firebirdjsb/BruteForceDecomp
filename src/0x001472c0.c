/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E37043706E43D93B5CA66C32DC49202A54B228D0C26DE360EF4D06305E0DAB2
 * Entry: 0x001472c0, Ghidra index: 4234, label: FUN_001472c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001472c0(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar2 = param_2;
  cVar3 = (**(code **)(*(int *)(in_EAX + 0x178) + 0x20))();
  if ((((cVar3 == '\0') || (iVar6 = *(int *)(in_EAX + 0x198), iVar6 == 0)) ||
      (iVar1 = *(int *)(*(int *)(iVar6 + 0x228) + 0xec), iVar4 = (**(code **)(*piVar2 + 0x1c))(),
      iVar1 != *(int *)(iVar4 + 0x18))) &&
     (((cVar3 = (**(code **)(*(int *)(in_EAX + 0x144) + 0x20))(), cVar3 == '\0' ||
       (iVar6 = *(int *)(in_EAX + 0x164), iVar6 == 0)) ||
      ((*(int *)(*(int *)(iVar6 + 0xc) + 4) != 0x14 ||
       ((iVar6 != 0 &&
        (iVar1 = *(int *)(*(int *)(iVar6 + 0x228) + 0xec), iVar4 = (**(code **)(*piVar2 + 0x1c))(),
        iVar1 != *(int *)(iVar4 + 0x18))))))))) {
    iVar6 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar6;
  }
  if (iVar6 != 0) {
    param_3 = (int *)(*(int *)(*(int *)(iVar6 + 0x228) + 0xe4) - *(int *)(iVar6 + 0x1f8));
    if (param_3 != (int *)0x0) {
      param_2 = (int *)(int)*(short *)((int)piVar2 + 0x1a);
      piVar5 = (int *)&param_2;
      if ((int)param_3 <= (int)*(short *)((int)piVar2 + 0x1a)) {
        piVar5 = (int *)&param_3;
      }
      if (*piVar5 != 0) {
        return *piVar5;
      }
    }
  }
  return 0;
}
