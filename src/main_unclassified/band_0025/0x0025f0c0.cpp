/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3DE0ABDDC323C2CD25C7DE0E9C46FEFDF05F44BBE1E3A2E2BB000B1F024F5F3
 * Entry: 0x0025f0c0, Ghidra index: 8601, label: FUN_0025f0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_0025f0c0(byte param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) != 0) {
    (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_EDI + 4));
    return;
  }
  *(undefined4 *)(unaff_EDI + 8) = 0;
  iVar2 = *(int *)(unaff_EDI + 0x10);
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x14);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
      FUN_000e35e0(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x10));
  }
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
