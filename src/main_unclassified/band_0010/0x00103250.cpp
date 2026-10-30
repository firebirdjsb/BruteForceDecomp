/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B62A3553E711182B67BF331906D14DD214D34CE70A09AF891BA3CE4FE19CDD18
 * Entry: 0x00103250, Ghidra index: 3292, label: FUN_00103250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
extern uint32_t DAT_0046d100;
uint FUN_00103250(void)

{
  int *piVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = DAT_00469940;
  *(byte *)(in_EAX + 0x60) = *(byte *)(in_EAX + 0x60) & 0xfe;
  uVar2 = (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(in_EAX + 0x78),1);
  if ((*(int *)(in_EAX + 0x68) != 0) &&
     (uVar2 = 0, *(int *)(in_EAX + 0x6c) - *(int *)(in_EAX + 0x68) >> 2 != 0)) {
    iVar3 = FUN_0017c170(DAT_00469984);
    *(int *)(in_EAX + 0x78) = iVar3;
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar4 = 0;
      if ((((*(byte *)(in_EAX + 0x60) & 4) != 0) && (*(int *)(in_EAX + 0x68) != 0)) &&
         (*(int *)(in_EAX + 0x6c) - *(int *)(in_EAX + 0x68) >> 2 == 1)) {
        uVar4 = 1;
      }
      uVar2 = (**(code **)(*DAT_00469940 + 0x28))(iVar3,&DAT_0046d100,uVar4);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}
