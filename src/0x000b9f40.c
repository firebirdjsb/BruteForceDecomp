/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00ACD810BEC39CACEA91485B23CFA2D628209DAA8C763F422E5B3F73AB38A2F1
 * Entry: 0x000b9f40, Ghidra index: 2245, label: FUN_000b9f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039fc14;
void FUN_000b9f40(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039fc14;
  return;
}
