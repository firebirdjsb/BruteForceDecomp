/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 210F6274D75790E1FCD352AE8BDF8204852AA23CC9DE73CCFFC5341F8FCC03A1
 * Entry: 0x000f3f20, Ghidra index: 3055, label: FUN_000f3f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
undefined4 FUN_000f3f20(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  iVar1 = DAT_00469b58;
  if (*piVar2 == 0x17506391) {
    *(undefined4 *)(param_1 + 0x10) = DAT_0046d064;
                    /* WARNING: Could not recover jumptable at 0x000f3f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(int **)(iVar1 + 8) + 0x1bc))();
    return uVar3;
  }
  return 1;
}
