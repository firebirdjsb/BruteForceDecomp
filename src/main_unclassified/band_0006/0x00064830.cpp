/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBD7B16DADB0552840BB9506514360292987CDB837B1AF0A40E8B0AF01CB1631
 * Entry: 0x00064830, Ghidra index: 1094, label: FUN_00064830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
void FUN_00064830(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a35a4;
  if ((in_ECX[1] != 0) && (in_ECX[2] != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[2]);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
