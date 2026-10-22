/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEEEBF6AF406281E313867663D95913D2E2633D868F90B9B1C7455A0E4E8F242
 * Entry: 0x000f37d0, Ghidra index: 3042, label: FUN_000f37d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_000f37d0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = DAT_00469948;
  if ((*(int *)(unaff_EDI + 0x60) < 0x11) || (0x14 < *(int *)(unaff_EDI + 0x60))) {
    FUN_000f6da0();
    iVar2 = FUN_000f6e10();
    iVar2 = *(int *)(*(int *)(iVar1 + 0x22c + iVar2 * 4) + 0xc4);
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xbc);
    }
  }
  else {
    iVar2 = FUN_000efa30();
  }
  if (*(int *)(iVar1 + 0x21c + iVar2 * 4) != 0) {
    FUN_000ffd60(unaff_EDI);
  }
  return;
}
