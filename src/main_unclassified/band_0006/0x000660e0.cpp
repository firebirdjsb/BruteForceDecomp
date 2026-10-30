/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C46BD1AED059D855FB6C0B917BEFFCC99EC1CDC2D16F0FEA2B8500D2E84AF6F4
 * Entry: 0x000660e0, Ghidra index: 1111, label: FUN_000660e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3258;
void FUN_000660e0(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003a3258;
  piVar1 = (int *)in_ECX[0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1e] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
