/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AAF41E24326A766CBBBFC12F6D8B464ECE412A8192123D4F3368B4DAE89B361
 * Entry: 0x00260960, Ghidra index: 8626, label: FUN_00260960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b258;
undefined4 FUN_00260960(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *puVar3;
  int *unaff_retaddr;
  
  RtlEnterCriticalSection(&DAT_0046b258);
  puVar1 = *(undefined4 **)(in_EAX + 0xc);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar1;
  }
  if (puVar3 != puVar1) {
    do {
      if (*unaff_retaddr == *(int *)puVar3[2]) break;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != puVar1);
    if (puVar3 != puVar1) {
      uVar2 = puVar3[2];
      RtlLeaveCriticalSection(&DAT_0046b258);
      return uVar2;
    }
  }
  RtlLeaveCriticalSection(&DAT_0046b258);
  return 0;
}
