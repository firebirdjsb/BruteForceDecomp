/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CE21C7E6026727A6DA4FA00A6B666DC31E828F5D8A584CDD5D40A8C0A26DA98
 * Entry: 0x001e5510, Ghidra index: 6797, label: FUN_001e5510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_001e5510(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  
  (**(code **)(**(int **)(param_1 + 0x22c + unaff_EBX * 4) + 0xc))(1);
  piVar2 = *(int **)(param_1 + 0x58 + unaff_EBX * 4);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar3 = *piVar2;
  if ((0 < iVar3) && (iVar3 < 9)) {
    piVar1 = (int *)(DAT_00469948 + 0x10 + iVar3 * 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_001e7880();
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
