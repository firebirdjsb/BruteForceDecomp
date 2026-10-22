/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7F34CA19B7723A48CE4F1CEB07871081AF621E3D3683E9F3A5C75A074FB81C5
 * Entry: 0x000f73d0, Ghidra index: 3098, label: FUN_000f73d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
bool FUN_000f73d0(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0046995c + 0x1c) == 0) {
    return true;
  }
  iVar1 = FUN_001020d0();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(*(undefined4 *)(iVar1 + 4));
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 8) == 0;
    }
  }
  return false;
}
