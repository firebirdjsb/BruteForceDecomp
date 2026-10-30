/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 556C132C2F69C3A69FE9FCAFB0F3EA86B20351B1C23C16F874B1861D3E3E1927
 * Entry: 0x001097e0, Ghidra index: 3407, label: FUN_001097e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
int * FUN_001097e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  piVar2 = *(int **)(iVar1 + 0x588);
  if (piVar2 != *(int **)(iVar1 + 0x58c)) {
    do {
      if (*piVar2 == *param_1) {
        return piVar2;
      }
      piVar2 = piVar2 + 5;
    } while (piVar2 != *(int **)(iVar1 + 0x58c));
  }
  return (int *)0x0;
}
