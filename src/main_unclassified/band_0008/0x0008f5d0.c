/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 565F15CE1C7295E02F1130720B30ECA7955F0CEBB73809437E02183089D2A78B
 * Entry: 0x0008f5d0, Ghidra index: 1752, label: FUN_0008f5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046986c;
undefined4 FUN_0008f5d0(undefined4 param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  int *piStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  int *piStack_14;
  undefined4 local_8 [2];
  
  local_8[0] = *(undefined4 *)(in_EAX + 4);
  piVar1 = (int *)(in_EAX + 0x14);
  piStack_14 = (int *)*piVar1;
  if (piStack_14 != (int *)0x0) {
    puStack_18 = (undefined4 *)0x8f5f0;
    (**(code **)(*piStack_14 + 8))();
    *piVar1 = 0;
  }
  puStack_18 = local_8;
  iStack_1c = param_1;
  piStack_20 = DAT_0046986c;
  piStack_14 = piVar1;
  iVar2 = (**(code **)(*DAT_0046986c + 0x18))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,local_8[0]);
    iStack_1c = *(int *)(*(int *)(unaff_ESI + 0xb80) + 0x14);
    if (0 < *(int *)(iStack_1c + 0xb8)) {
      /* 0x0008F644 writes only one byte of a previously existing stack
       * DWORD; preserve its upper 24 bits without inventing their values. */
      ((uint8_t *)&piStack_20)[0] = 1;
      /* 0x0008F63F pushes the original executable code VA 0x000A3F80.
       * This guest address is NOT a valid native pointer until relocated
       * through an original-XBE-backed ABI adapter. */
      (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1,(void (*)(void))(uintptr_t)0x000a3f80U,&piStack_20);
    }
    return 0;
  }
  return 0x80004005;
}
