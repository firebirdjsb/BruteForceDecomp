/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D342B7D0400BFF938EB175D83E03AB9CD5470A4E25D88695227B9D6A01C4E98
 * Entry: 0x00126850, Ghidra index: 3715, label: FUN_00126850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
undefined4 FUN_00126850(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x24) + 0x20);
    if ((iVar1 != 0) && ((-1 < iVar1 && (iVar1 < 0x19)))) {
      return *(undefined4 *)(DAT_00469948 + 0x250 + iVar1 * 4);
    }
  }
  return 0;
}
