/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E355364DAFEB0815D37277B1002E416C5F6CA4CBFEE2BD1B2DC851FDE54E5FE8
 * Entry: 0x002ea6c3, Ghidra index: 10587, label: ___endstdio
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4e4;
/* Library Function - Single Match
    ___endstdio
   
   Library: Visual Studio 2003 Release */

void ___endstdio(void)

{
  __flushall();
  if (DAT_0040f4e4 != '\0') {
    __fcloseall();
    return;
  }
  return;
}
