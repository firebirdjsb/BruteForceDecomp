/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9072F33006594E2676A28BBAF5335D69EE20CC06EB9DBCB651C807F3DC2A740D
 * Entry: 0x00124340, Ghidra index: 3682, label: FUN_00124340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d100;
void FUN_00124340(void)

{
  char cVar1;
  int unaff_ESI;
  
  cVar1 = FUN_00112790();
  if ((cVar1 != '\0') && (*(int *)(*(int *)(unaff_ESI + 0xc) + 0x260) != 0)) {
    FUN_0017c020(&DAT_0046d100);
  }
  return;
}
