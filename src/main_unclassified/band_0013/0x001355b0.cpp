/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49FC2709E8B826BD8D1C2864EF7FE77DCC842748E2D365F5AC65C91AC45B33EA
 * Entry: 0x001355b0, Ghidra index: 3879, label: FUN_001355b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039db60;
void FUN_001355b0(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = PTR_FUN_0039db60;
  iVar2 = in_ECX[8];
  if (iVar2 != 0) {
    iVar1 = in_ECX[9];
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[8]);
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
