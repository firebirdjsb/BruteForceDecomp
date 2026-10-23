/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C36939A4B20FED55632FC048FF053082A019E5C6997164E77BE53057744C56D
 * Entry: 0x00273e90, Ghidra index: 8871, label: FUN_00273e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392618;
void FUN_00273e90(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x29]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x24]);
  }
  unaff_ESI[0x29] = 0xf;
  unaff_ESI[0x28] = 0;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
  if (0xf < (uint)unaff_ESI[0x22]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x1d]);
  }
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x1d) = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = &PTR_LAB_00392618;
  return;
}
