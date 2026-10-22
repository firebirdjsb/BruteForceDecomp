/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45107474499392BFD4737C7699E19B07C50071C93FA5891857AC360D242E9E5F
 * Entry: 0x00299b00, Ghidra index: 9388, label: FUN_00299b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00299b00(void)

{
  int unaff_ESI;
  
  if ((*(int *)(DAT_00469888 + 0x34) != 0) &&
     (*(int *)(unaff_ESI + 0x1c) != *(int *)(*(int *)(unaff_ESI + 8) + 0x20))) {
    FUN_00299580(0x3c,*(int *)(unaff_ESI + 0x1c),0);
    *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  }
  return;
}
