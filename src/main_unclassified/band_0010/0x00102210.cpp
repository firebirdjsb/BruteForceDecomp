/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC3A517D62E7FD6ECA365AAD499F7ED9D0E82B51632EE3840867E62A6879FFCE
 * Entry: 0x00102210, Ghidra index: 3264, label: FUN_00102210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00102210(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e8))();
  if (*param_1 != 0) {
    *piVar1 = *param_1;
  }
  if (*param_2 != 0) {
    piVar1[2] = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00102243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1ec))();
  return;
}
