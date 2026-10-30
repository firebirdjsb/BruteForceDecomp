/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C420F034DD1FEDF6CEBD35DEFABBDD0E2F85083F201D9E13F959D78672070C15
 * Entry: 0x000fd6a0, Ghidra index: 3166, label: FUN_000fd6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
int * FUN_000fd6a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x5a8);
    if (piVar2 != *(int **)(iVar1 + 0x5ac)) {
      do {
        if (*piVar2 == *param_1) {
          return piVar2;
        }
        piVar2 = piVar2 + 5;
      } while (piVar2 != *(int **)(iVar1 + 0x5ac));
    }
  }
  return (int *)0x0;
}
