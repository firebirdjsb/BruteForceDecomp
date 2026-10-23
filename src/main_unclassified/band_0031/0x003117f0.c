/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB65140A378B21C693D4B83E13A71185800A5B7345DEEDE07E9BD8DC657645EB
 * Entry: 0x003117f0, Ghidra index: 11891, label: FUN_003117f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffdfc;
extern uint32_t DAT_003ffe00;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t _DAT_003ffdf8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003117f0(void)

{
  if (DAT_003ffe00 != 0) {
    if (DAT_003ffdfc != 0) {
      (*(code *)PTR_FUN_003bc654)(DAT_003ffdfc);
      DAT_003ffdfc = 0;
    }
    _DAT_003ffdf8 = 0;
    DAT_003ffe00 = 0;
  }
  uRam003ffdfa = 0;
  return;
}
