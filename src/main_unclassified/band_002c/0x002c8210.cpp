/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D2BF888F370442BF9C0AA652AD6870EAA9763E4E47FC85AB266C294D353E90F
 * Entry: 0x002c8210, Ghidra index: 10117, label: FUN_002c8210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e734;
extern uint32_t PTR_FUN_003bc654;
void FUN_002c8210(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0038e734;
  if (((in_ECX[2] & 0xff000000) == 0) && (in_ECX[3] != 0)) {
    (*(code *)PTR_FUN_003bc654)(in_ECX[3]);
    return;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
