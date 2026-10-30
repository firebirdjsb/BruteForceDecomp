/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2866C5813F2C1794FD87C54B89FA86DA65D709D1AC3B53453A42B2327B6F0C24
 * Entry: 0x000bc810, Ghidra index: 2293, label: FUN_000bc810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t PTR_FUN_0039f8bc;
void FUN_000bc810(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  if (in_ECX[0xf] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
