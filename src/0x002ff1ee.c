/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71DE13F3498F6AFC67A6C25CC38B0148834D8C911B9A6AAFC0A2533F08F4B5CC
 * Entry: 0x002ff1ee, Ghidra index: 11052, label: FUN_002ff1ee
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00414b5c;
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void FUN_002ff1ee(void)

{
  code *pcVar1;
  
  if (DAT_00414b5c != (code *)0x0) {
    (*DAT_00414b5c)();
  }
  KeBugCheck(0xc0000144);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
