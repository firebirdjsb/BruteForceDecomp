/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCD92DA8EDCFFAF9CAE93B1713DDED4FE078F04CDC98C7CF1B6879A778581F99
 * Entry: 0x00060dc0, Ghidra index: 1014, label: FUN_00060dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00256480(void);

extern uint32_t PTR_FUN_003a39a0;
extern uint32_t PTR_FUN_003a3b90;
void FUN_00060dc0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a3b90;
  if (in_ECX[0x28] != 0) {
    FUN_00256480(in_ECX + 0x27);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x28]);
  }
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  *in_ECX = &PTR_FUN_003a39a0;
  piVar1 = (int *)in_ECX[0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1e] = 0;
  }
  return;
}
