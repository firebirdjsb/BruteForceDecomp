/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A49253E9DBF4985C695E7C48FFB2C6824397B7DFC43D37C1521CA75589A513AA
 * Entry: 0x00259e20, Ghidra index: 8514, label: FUN_00259e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003934bc;
void FUN_00259e20(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_003934bc;
  do {
    if (*(int **)in_ECX[2] == (int *)in_ECX[2]) break;
    iVar1 = FUN_002599a0();
  } while (-1 < iVar1);
  FUN_0025ac80(local_4,*(undefined4 *)in_ECX[2],(undefined4 *)in_ECX[2]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[2]);
}
