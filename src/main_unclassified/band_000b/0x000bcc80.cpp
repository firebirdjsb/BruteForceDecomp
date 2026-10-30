/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B736C755A6D93970BB4D0DECD5E56894E3F91BE2B0B3B3C25B9DAC69885794D
 * Entry: 0x000bcc80, Ghidra index: 2301, label: FUN_000bcc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f89c;
void FUN_000bcc80(void)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[0x38] != 0) {
    FUN_0008f6e0();
  }
  if (unaff_ESI[0x28] != 0) {
    FUN_0008f6e0();
  }
  if (unaff_ESI[0x26] != 0) {
    FUN_0008f6e0();
  }
  if (unaff_ESI[0x24] != 0) {
    FUN_0008f6e0();
  }
  if (unaff_ESI[0x12] != 0) {
    FUN_0008f6e0();
  }
  if (unaff_ESI[0x10] != 0) {
    FUN_0008f6e0();
  }
  if (unaff_ESI[0xe] != 0) {
    FUN_0008f6e0();
  }
  *unaff_ESI = &PTR_FUN_0039f89c;
  FUN_000b2530();
  return;
}
