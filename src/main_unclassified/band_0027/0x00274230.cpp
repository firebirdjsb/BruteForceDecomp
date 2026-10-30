/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F405B423F029CE0C742D4200CB51F961F6E140019E0895BE0474E1D466AA9B5E
 * Entry: 0x00274230, Ghidra index: 8875, label: FUN_00274230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392618;
void FUN_00274230(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x35]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x30]);
  }
  unaff_ESI[0x35] = 0xf;
  unaff_ESI[0x34] = 0;
  *(undefined1 *)(unaff_ESI + 0x30) = 0;
  if (0xf < (uint)unaff_ESI[0x2e]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x29]);
  }
  unaff_ESI[0x2d] = 0;
  unaff_ESI[0x2e] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x29) = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = &PTR_LAB_00392618;
  return;
}
