/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DAA07A173CCCE18069CF4D5892B73866A30FD1D801DD81DF16FAF9EB25EA08B
 * Entry: 0x002ff222, Ghidra index: 11053, label: ?_inconsistency@@YAXXZ
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003b7d98;
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    ?_inconsistency@@YAXXZ
   
   Library: Visual Studio 2003 Release */

void __inconsistency__YAXXZ(void)

{
  if (PTR_FUN_003b7d98 != (undefined *)0x0) {
    (*(code *)PTR_FUN_003b7d98)();
  }
  FUN_002ff1ee();
  return;
}
