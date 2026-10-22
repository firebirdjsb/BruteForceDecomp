/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DED32C0AE54AF7B461CD7FB9BB39D06789EEED65BB3821EAE85790CEA8954CB
 * Entry: 0x000bc060, Ghidra index: 2286, label: FUN_000bc060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f978;
void FUN_000bc060(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000bb4d0(unaff_ESI,0x10);
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  *(byte *)(unaff_ESI + 0x12) = *(byte *)(unaff_ESI + 0x12) & 0xfc | 4;
  *unaff_ESI = &PTR_FUN_0039f978;
  unaff_ESI[0x13] = 0x3e800000;
  unaff_ESI[0x14] = 0x3ee66666;
  unaff_ESI[0x19] = 2;
  return;
}
