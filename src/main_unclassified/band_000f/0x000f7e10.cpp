/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF249EC84AA67F25CD2E831FB67A870A788FE7CF52E92823B7D15F598BC7F918
 * Entry: 0x000f7e10, Ghidra index: 3109, label: FUN_000f7e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000f7e10(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar1 != -0x104e72d8) {
    uVar2 = FUN_000f7c70();
    return uVar2;
  }
  FUN_000f7ed0();
  return 1;
}
