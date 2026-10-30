/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F213E8C7538BB77FCDC8458F51D5635C058428961CB0DE24B078AB14467116A
 * Entry: 0x0025b6b0, Ghidra index: 8542, label: FUN_0025b6b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
extern uint32_t PTR_FUN_003933d8;
extern uint32_t PTR_FUN_00393438;
void FUN_0025b6b0(void)

{
  undefined4 *in_ECX;
  byte unaff_retaddr;
  
  *in_ECX = PTR_FUN_00393438;
  in_ECX[1] = PTR_FUN_003933d8;
  (**(code **)(*DAT_00443300 + 0x34))();
  if ((unaff_retaddr & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
