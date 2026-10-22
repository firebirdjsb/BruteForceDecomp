/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 477431F29E9B6A2091EB264D990C70817246474635C5B4A8AECA8C9E845AE7F6
 * Entry: 0x000a8520, Ghidra index: 2008, label: FUN_000a8520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
undefined1 FUN_000a8520(void)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  
  iVar1 = (**(code **)(*(int *)(in_ECX + 0x1b4) + 0x9c))();
  if ((iVar1 != -1) && (unaff_ESI != -1)) {
    return (&DAT_003ffd80)[iVar1 * 10 + unaff_ESI];
  }
  return 0;
}
