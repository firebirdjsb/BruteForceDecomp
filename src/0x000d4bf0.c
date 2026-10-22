/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E192D83F5FB7C994536DC1B973B4FC11FB2FD46532222B54377C6540E512438
 * Entry: 0x000d4bf0, Ghidra index: 2658, label: FUN_000d4bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
void FUN_000d4bf0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  DAT_00469aac = 0;
  if (*(int *)(unaff_ESI + 0x1fc) != 0) {
    FUN_000d6b30(unaff_ESI);
  }
  puVar1 = *(undefined4 **)(unaff_ESI + 0xc7c);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0xc7c));
}
