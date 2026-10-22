/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D644D65EEAA0B2250FFB6E729B2204E59C10B412C044288BED6FC6F397537720
 * Entry: 0x000e03a0, Ghidra index: 2743, label: FUN_000e03a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aba;
void FUN_000e03a0(void)

{
  int *piVar1;
  int *in_EAX;
  int unaff_ESI;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 != *(int **)(unaff_ESI + 0x54)) {
    if (piVar1 != *(int **)(unaff_ESI + 0x40)) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar1);
    }
    return;
  }
  if (piVar1 != *(int **)(unaff_ESI + 0x40)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  *(int *)(unaff_ESI + 0x54) = *piVar1;
  DAT_00469aba = 1;
  return;
}
