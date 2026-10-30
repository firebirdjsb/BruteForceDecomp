/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7475513369EEADCB0236A5F749856A7D345196A67DB2295A684AF03100F42A4C
 * Entry: 0x000a70d0, Ghidra index: 1982, label: FUN_000a70d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
extern uint32_t *DAT_00443300;
void FUN_000a70d0(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_4;
  
  piVar2 = (int *)0x2;
  local_4 = 0;
  iVar1 = (**(code **)(*DAT_004432fc + 0x20))(DAT_004432fc,2,in_EAX + 4,&local_4,0);
  piVar3 = piVar2;
  if (-1 < iVar1) {
    (**(code **)(*DAT_00443300 + 0x18))(piVar2);
    piVar3 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3 = (int *)0x0;
    }
  }
  FUN_000a78d0(*(undefined4 *)(*(int *)(in_EAX + 0x10c) + 4));
  *(int *)(*(int *)(in_EAX + 0x10c) + 4) = *(int *)(in_EAX + 0x10c);
  *(undefined4 *)(in_EAX + 0x110) = 0;
  *(undefined4 *)*(undefined4 *)(in_EAX + 0x10c) = *(undefined4 *)(in_EAX + 0x10c);
  *(int *)(*(int *)(in_EAX + 0x10c) + 8) = *(int *)(in_EAX + 0x10c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return;
}
