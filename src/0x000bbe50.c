/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF9D92016C5BD4B2CF7A095C5B5DEC7F1555063F144286DC1D2D5A4B414D038A
 * Entry: 0x000bbe50, Ghidra index: 2282, label: FUN_000bbe50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ca0;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bbe50(void)

{
  undefined4 *in_EAX;
  
  if ((_DAT_004a5ca4 & 1) == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0 = 0xffffd7c0;
    *in_EAX = 0xffffd7c0;
    return;
  }
  *in_EAX = DAT_004a5ca0;
  return;
}
