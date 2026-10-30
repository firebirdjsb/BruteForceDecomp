/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3E961DE33857F64DA4AC9407FD25A9335A3213CEFDE0CE7D3C551CEFD9492D6
 * Entry: 0x00276ee0, Ghidra index: 8903, label: FUN_00276ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392660;
extern uint32_t PTR_LAB_00392618;
void FUN_00276ee0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00392660;
  if (0xf < (uint)unaff_ESI[0x21]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x1c]);
  }
  unaff_ESI[0x21] = 0xf;
  unaff_ESI[0x20] = 0;
  *(undefined1 *)(unaff_ESI + 0x1c) = 0;
  if (0xf < (uint)unaff_ESI[0x1a]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x15]);
  }
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x15) = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = &PTR_LAB_00392618;
  return;
}
