/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E170EB68BC5CC1FEFDCDDB5B0B305CD44FA1A2BF31DF2F20364D22753E652719
 * Entry: 0x00038b00, Ghidra index: 381, label: FUN_00038b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00038b00(void)

{
  int in_EAX;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int *unaff_EBX;
  int unaff_EDI;
  
  iVar1 = FUN_00038b70(unaff_EDI);
  if (iVar1 != *(int *)(in_EAX + 4)) {
    if (*(int *)(unaff_EDI + 4) == 0) {
      puVar3 = &DAT_0046d064;
    }
    else {
      puVar3 = (uint *)(*(int *)(unaff_EDI + 4) + 4);
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
      puVar2 = &DAT_0046d064;
    }
    else {
      puVar2 = (uint *)(*(int *)(iVar1 + 0x10) + 4);
    }
    if (*puVar2 <= *puVar3) {
      *unaff_EBX = iVar1;
      return;
    }
  }
  *unaff_EBX = *(int *)(in_EAX + 4);
  return;
}
