/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15874395DE9924334B0A13C5D267C4B5453642B18B3F9C5A80E03B9FA608B0E2
 * Entry: 0x002760b0, Ghidra index: 8895, label: FUN_002760b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003923e0;
extern uint32_t PTR_LAB_00392618;
void FUN_002760b0(void)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  
  piVar1 = (int *)unaff_ESI[0x11];
  *unaff_ESI = &PTR_FUN_003923e0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (0xf < (uint)unaff_ESI[0x2b]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x26]);
  }
  unaff_ESI[0x2b] = 0xf;
  unaff_ESI[0x2a] = 0;
  *(undefined1 *)(unaff_ESI + 0x26) = 0;
  *unaff_ESI = &PTR_LAB_00392618;
  unaff_ESI[1] = 0;
  return;
}
