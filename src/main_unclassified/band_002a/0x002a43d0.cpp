/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DAF70B1EF2ABAA606B63B97E10820B627CEB966887B3B8B4934513C7D0A9C32E
 * Entry: 0x002a43d0, Ghidra index: 9548, label: FUN_002a43d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_002a43d0(byte param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x68);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x68) = 0;
  }
  *(undefined ***)(in_ECX + 0x44) = &PTR_FUN_003a35a8;
  *(undefined ***)(in_ECX + 0x4c) = &PTR_FUN_003a35a4;
  if ((*(int *)(in_ECX + 0x50) != 0) && (*(int *)(in_ECX + 0x54) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x54));
  }
  FUN_00060c00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
