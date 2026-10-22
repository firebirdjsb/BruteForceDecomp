/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FD9C52A965022EFE87B5EBA8A3953B7E76077E20BA303116F618C8AAE462F77
 * Entry: 0x00121920, Ghidra index: 3657, label: FUN_00121920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_0012199d_caseD_0[];
int FUN_00121920(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x2e8) + 0x1cc);
  iVar6 = 0;
  iVar3 = FUN_00121ac0();
  iVar4 = *(int *)(in_ECX + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar4 + 0x144) + 0x20))();
  if (((cVar2 == '\0') || (iVar4 = *(int *)(iVar4 + 0x164), iVar4 == 0)) ||
     (*(int *)(*(int *)(iVar4 + 0xc) + 4) != 0x14)) {
    iVar4 = 0;
  }
  iVar5 = 8;
  if (iVar4 != 0) {
    iVar5 = **(int **)(iVar4 + 0x228);
  }
  switch(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x15c)) {
  case 0:
    goto switchD_0012199d_caseD_0;
  case 1:
    if (iVar3 != 1) {
      return (-(uint)(iVar1 != 1) & 0xe) + 0x14;
    }
    return ((iVar1 != 2) - 1 & 0xfffffff7) + 0x21;
  case 2:
    if (iVar3 != iVar1) {
      if (iVar1 == 1) {
        return 0x16 - (uint)(in_EAX != 1);
      }
      if (iVar3 != 1) {
        if (iVar5 != 1) {
          return 0x31;
        }
        return 0x33 - (uint)(in_EAX != 1);
      }
      return (uint)(iVar5 == 1) * 2 + 0x17;
    }
switchD_0012199d_caseD_0:
    return 0x21;
  case 3:
    if (iVar3 != iVar1) {
      if (iVar5 != 1) {
        return 0x11;
      }
      return 0x13 - (uint)(in_EAX != 1);
    }
    if (iVar5 == 1) {
      return 0x10 - (uint)(in_EAX != 1);
    }
    iVar6 = 0xe - (uint)(in_EAX != 1);
  default:
    return iVar6;
  }
}
