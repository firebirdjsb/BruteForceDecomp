/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFC8E3B51F43EB8D502702EE872509272F50409F4E86DA49526775D43A7A9363
 * Entry: 0x000c3550, Ghidra index: 2386, label: FUN_000c3550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f548;
void FUN_000c3550(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined2 *)((int)unaff_ESI + 0xe) = 0x20;
  *(undefined2 *)(unaff_ESI + 3) = 0x20;
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xf] = 0;
  *(undefined1 *)(unaff_ESI + 0xd) = 0;
  *unaff_ESI = &PTR_FUN_0039f548;
  return;
}
