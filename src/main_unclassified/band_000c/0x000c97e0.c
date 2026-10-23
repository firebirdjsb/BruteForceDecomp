/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3636226D220F46B0428E47C6EC5B194FE20EB8ED8B5CC6316992A47F0807923F
 * Entry: 0x000c97e0, Ghidra index: 2491, label: FUN_000c97e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f1e4;
void FUN_000c97e0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_0039f1e4;
  unaff_ESI[7] = 7;
  unaff_ESI[6] = 0;
  *(undefined2 *)(unaff_ESI + 2) = 0;
  *(byte *)((int)unaff_ESI + 0x3b) = *(byte *)((int)unaff_ESI + 0x3b) & 0x82 | 2;
  *(undefined1 *)(unaff_ESI + 0xe) = 0x80;
  *(undefined1 *)((int)unaff_ESI + 0x3a) = 0x80;
  *(undefined1 *)((int)unaff_ESI + 0x39) = 0x80;
  unaff_ESI[0xb] = 0;
  unaff_ESI[10] = 0;
  *(undefined2 *)(unaff_ESI + 0xc) = 0;
  *(undefined2 *)((int)unaff_ESI + 0x32) = 0;
  unaff_ESI[0x11] = 0x3f800000;
  unaff_ESI[0x10] = 0x3f800000;
  FUN_000c9890(unaff_ESI);
  unaff_ESI[9] = 0;
  *(undefined1 *)(unaff_ESI + 0xf) = 0;
  *(undefined2 *)(unaff_ESI + 0xd) = 0;
  *(undefined2 *)((int)unaff_ESI + 0x36) = 0;
  return;
}
