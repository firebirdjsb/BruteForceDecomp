/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87960A2A5923CC0CE37D0664D6ABF74DADA1DDADECE153EDE73F3FA7C70EDCF2
 * Entry: 0x00182e50, Ghidra index: 5191, label: FUN_00182e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399b50;
extern uint32_t PTR_LAB_00399ba0;
void FUN_00182e50(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[0x1c];
  *in_ECX = PTR_FUN_00399b50;
  in_ECX[0x1e] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = (int *)in_ECX[0x1d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if (in_ECX[0x2d] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x2d]);
  }
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  *in_ECX = &PTR_LAB_00399ba0;
  return;
}
