/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 126D331553D8F60D1142BBE73C9BCFD7A6BD6D5F6A5D358F9A2C2F1A228CD6E1
 * Entry: 0x001020a0, Ghidra index: 3260, label: FUN_001020a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_001020a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00102000();
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x134))(iVar1);
  return iVar1 != 9;
}
