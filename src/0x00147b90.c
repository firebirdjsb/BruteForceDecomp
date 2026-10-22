/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C52E8E60A251C366A58E9C2B82D94A454A0F26984ADAF43C3EFD91A1F6739406
 * Entry: 0x00147b90, Ghidra index: 4241, label: FUN_00147b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00147b90(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(*(int *)(unaff_ESI + 0x18),0);
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
  }
  *(byte *)(unaff_ESI + 0xc) = *(byte *)(unaff_ESI + 0xc) & 0xf1;
  return;
}
