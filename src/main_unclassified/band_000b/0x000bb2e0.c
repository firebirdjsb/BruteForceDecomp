/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2652FC6C588C9ECE7B459C622B1B35E361502EA711FFF7FB136867A40925DF41
 * Entry: 0x000bb2e0, Ghidra index: 2269, label: FUN_000bb2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f94c;
void FUN_000bb2e0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039f94c;
  return;
}
