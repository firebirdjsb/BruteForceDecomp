/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C786E3BD2EBFD4DB6BB95BF3BE0CBC13ACFF40E81ADD5FBF0B7763636A72BF0
 * Entry: 0x001f8c50, Ghidra index: 7070, label: FUN_001f8c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
extern uint32_t DAT_0046d064;
void FUN_001f8c50(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_001febb0();
  if (*(int *)(in_ECX + 0x104) != DAT_0046d064) {
    iVar1 = (**(code **)(*DAT_00443310 + 0x54))(in_ECX + 0x104);
    if (iVar1 != 0) {
      *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(iVar1 + 8);
    }
  }
  return;
}
