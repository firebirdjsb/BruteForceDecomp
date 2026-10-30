/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C365BE9FACCB8F859EEF570DB80E241EB14567719B2777D10146DDEC321FF4E7
 * Entry: 0x00311510, Ghidra index: 11867, label: FUN_00311510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Guest32 free-thunk boundary; actual caller guest ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffebc;
extern uint32_t DAT_003ffed0;
extern uint32_t _DAT_003ffecc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311510(void)

{
  if (0xf < DAT_003ffed0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_003ffebc);
  }
  DAT_003ffed0 = 0xf;
  _DAT_003ffecc = 0;
  DAT_003ffebc = DAT_003ffebc & 0xffffff00;
  return;
}
