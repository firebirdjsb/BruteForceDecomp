/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CA50143FF94918A6DC341F0D64EA526199EE851EF158A9055A9903EC39D1A6A
 * Entry: 0x000efa70, Ghidra index: 2982, label: FUN_000efa70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
undefined4 FUN_000efa70(void)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar2 = FUN_002e5bf0(0);
      if (*(int *)(iVar2 + 0x2c) != 0) {
        return 0;
      }
    }
  }
  return 1;
}
