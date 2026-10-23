/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46F8B85F7332767E6C77C7D204D7B91FB8D5DE8C357506D4C295A392BD44CBF5
 * Entry: 0x000bc310, Ghidra index: 2288, label: FUN_000bc310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f914;
void FUN_000bc310(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000bb4d0(unaff_ESI,0x10);
  unaff_ESI[0x14] = 0;
  *(undefined1 *)(unaff_ESI + 0x15) = 0;
  unaff_ESI[0x16] = 0;
  *unaff_ESI = &PTR_FUN_0039f914;
  unaff_ESI[0x13] = 0x41200000;
  return;
}
