/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 341B6BC014764B0ACC69C5EC61DB2A54E2010F8C671C4C9683233626BFE4E77F
 * Entry: 0x000f2960, Ghidra index: 3028, label: FUN_000f2960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_000f2960(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int unaff_ESI;
  
  bVar1 = false;
  if (unaff_ESI != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar2 == -0x104e72d8) {
      iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x164))
                        (param_1,*(undefined4 *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 8));
      return iVar3 < 4;
    }
    bVar1 = true;
  }
  return bVar1;
}
