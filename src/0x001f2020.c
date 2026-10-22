/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8548038167138A27C8AD000506D1B6E9037D8F81D5EC350DDECAB5D169FC6300
 * Entry: 0x001f2020, Ghidra index: 6999, label: FUN_001f2020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d0c8;
undefined4 FUN_001f2020(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *unaff_ESI;
  
  if (0 < *(int *)(in_EAX + 0x23c)) {
    RtlEnterCriticalSection(&DAT_0046d0c8);
    *(undefined4 *)(*(int *)(in_EAX + 600) * 0x10 + 4 + *(int *)(in_EAX + 0x250)) = 1;
    *(uint *)(in_EAX + 600) = *(int *)(in_EAX + 0x25c) - 1U & *(int *)(in_EAX + 600) + 1U;
    RtlLeaveCriticalSection(&DAT_0046d0c8);
    iVar1 = *(int *)(*(int *)(in_EAX + 600) * 0x10 + 4 + *(int *)(in_EAX + 0x250));
    if ((iVar1 != 1) && (iVar1 != 2)) {
      *(undefined4 *)(*(int *)(in_EAX + 600) * 0x10 + 4 + *(int *)(in_EAX + 0x250)) = 1;
      XAPILIB__SetEvent(*(undefined4 *)(in_EAX + 0x20));
    }
    iVar1 = *(int *)(*(int *)(in_EAX + 600) * 0x10 + 4 + *(int *)(in_EAX + 0x250));
    while ((iVar1 != 2 && (*(int *)(in_EAX + 8) == 0))) {
      XAPILIB__SetEvent(*(undefined4 *)(in_EAX + 0x20));
      XAPILIB__WaitForSingleObject(*(undefined4 *)(in_EAX + 0x18),0x20);
      iVar1 = *(int *)(*(int *)(in_EAX + 600) * 0x10 + 4 + *(int *)(in_EAX + 0x250));
    }
    iVar1 = *(int *)(in_EAX + 0x250);
    iVar3 = *(int *)(in_EAX + 600) * 0x10;
    *unaff_ESI = *(undefined4 *)(iVar3 + 0xc + iVar1);
    *(int *)(in_EAX + 0x23c) = *(int *)(in_EAX + 0x23c) - *(int *)(iVar3 + iVar1 + 0xc);
    RtlEnterCriticalSection(&DAT_0046d0c8);
    uVar2 = *(undefined4 *)(*(int *)(in_EAX + 600) * 0x10 + *(int *)(in_EAX + 0x250));
    RtlLeaveCriticalSection(&DAT_0046d0c8);
    return uVar2;
  }
  *param_1 = 0;
  return 0;
}
