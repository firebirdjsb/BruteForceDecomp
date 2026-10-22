/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FED9EA1ED14B6B620A6A6917F3A8705898ED40474FE98D8DC37C1D901466FAB
 * Entry: 0x000ca410, Ghidra index: 2506, label: FUN_000ca410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000ca410(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_000b9120(DAT_00469ab0);
  if (iVar1 != 0) {
    if (in_ECX != 0) {
      FUN_000b25a0(in_ECX,iVar1);
    }
    *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) & 0xfb;
  }
  *(int *)(in_ECX + 0x38) = iVar1;
  if (iVar1 != 0) {
    FUN_000ca4e0(iVar1);
  }
  iVar1 = FUN_000b9120(DAT_00469ab0);
  if (iVar1 != 0) {
    FUN_000b25a0(in_ECX,iVar1);
    *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) & 0xfb;
  }
  *(int *)(in_ECX + 0x3c) = iVar1;
  if (iVar1 != 0) {
    FUN_000cb020(iVar1);
  }
  return;
}
