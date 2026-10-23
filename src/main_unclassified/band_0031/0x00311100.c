/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D0010E9D1BF7208533B66CB03BACC3E8C6E2B68870C87FB8832C523DEB518E7
 * Entry: 0x00311100, Ghidra index: 11822, label: FUN_00311100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400490;
extern uint32_t DAT_004004a4;
extern uint32_t _DAT_004004a0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311100(void)

{
  if (0xf < DAT_004004a4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400490);
  }
  DAT_004004a4 = 0xf;
  _DAT_004004a0 = 0;
  DAT_00400490 = DAT_00400490 & 0xffffff00;
  return;
}
