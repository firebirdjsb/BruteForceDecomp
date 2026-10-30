/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 320A35B881DFF6174AA373BDB50ABE2304190FDC146E845F1CFF02E44E47EC38
 * Entry: 0x00262190, Ghidra index: 8653, label: FUN_00262190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
extern uint32_t PTR_FUN_00392b80;
void FUN_00262190(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  byte unaff_retaddr;
  
  *in_ECX = PTR_FUN_00392b80;
  (**(code **)(*DAT_00443300 + 0x34))();
  piVar1 = (int *)in_ECX[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[1] = 0;
  }
  if ((unaff_retaddr & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
