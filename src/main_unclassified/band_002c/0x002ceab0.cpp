/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1342F37F4837D4D2CE16A32D6400B315637583D025CAACD480A0ED67C1CF8E7
 * Entry: 0x002ceab0, Ghidra index: 10181, label: FUN_002ceab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038e520;
void FUN_002ceab0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_LAB_0038e520;
  if (unaff_ESI[0x1b] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x1b]);
  }
  if (unaff_ESI[0x2d] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x2d]);
  }
  if (unaff_ESI[0x3f] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x3f]);
  }
  FUN_002ddba0();
  return;
}
