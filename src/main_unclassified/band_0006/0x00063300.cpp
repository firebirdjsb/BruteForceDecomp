/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5805E25E933E38046BC04CCE5273B18FC97A423F9462A47CBF56DAC83F601DD6
 * Entry: 0x00063300, Ghidra index: 1073, label: FUN_00063300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a37a0;
void FUN_00063300(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[2];
  *in_ECX = &PTR_FUN_003a37a0;
  if (iVar1 == 0) {
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    return;
  }
  if (*(int *)(iVar1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(iVar1 + 8));
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
