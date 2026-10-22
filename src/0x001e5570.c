/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B936B4179E002F6F98DADABDA164B74B2E894F8B4EAD4D5FDD63A662E8EFF4D0
 * Entry: 0x001e5570, Ghidra index: 6798, label: FUN_001e5570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_001e5570(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(param_1 + 0x58 + unaff_EDI * 4) == 0) {
    piVar1 = (int *)FUN_002ea01d(4);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = unaff_EDI;
      if (((0 < unaff_EDI) && (unaff_EDI < 9)) &&
         (iVar2 = *(int *)(DAT_00469948 + 0x10 + unaff_EDI * 4) + 1,
         *(int *)(DAT_00469948 + 0x10 + unaff_EDI * 4) = iVar2, iVar2 == 1)) {
        FUN_001e7880();
      }
    }
    *(int **)(param_1 + 0x58 + unaff_EDI * 4) = piVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x001e55d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x22c + unaff_EDI * 4) + 0xc))();
  return;
}
