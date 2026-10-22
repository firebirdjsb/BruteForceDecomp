/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6E9E2BB7EB2B5B809A8F945B8CCFA4B5A34F0E1A1C98FDC5D22BA2640837C7E
 * Entry: 0x00379098, Ghidra index: 13478, label: FUN_00379098
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400780;
void FUN_00379098(void)

{
  uint uVar1;
  int *in_EAX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *in_EAX;
  uVar1 = in_EAX[0x50];
  *(uint *)(&DAT_00400780 + iVar3) = uVar1 & 0xffff;
  puVar2 = (undefined4 *)((uVar1 + 0x70000) * 0x10 + iVar3);
  iVar3 = 2;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
