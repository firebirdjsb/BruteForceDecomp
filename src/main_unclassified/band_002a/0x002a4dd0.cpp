/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AEAD31A044DC1AEA136C1C620628584D7B3EF28F29DD98A6F4B13BE22811F2D
 * Entry: 0x002a4dd0, Ghidra index: 9553, label: FUN_002a4dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046afd0;
extern uint32_t PTR_LAB_003904a8;
void FUN_002a4dd0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00060d40();
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x30] = &DAT_0046afd0;
  *unaff_ESI = &PTR_LAB_003904a8;
  unaff_ESI[0x32] = 1;
  return;
}
