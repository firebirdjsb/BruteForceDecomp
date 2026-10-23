/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E95B8C9CB3EAB514CCEDD752006C104D7C6D80C31D88B2A81B466D1A6E84FFA
 * Entry: 0x00234470, Ghidra index: 7799, label: FUN_00234470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443314;
void FUN_00234470(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x14);
  for (piVar4 = *(int **)(unaff_EDI + 0x10); piVar4 != piVar1; piVar4 = piVar4 + 1) {
    iVar2 = *piVar4;
    if (((iVar2 != 0) && (iVar2 != -1)) && (piVar3 = *(int **)(iVar2 + 0x58), piVar3 != (int *)0x0))
    {
      (**(code **)(*piVar3 + 0x24))(piVar3,iVar2);
    }
  }
  (**(code **)(*DAT_00443314 + 0x48))(DAT_00443314);
  return;
}
