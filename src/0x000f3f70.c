/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A39ABBF8018699A46FAAFFF500FD907AD8C191A0584248716ED06E1FC25FDD6C
 * Entry: 0x000f3f70, Ghidra index: 3056, label: FUN_000f3f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f3f70(undefined4 param_1)

{
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x17c))();
  if (DAT_00469ab4 != (int *)0x0) {
    (**(code **)(*DAT_00469ab4 + 0x3c))();
  }
  FUN_001ed160();
  FUN_000f3f20(param_1);
  return 1;
}
