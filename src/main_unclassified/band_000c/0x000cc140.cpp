/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB1D0B1D2409882DA76B1B9C45AFBE56B352A9F5F6C47C6512D27F3037664010
 * Entry: 0x000cc140, Ghidra index: 2523, label: FUN_000cc140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f078;
void FUN_000cc140(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000cb580();
  *(undefined2 *)(unaff_ESI + 1) = 0;
  unaff_ESI[0x23] = 0;
  *unaff_ESI = &PTR_FUN_0039f078;
  *(undefined2 *)((int)unaff_ESI + 6) = 0x26;
  unaff_ESI[0x12] = 0xc1700000;
  unaff_ESI[0x13] = 0x42000000;
  *(byte *)(unaff_ESI + 0x24) = *(byte *)(unaff_ESI + 0x24) | 1;
  unaff_ESI[0x1f] = 0x40a00000;
  return;
}
