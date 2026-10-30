/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0113F69EB223A85F872FBD2921384C5EF99898A09FBD54F7B9E6A2D7B1B1038F
 * Entry: 0x000c67b0, Ghidra index: 2441, label: FUN_000c67b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched 0x000BA5B0 one-word-pointer constructor argument;
 * Xbox this-register, object and stack contracts remain ABI_UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f328;
void FUN_000c67b0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  *(undefined2 *)(unaff_ESI + 2) = 0;
  *(undefined2 *)((int)unaff_ESI + 10) = 0;
  unaff_ESI[0x10] = 0x3f800000;
  unaff_ESI[0xf] = 0x3f800000;
  *unaff_ESI = &PTR_FUN_0039f328;
  return;
}
