/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4DD392614C64EBEEE177201B287DF298CFB599C8EEA8DF1E84117E2FCF2FAA9
 * Entry: 0x0010d3a0, Ghidra index: 3490, label: FUN_0010d3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039dfc8;
extern uint32_t PTR_FUN_0039e188;
extern uint32_t PTR_LAB_0039e5c8;
void FUN_0010d3a0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  piVar2 = (int *)in_ECX[0x2f];
  *in_ECX = &PTR_FUN_0039dfc8;
  for (; piVar2 != (int *)in_ECX[0x30]; piVar2 = piVar2 + 1) {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_000ff870();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  FUN_0010a120();
  if (in_ECX[0x2f] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x2f]);
  }
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  if (in_ECX[0x2b] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x2b]);
  }
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  *in_ECX = &PTR_FUN_0039e188;
  if (in_ECX[0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x1a]);
  }
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
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
