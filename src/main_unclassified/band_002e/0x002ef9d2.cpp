/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17EFAD0C9C8773E106C2D7201CB3A381C62677C0F008FFD6E6E220983B43B5A3
 * Entry: 0x002ef9d2, Ghidra index: 10721, label: FUN_002ef9d2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7184;
extern uint32_t DAT_003b7188;
extern uint32_t DAT_003b718c;
void FUN_002ef9d2(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_003b7188 = *(undefined4 *)(unaff_EBP + 8);
  DAT_003b7184 = in_EAX;
  DAT_003b718c = unaff_EBP;
  return;
}
