/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5FED2F3B6DD37FF1094E288B4C71F901E3DDA263242F63BF0675F470D2A9CA8
 * Entry: 0x0010c3a0, Ghidra index: 3467, label: FUN_0010c3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e060;
extern uint32_t PTR_LAB_0039e5c8;
void FUN_0010c3a0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039e060;
  FUN_0010caa0();
  piVar1 = (int *)in_ECX[0x1d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1d] = 0;
  }
  if (in_ECX[0x19] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x19]);
  }
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *in_ECX = &PTR_LAB_0039e5c8;
  FUN_000ef7f0();
  if (in_ECX[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x15]);
  }
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  return;
}
