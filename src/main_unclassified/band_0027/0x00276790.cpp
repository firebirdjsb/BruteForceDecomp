/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8FDCBC53194D1577B6911966B94E71281693E41A57FADE16C3B717366097AF0
 * Entry: 0x00276790, Ghidra index: 8899, label: FUN_00276790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003926c8;
extern uint32_t PTR_LAB_00392618;
void FUN_00276790(void)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  
  piVar1 = (int *)unaff_ESI[0x11];
  *unaff_ESI = PTR_FUN_003926c8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (0xf < (uint)unaff_ESI[0x1f]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x1a]);
  }
  unaff_ESI[0x1f] = 0xf;
  unaff_ESI[0x1e] = 0;
  *(undefined1 *)(unaff_ESI + 0x1a) = 0;
  *unaff_ESI = &PTR_LAB_00392618;
  unaff_ESI[1] = 0;
  return;
}
