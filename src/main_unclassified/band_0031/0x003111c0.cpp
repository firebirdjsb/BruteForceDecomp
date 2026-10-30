/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E876CD610B5AE75A61CB5BA94C092C6F6DC38374A48A868E29D137FA1F32BA6D
 * Entry: 0x003111c0, Ghidra index: 11826, label: FUN_003111c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400500;
extern uint32_t DAT_00400514;
extern uint32_t _DAT_00400510;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003111c0(void)

{
  if (0xf < DAT_00400514) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400500);
  }
  DAT_00400514 = 0xf;
  _DAT_00400510 = 0;
  DAT_00400500 = DAT_00400500 & 0xffffff00;
  return;
}
