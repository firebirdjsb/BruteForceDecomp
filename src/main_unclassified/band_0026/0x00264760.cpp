/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26588AF29029EEA6FE0D7DE3833E69468B0184CDE3F27CB9DBF7DFFB35E89F9B
 * Entry: 0x00264760, Ghidra index: 8704, label: FUN_00264760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392970;
void FUN_00264760(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00392970;
  if (in_ECX[2] != 0) {
    FUN_00264930(in_ECX);
  }
  piVar1 = (int *)in_ECX[0x12];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x12] = 0;
  }
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[2] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
