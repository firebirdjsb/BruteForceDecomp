/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5833FC7D08ED0107944D0F15AD78B1205D9DE369B59846F6B626A1F97490A24A
 * Entry: 0x00311830, Ghidra index: 11892, label: FUN_00311830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffdec;
extern uint32_t DAT_003ffdf0;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t _DAT_003ffde8;
extern uint32_t _DAT_003ffdea;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311830(void)

{
  if (DAT_003ffdf0 != 0) {
    if (DAT_003ffdec != 0) {
      (*(code *)PTR_FUN_003bc654)(DAT_003ffdec);
      DAT_003ffdec = 0;
    }
    _DAT_003ffde8 = 0;
    DAT_003ffdf0 = 0;
  }
  _DAT_003ffdea = 0;
  return;
}
