/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F738EC0587D58524CAF2CD5BF6C56B688FC6D94B04A069083D2161C56634B59
 * Entry: 0x000b2230, Ghidra index: 2141, label: FUN_000b2230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039ffac;
extern uint32_t PTR_FUN_0039ffc0;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000b2230(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  puVar1 = unaff_ESI + 0xb;
  *puVar1 = &PTR_FUN_0039ffac;
  unaff_ESI[0xf] = 0;
  uVar2 = FUN_00061500(unaff_ESI + 0x10);
  unaff_ESI[0x11] = uVar2;
  unaff_ESI[0x12] = 0;
  *(undefined2 *)(unaff_ESI + 0x14) = 0;
  unaff_ESI[0xd] = puVar1;
  unaff_ESI[0xc] = puVar1;
  *puVar1 = &PTR_LAB_0039fff0;
  *(undefined2 *)((int)unaff_ESI + 0x56) = 0;
  *(undefined2 *)(unaff_ESI + 0x15) = 0;
  *(undefined1 *)(unaff_ESI + 0x16) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x59) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
  *(undefined1 *)(unaff_ESI + 0x17) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x5d) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x5e) = 0;
  *unaff_ESI = &PTR_FUN_0039ffc0;
  *(byte *)(unaff_ESI + 0x18) = *(byte *)(unaff_ESI + 0x18) & 0xf8;
  *(byte *)(unaff_ESI + 0x18) = *(byte *)(unaff_ESI + 0x18) | 8;
  return;
}
