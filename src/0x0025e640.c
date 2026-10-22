/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E81C19AE1BD687999021875D1A4784058E2DDB0870D83C48DE03DA58D823EEA
 * Entry: 0x0025e640, Ghidra index: 8596, label: FUN_0025e640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
void FUN_0025e640(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  
  if (*(int *)(in_EAX + 0x18) != 0) {
    FUN_0025f830(*(undefined4 *)(*(int *)(in_EAX + 0x18) + 4));
  }
  if (*(int *)(in_EAX + 0xc) != 0) {
    FUN_0025f860(*(undefined4 *)(*(int *)(in_EAX + 0xc) + 4));
  }
  iVar1 = *(int *)(in_EAX + 0x24);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*DAT_00443310 + 0x54))();
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  iVar1 = *(int *)(in_EAX + 0x28);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*DAT_00443310 + 0x54))();
    *(undefined4 *)(iVar1 + 4) = uVar2;
  }
  return;
}
