/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDE5342B0F65134148614C316425A184F5A329154DF73759354B9BCBDFDD6379
 * Entry: 0x00310b60, Ghidra index: 11792, label: FUN_00310b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400148;
extern uint32_t DAT_0040015c;
extern uint32_t _DAT_00400158;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310b60(void)

{
  if (0xf < DAT_0040015c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400148);
  }
  DAT_0040015c = 0xf;
  _DAT_00400158 = 0;
  DAT_00400148 = DAT_00400148 & 0xffffff00;
  return;
}
