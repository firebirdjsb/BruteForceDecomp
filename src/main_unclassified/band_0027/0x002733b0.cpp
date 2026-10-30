/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4AA96B7EB66D1D53B96EE3068127079D9D12DEAD76AAEF39C4FDC10B9B08F79
 * Entry: 0x002733b0, Ghidra index: 8855, label: FUN_002733b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003926a0;
void FUN_002733b0(void)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  
  piVar1 = (int *)unaff_ESI[0x42];
  *unaff_ESI = &PTR_FUN_003926a0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)unaff_ESI[0x38];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (0xf < (uint)unaff_ESI[0x40]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x3b]);
  }
  unaff_ESI[0x40] = 0xf;
  unaff_ESI[0x3f] = 0;
  *(undefined1 *)(unaff_ESI + 0x3b) = 0;
  piVar1 = (int *)unaff_ESI[0x39];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[0x39] = 0;
  }
  FUN_00271260();
  return;
}
